static GLdouble posX=0, posY=0, posZ=12;
static GLdouble upX=0, upY=1, upZ=0;
static GLdouble dirX=0, dirY=0, dirZ=0;

static GLdouble cam_frontX=0, cam_frontY=1, cam_frontZ=-1;

static GLdouble pitch = 0, yaw = 90, roll = 90;

static void camera()
{

    cam_frontX = cos(pitch * PI / 180) * cos(yaw * PI / 180);
    cam_frontY = sin(pitch * PI / 180) * sin(yaw * PI / 180);
    cam_frontZ = -cos(pitch * PI / 180) * sin(yaw * PI / 180);

    dirX = posX + cam_frontX;
    dirY = posY + cam_frontY;
    dirZ = posZ + cam_frontZ;

    upX = cos(roll * PI / 180);
    upY = sin(roll * PI / 180);
    upZ = -sin(roll * PI / 180)*cos(roll * PI / 180);


    gluLookAt(posX, posY, posZ, dirX, dirY, dirZ, upX, upY, upZ);
}
