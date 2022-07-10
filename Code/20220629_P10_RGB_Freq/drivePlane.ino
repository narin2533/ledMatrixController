void drivePlane()
{
    for (int plane = 0; plane < 4; plane++)
    {
        for (int flush = 0; flush < 2; flush++)
        {

            for (int display = 0; display < 3; display++)
            {

                //////drivePixel
                drivePixel(0, 4 + flush, 7 + (display * 32), 0 + (display * 32), plane);
                drivePixel(1, 6 + flush, 0 + (display * 32), 7 + (display * 32), plane);
                drivePixel(0, 4 + flush, 15 + (display * 32), 8 + (display * 32), plane);
                drivePixel(1, 6 + flush, 8 + (display * 32), 15 + (display * 32), plane);
                drivePixel(0, 4 + flush, 23 + (display * 32), 16 + (display * 32), plane);
                drivePixel(1, 6 + flush, 16 + (display * 32), 23 + (display * 32), plane);
                drivePixel(0, 4 + flush, 31 + (display * 32), 24 + (display * 32), plane);
                drivePixel(1, 6 + flush, 24 + (display * 32), 31 + (display * 32), plane);
                //////
                drivePixel(0, 0 + flush, 7 + (display * 32), 0 + (display * 32), plane);
                drivePixel(1, 2 + flush, 0 + (display * 32), 7 + (display * 32), plane);
                drivePixel(0, 0 + flush, 15 + (display * 32), 8 + (display * 32), plane);
                drivePixel(1, 2 + flush, 8 + (display * 32), 15 + (display * 32), plane);
                drivePixel(0, 0 + flush, 23 + (display * 32), 16 + (display * 32), plane);
                drivePixel(1, 2 + flush, 16 + (display * 32), 23 + (display * 32), plane);
                drivePixel(0, 0 + flush, 31 + (display * 32), 24 + (display * 32), plane);
                drivePixel(1, 2 + flush, 24 + (display * 32), 31 + (display * 32), plane);
                //oe_controller(1);
                if (flush == 0)
                {
                    a_controller(0);
                    b_controller(1);
                }
                if (flush == 1)
                {
                    a_controller(1);
                    b_controller(0);
                }
                //oe_controller(0);
                latch_controller();
                delay(1);
            }
        }
    }
}

void drivePixel(int caseSegment, int row, int startFor, int endFor, int plane)
{
    if (plane == 0)
    {

        if (caseSegment == 0)
        {
            for (int i = startFor; i >= endFor; i--)
            {
                digitalWrite(R1, p0[row][i][0]);
                digitalWrite(G1, p0[row][i][1]);
                digitalWrite(B1, p0[row][i][2]);
                digitalWrite(R2, p0[row + 8][i][0]);
                digitalWrite(G2, p0[row + 8][i][1]);
                digitalWrite(B2, p0[row + 8][i][2]);
                clock_controller();
            }
        }

        if (caseSegment == 1)
        {
            for (int i = startFor; i <= endFor; i++)
            {
                digitalWrite(R1, p0[row][i][0]);
                digitalWrite(G1, p0[row][i][1]);
                digitalWrite(B1, p0[row][i][2]);
                digitalWrite(R2, p0[row + 8][i][0]);
                digitalWrite(G2, p0[row + 8][i][1]);
                digitalWrite(B2, p0[row + 8][i][2]);
                clock_controller();
            }
        }
    }

    if (plane == 1)
    {

        if (caseSegment == 0)
        {
            for (int i = startFor; i >= endFor; i--)
            {
                digitalWrite(R1, p1[row][i][0]);
                digitalWrite(G1, p1[row][i][1]);
                digitalWrite(B1, p1[row][i][2]);
                digitalWrite(R2, p1[row + 8][i][0]);
                digitalWrite(G2, p1[row + 8][i][1]);
                digitalWrite(B2, p1[row + 8][i][2]);
                clock_controller();
            }
        }

        if (caseSegment == 1)
        {
            for (int i = startFor; i <= endFor; i++)
            {
                digitalWrite(R1, p1[row][i][0]);
                digitalWrite(G1, p1[row][i][1]);
                digitalWrite(B1, p1[row][i][2]);
                digitalWrite(R2, p1[row + 8][i][0]);
                digitalWrite(G2, p1[row + 8][i][1]);
                digitalWrite(B2, p1[row + 8][i][2]);
                clock_controller();
            }
        }
    }

    if (plane == 2)
    {

        if (caseSegment == 0)
        {
            for (int i = startFor; i >= endFor; i--)
            {
                digitalWrite(R1, p2[row][i][0]);
                digitalWrite(G1, p2[row][i][1]);
                digitalWrite(B1, p2[row][i][2]);
                digitalWrite(R2, p2[row + 8][i][0]);
                digitalWrite(G2, p2[row + 8][i][1]);
                digitalWrite(B2, p2[row + 8][i][2]);
                clock_controller();
            }
        }

        if (caseSegment == 1)
        {
            for (int i = startFor; i <= endFor; i++)
            {
                digitalWrite(R1, p2[row][i][0]);
                digitalWrite(G1, p2[row][i][1]);
                digitalWrite(B1, p2[row][i][2]);
                digitalWrite(R2, p2[row + 8][i][0]);
                digitalWrite(G2, p2[row + 8][i][1]);
                digitalWrite(B2, p2[row + 8][i][2]);
                clock_controller();
            }
        }
    }

    if (plane == 3)
    {

        if (caseSegment == 0)
        {
            for (int i = startFor; i >= endFor; i--)
            {
                digitalWrite(R1, p3[row][i][0]);
                digitalWrite(G1, p3[row][i][1]);
                digitalWrite(B1, p3[row][i][2]);
                digitalWrite(R2, p3[row + 8][i][0]);
                digitalWrite(G2, p3[row + 8][i][1]);
                digitalWrite(B2, p3[row + 8][i][2]);
                clock_controller();
            }
        }

        if (caseSegment == 1)
        {
            for (int i = startFor; i <= endFor; i++)
            {
                digitalWrite(R1, p3[row][i][0]);
                digitalWrite(G1, p3[row][i][1]);
                digitalWrite(B1, p3[row][i][2]);
                digitalWrite(R2, p3[row + 8][i][0]);
                digitalWrite(G2, p3[row + 8][i][1]);
                digitalWrite(B2, p3[row + 8][i][2]);
                clock_controller();
            }
        }
    }
}