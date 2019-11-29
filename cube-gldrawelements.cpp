static GLdouble Indices [8 * 3] =
{
    -1, -1, 1,
    1, -1, 1,
    1, 1, 1,
    -1, 1, 1,
    -1, -1, -1,
    -1, 1, -1,
    1, 1, -1,
    1, -1, -1
};
/*
static GLdouble Indices [8 * 3] =
{
    0, 0, 1,
    1, 0, 1,
    1, 1, 1,
    0, 1, 1,
    0, 0, 0,
    0, 1, 0,
    1, 1, 0,
    1, 0, 0
};
*/

static GLubyte cube_indx [24] =
{
    0, 1, 2, 3,
    4, 5, 6, 7,
    1, 7, 6, 2,
    0, 3, 5, 4,
    2, 6, 5, 3,
    0, 4, 7, 1
};


void cube (void)
{
    glEnableClientState( GL_VERTEX_ARRAY );
    glVertexPointer(3, GL_DOUBLE, 3 * sizeof(GLdouble), Indices);
    glDrawElements(GL_QUADS, 24, GL_UNSIGNED_BYTE, cube_indx);
    glDisableClientState( GL_VERTEX_ARRAY );
}

