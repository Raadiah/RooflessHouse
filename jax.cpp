void jax (void)
{
    //centre cylinder
    glPushMatrix();
    glScaled(0.15, 1.5, 0.15);
    glutSolidSphere(1, slices, stacks);
    glPopMatrix();

    //z-axis cylinder
    glPushMatrix();
    glScaled(0.15, 0.15, 1.5);
    glutSolidSphere(1, slices, stacks);
    glPopMatrix();

    //x-axis cylinder
    glPushMatrix();
    glScaled(1.5, 0.15, 0.15);
    glutSolidSphere(1, slices, stacks);
    glPopMatrix();

    //spheres

    //z-axis-front
    glPushMatrix();
    glTranslated(0, 0, 1.3);
    glutSolidSphere(0.27, slices, stacks);
    glPopMatrix();

    //z-axis-back
    glPushMatrix();
    glTranslated(0, 0, -1.3);
    glutSolidSphere(0.27, slices, stacks);
    glPopMatrix();

    //x-axis-front
    glPushMatrix();
    glTranslated(1.3, 0, 0);
    glutSolidSphere(0.27, slices, stacks);
    glPopMatrix();

    //x-axis-back
    glPushMatrix();
    glTranslated(-1.3, 0, 0);
    glutSolidSphere(0.27, slices, stacks);
    glPopMatrix();
}


