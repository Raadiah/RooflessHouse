void cone(void)
{
    int i;
    double theta, x= 0, y = 0;

    //front surface
    glBegin(GL_POLYGON);
    for(i = 360; i >= 0; i--)
    {
        theta = PI * i / 180;
        glVertex3d(cos(theta), sin(theta), -1);
    }
    glEnd();

    glBegin(GL_QUAD_STRIP);
    for(i = 0; i <= 360; i++)
    {
        theta = PI * i / 180;
        glVertex3d(0, 0, 0);
        glVertex3d(cos(theta), sin(theta), -1);
    }
    glEnd();
}

void cylinder (void)
{
    int i;
    double theta, x= 0, y = 0;

    //front surface
    glBegin(GL_POLYGON);
    for(i = 0; i <= 360; i++)
    {
        theta = PI * i / 180;
        glVertex3d(cos(theta), sin(theta), 0.1);
    }
    glEnd();

    //back surface
    glBegin(GL_POLYGON);
    for(i = 360; i >= 0; i--)
    {
        theta = PI * i / 180;
        glVertex3d(cos(theta), sin(theta), -0.1);
    }
    glEnd();

    glBegin(GL_QUAD_STRIP);
    for(i = 0; i <= 360; i++)
    {
        theta = PI * i / 180;
        glVertex3d(cos(theta), sin(theta), 0.1);
        glVertex3d(cos(theta), sin(theta), -0.1);
    }
    glEnd();
}


void surrounding(void)
{
    int i;
    double theta;

    glBegin(GL_QUAD_STRIP);
    for(i = 330; i >= 30; i--)
    {
        theta = PI * i / 180;
        glVertex3d(35*sin(theta), 0.5, 35*cos(theta));
        glVertex3d(35*sin(theta), 0, 35*cos(theta));
    }
    glEnd();
}


void blades (void)
{
    glPushMatrix();
    glScaled(1.2,0.2,0.03);
    cube();
    glPopMatrix();

    glPushMatrix();
    glTranslated(1.2, 0, 0);
    glScaled(0.2,0.2,0.05);
    cylinder();
    glPopMatrix();
}



void windmill (void)
{
    if(switch_on)
    {
        br--;
    }

    double br_x, br_y, br_z;
    br_x = br;
    br_y = br + 120;
    br_z = br + 240;

    //blade-red
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT,   w_r_b_mat_ambient);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE,   w_r_b_mat_diffuse);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR,  w_r_b_mat_specular);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, w_r_b_high_shininess);
    //glColor3d(0.545,0,0);
    glPushMatrix();
    glTranslated(0,2.85,0.52);
    glRotated(br_x,0,0,1);
    glTranslated(1.2, 0, 0);
    blades();
    glPopMatrix();

    //blade-green
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT,   w_g_b_mat_ambient);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE,   w_g_b_mat_diffuse);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR,  w_g_b_mat_specular);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, w_g_b_high_shininess);
    //glColor3d(0.004, 0.196,0.125);
    glPushMatrix();
    glTranslated(0,2.85,0.52);
    glRotated(br_y,0,0,1);
    glTranslated(1.2, 0, 0);
    blades();
    glPopMatrix();

    //blade-blue
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT,   w_b_b_mat_ambient);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE,   w_b_b_mat_diffuse);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR,  w_b_b_mat_specular);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, w_b_b_high_shininess);
    //glColor3d(0, 0,0.502);
    glPushMatrix();
    glTranslated(0,2.85,0.52);
    glRotated(br_z,0,0,1);
    glTranslated(1.2, 0, 0);
    blades();
    glPopMatrix();

    //circle-plate
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT,   w_c_p_mat_ambient);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE,   w_c_p_mat_diffuse);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR,  w_c_p_mat_specular);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, w_c_p_high_shininess);

    //glColor3d(0.7529, 0.7529, 0.7529);
    glPushMatrix();
    glTranslated(0, 2.85, 0.55);
    glScaled(0.24, 0.24, 0.02);
    cylinder();
    glPopMatrix();

    //cone
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT,   w_y_c_mat_ambient);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE,   w_y_c_mat_diffuse);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR,  w_y_c_mat_specular);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, w_y_c_high_shininess);
    //glColor3d(1,1,0);
    glPushMatrix();
    glTranslated(0, 2.85, 0.68);
    glRotated(0, 1, 0, 0);
    glScaled(0.08, 0.08, 0.1);
    cone();
    glPopMatrix();

    //main cylinder
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT,   w_m_c_mat_ambient);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE,   w_m_c_mat_diffuse);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR,  w_m_c_mat_specular);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, w_m_c_high_shininess);
    //glColor3d(0.529, 0.808, 0.922);
    glPushMatrix();
    glTranslated(0, 2.85, 0);
    glScaled(0.25, 0.23, 4.6);
    cylinder();
    glPopMatrix();


    //black-cylinder- front
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT,   w_b_c_mat_ambient);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE,   w_b_c_mat_diffuse);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR,  w_b_c_mat_specular);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, w_b_c_high_shininess);
    //glColor3d(0,0,0);
    glPushMatrix();
    glTranslated(0, 2.85, 0.52);
    glScaled(0.04, 0.04, 0.6);
    cylinder();
    glPopMatrix();

    //inner cylinder - black- back
    //glColor3d(0,0,0);
    glPushMatrix();
    glTranslated(0, 2.85, -0.52);
    glScaled(0.04, 0.04, 0.6);
    cylinder();
    glPopMatrix();

    //tail
    //glColor3d(0.961, 0.949, 0.8157);
    glPushMatrix();
    glTranslated(0.1, 2.69, -0.67);
    glScaled(0.45, 0.1, 0.05);
    //cube();
    glPopMatrix();

    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT,   w_b_mat_ambient);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE,   w_b_mat_diffuse);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR,  w_b_mat_specular);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, w_b_high_shininess);

    //upper_base
    //glColor3d(0.71, 0.60, 0.298);
    glPushMatrix();
    glTranslated(0, 2.55, 0);
    glScaled(0.5, 0.07, 0.5);
    cube();
    glPopMatrix();


    //lower-base color
    //glColor3d(0.71, 0.60, 0.298);


    //front-left leg
    glPushMatrix();
    glTranslated(-0.5, 0, 0.5);
    glRotated(-5, 0, 0, 1);
    glRotated(-5, 1, 0, 0);
    glScaled(0.09, 2.5, 0.09);
    cube();
    glPopMatrix();

    //front-right leg
    glPushMatrix();
    glTranslated(0.5, 0, 0.5);
    glRotated(5, 0, 0, 1);
    glRotated(-5, 1, 0, 0);
    glScaled(0.09, 2.5, 0.09);
    cube();
    glPopMatrix();

    //back-left leg
    glPushMatrix();
    glTranslated(-0.5, 0, -0.5);
    glRotated(-5, 0, 0, 1);
    glRotated(5, 1, 0, 0);
    glScaled(0.09, 2.5, 0.09);
    cube();
    glPopMatrix();

    //back-right leg
    glPushMatrix();
    glTranslated(0.5, 0, -0.5);
    glRotated(5, 0, 0, 1);
    glRotated(5, 1, 0, 0);
    glScaled(0.09, 2.5, 0.09);
    cube();
    glPopMatrix();

    //stick-1 front-upper
    glPushMatrix();
    glTranslated(0, 1.3, 0.4);
    glScaled(0.3, 0.09, 0.09);
    cube();
    glPopMatrix();

    //stick-2 back-upper
    glPushMatrix();
    glTranslated(0, 1.3, -0.4);
    glScaled(0.3, 0.09, 0.09);
    cube();
    glPopMatrix();

    //stick-3 right-upper
    glPushMatrix();
    glTranslated(0.4, 1.3, 0);
    glScaled(0.09, 0.09, 0.3);
    cube();
    glPopMatrix();

    //stick-4 left-upper
    glPushMatrix();
    glTranslated(-0.4, 1.3, 0);
    glScaled(0.09, 0.09, 0.3);
    cube();
    glPopMatrix();

    //stick-5 front medium
    glPushMatrix();
    glTranslated(0, 0, 0.5);
    glScaled(0.58, 0.09, 0.09);
    cube();
    glPopMatrix();

    //stick-6 back medium
    glPushMatrix();
    glTranslated(0, 0, -0.5);
    glScaled(0.58, 0.09, 0.09);
    cube();
    glPopMatrix();

    //stick-7 medium right
    glPushMatrix();
    glTranslated(0.5, 0, 0);
    glScaled(0.09, 0.09, 0.58);
    cube();
    glPopMatrix();

    //stick-8 medium left
    glPushMatrix();
    glTranslated(-0.5, 0, 0);
    glScaled(0.09, 0.09, 0.58);
    cube();
    glPopMatrix();

    //stick-9 front-lower
    glPushMatrix();
    glTranslated(0, -1.3, 0.63);
    glScaled(0.62, 0.09, 0.09);
    cube();
    glPopMatrix();

    //stick-10 back-lower
    glPushMatrix();
    glTranslated(0, -1.3, -0.63);
    glScaled( 0.62, 0.09, 0.09);
    cube();
    glPopMatrix();

    //stick-11 top-lower
    glPushMatrix();
    glTranslated(0.63, -1.3, 0);
    glScaled(0.09, 0.09, 0.62);
    cube();
    glPopMatrix();

    //stick-12 left-lower
    glPushMatrix();
    glTranslated(-0.63, -1.3, 0);
    glScaled(0.09, 0.09, 0.62);
    cube();
    glPopMatrix();

}
