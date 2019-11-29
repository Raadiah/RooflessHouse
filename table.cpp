void table(void)
{
    //top
    //glColor3d(0, 0, 0);
    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D, 5);
    glEnable(GL_TEXTURE_2D);
    glTranslated(0, 0.9, 0);
    glScaled(3, 0.05, 1.5);
    glRotated(90, 1, 0, 0);
    cube();
    glDisable(GL_TEXTURE_2D);
    glPopMatrix();


    //left_front_leg

    glBindTexture(GL_TEXTURE_2D, 6);
    glEnable(GL_TEXTURE_2D);

    glPushMatrix();
    glTranslated(-2.5,-0.35,1);
    glScaled(0.15, 1.2, 0.15);
    cube();
    glPopMatrix();

    //right_front_leg
    glPushMatrix();
    glTranslated(2.5,-0.35,1);
    glScaled(0.15, 1.2, 0.15);
    cube();
    glPopMatrix();

    //hind_left_leg
    glPushMatrix();
    glTranslated(-2.5,-0.35,-1);
    glScaled(0.15, 1.2, 0.15);
    cube();
    glPopMatrix();

    //hind_right_leg
    glPushMatrix();
    glTranslated(2.5,-0.35,-1);
    glScaled(0.15, 1.2, 0.15);
    cube();
    glPopMatrix();

    //front_base

    glPushMatrix();
    glTranslated(0, 0.7, 1);
    glScaled(2.35, 0.15, 0.15);
    cube();
    glPopMatrix();

    //hind_base
    glPushMatrix();
    glTranslated(0, 0.7, -1);
    glScaled(2.35, 0.15, 0.15);
    cube();
    glPopMatrix();

    //right_base
    glPushMatrix();
    glTranslated(2.5, 0.7, 0);
    glScaled(0.15, 0.15, 0.925);
    cube();
    glPopMatrix();

    //left_base
    glPushMatrix();
    glTranslated(-2.5, 0.7, 0);
    glScaled(0.15, 0.15, 0.925);
    cube();
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);
}
