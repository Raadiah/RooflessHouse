static void key(unsigned char key, int x, int y)
{
    static double radi = 5;
    if(key == 'p')
    {
        if(switch_on)
            switch_on=0;
        else
            switch_on = 1;
    }
    switch (key)
    {

    //for_translation flag
    case 't':
        if(tr)
            tr = 0;
        else
        {
            tr = 1;
            ro = 0;
            sc = 0;
        }
        break;

    //for rotation flag
    case 'r':
        if(ro)
            ro = 0;
        else
        {
            tr = 0;
            ro = 1;
            sc = 0;
        }
        break;

    //for scaling flag
    case 'S':
        if(sc)
            sc = 0;
        else
        {
            tr = 0;
            ro = 0;
            sc = 1;
        }
        break;

    case 'x':
        if(tr)
            tx++;
        else if(sc)
            sx++;
        else if(ro)
            rx++;
        break;

    case 'X':
        if(tr)
            tx--;
        else if(sc)
            sx--;
        else if(ro)
            rx--;
        break;

    case 'y':
        if(tr)
            ty++;
        else if(sc)
            sy++;
        else if(ro)
            ry++;
        break;

    case 'Y':
        if(tr)
            ty--;
        else if(sc)
            sy--;
        else if(ro)
            ry--;
        break;

    case 'z':
        if(tr)
            tz++;
        else if(sc)
            sz++;
        else if(ro)
            rz++;
        break;

    case 'Z':
        if(tr)
            tz--;
        else if(sc)
            sz--;
        else if(ro)
            rz--;
        break;

    case 'l':
        if(light_0)
        {
            light_0 = 0;
        }
        else
        {
            light_0 = 1;
            s_light_0 = 0;
        }
        n_light();
        break;

    case 'L':
        if(s_light_0)
        {
            s_light_0 = 0;
        }
        else
        {
            s_light_0 = 1;
            light_0 = 0;
        }
        s_light();
        break;

    //camera movement
    case 'w':
            posX += cam_frontX;
            posY += cam_frontY;
            posZ += cam_frontZ;
        break;
    case 's':
            posX -= cam_frontX;
            posY -= cam_frontY;
            posZ -= cam_frontZ;
        break;

    case 'a':
            posX -= (cam_frontY*upZ)-(upY*cam_frontZ);
            posY -= (cam_frontZ*upX)-(upZ*cam_frontX);
            posZ -= (cam_frontX*upY)-(upX*cam_frontY);
        break;
    case 'd':
            posX += (cam_frontY*upZ)-(upY*cam_frontZ);
            posY += (cam_frontZ*upX)-(cam_frontX*upZ);
            posZ += (cam_frontX*upY)-(upX*cam_frontY);
        break;

    case 'j':
            posX += upX;
            posY += upY;
            posZ += upZ;
        break;

    case 'k':
            posX -= upX;
            posY -= upY;
            posZ -= upZ;
        break;

    case 'c':
            posX += (cam_frontY*upZ)-(upY*cam_frontZ);
            posY += (cam_frontZ*upX)-(cam_frontX*upZ);
            posZ += (cam_frontX*upY)-(upX*cam_frontY);
            yaw+=radi;
        break;

    case 'C':
            posX -= (cam_frontY*upZ)-(upY*cam_frontZ);
            posY -= (cam_frontZ*upX)-(cam_frontX*upZ);
            posZ -= (cam_frontX*upY)-(upX*cam_frontY);
            yaw-=radi;
        break;

    case '1':
        pitch++;
        break;

    case '2':
        pitch--;
        break;

    case '3':
        yaw++;
        break;

    case '4':
        yaw--;
        break;

    case '5':
        roll--;
        break;

    case '6':
        roll++;
        break;

    case 'q':
        exit(0);
        break;
    }

    glutPostRedisplay();

}

