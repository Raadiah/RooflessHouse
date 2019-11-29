void ground(void)
{
    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D, 1);
    glEnable(GL_TEXTURE_2D);
    glScaled(35, 35, 1);
    cylinder();
    glDisable(GL_TEXTURE_2D);
    glPopMatrix();
}

