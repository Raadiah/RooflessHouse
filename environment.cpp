void environment (void)
{
    glPushMatrix();
    glScaled(1.5, 1, 1.4);
    roofless_home();
    glDisable(GL_TEXTURE_2D);
    glPopMatrix();

    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D, 4);
    glEnable(GL_TEXTURE_2D);
    glTranslated(0,-2.5,0);
    glScaled(1, 50, 1);
    surrounding();
    glDisable(GL_TEXTURE_2D);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0, -2.2, 0);
    glRotated(90, 1,  0, 0);
    ground();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-2,-1.17,0);
    glScaled(0.5, 0.5, 0.5);
    table();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-2.5,-0.21,0);
    glScaled(0.2, 0.2, 0.2);
    windmill();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-1.5, -0.511, 0);
    glRotated(45, 1, 0, 1);
    glScaled(0.2, 0.2, 0.2);
    jax();
    glPopMatrix();

}

