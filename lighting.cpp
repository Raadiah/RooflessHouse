void n_light(void)
{
    if(light_0)
    {
        glEnable(GL_LIGHT0);
    }
    else
    {
        glDisable(GL_LIGHT0);
    }

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

}

void s_light(void)
{
    if(s_light_0)
    {
        glEnable(GL_LIGHT0);
    }
    else
    {
        glDisable(GL_LIGHT0);
    }


    glLightfv(GL_LIGHT0, GL_AMBIENT,  AmbientLight);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  DiffuseLight);
    glLightfv(GL_LIGHT0, GL_SPECULAR, SpecularLight);
    glLightfv(GL_LIGHT0, GL_POSITION, LightPosition);

    glLightf(GL_LIGHT0, GL_SPOT_CUTOFF, 20);// set cutoff angle
    glLightfv(GL_LIGHT0, GL_SPOT_DIRECTION, dirVector0);
    glLightf(GL_LIGHT0, GL_SPOT_EXPONENT, 10); // set focusing strength

}

