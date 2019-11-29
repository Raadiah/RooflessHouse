void hind_wall(void)
{
    glPushMatrix();
    glTranslated(2.25, -0.05, -1.55);
    glScaled(0.75, 2, 0.05);
    cube();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-1.5, -0.05, -1.55);
    glScaled(1.5, 2, 0.05);
    cube();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.75, -1.45, -1.55);
    glScaled(0.75, 0.6, 0.05);
    cube();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.75, 1.35, -1.55);
    glScaled(0.75, 0.6, 0.05);
    cube();
    glPopMatrix();
}

void roofless_home(void)
{
    //base
    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D, 3);
    glEnable(GL_TEXTURE_2D);
    glTranslated(0, -2, 0);
    glScaled(3, 0.05, 1.5);
    cube();
    glDisable(GL_TEXTURE_2D);
    glPopMatrix();

    //left_wall
    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D, 2);
    glEnable(GL_TEXTURE_2D);
    glTranslated(-3.05, -0.05, 0);
    glScaled(0.05, 2, 1.5);
    glRotated(90, 0, 1, 0);
    cube();
    glDisable(GL_TEXTURE_2D);
    glPopMatrix();

    //hind_wall
    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D, 2);
    glEnable(GL_TEXTURE_2D);
    hind_wall();
    glDisable(GL_TEXTURE_2D);
    glPopMatrix();
}

