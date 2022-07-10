int p0[16][96][3] = {};
int p1[16][96][3] = {};
int p2[16][96][3] = {};
int p3[16][96][3] = {};

void convertPixelToPlane()
{
    int row = 0;
    int col = 0;
    int binaryPixel[8] = {};
    for (row = 0; row < 16; row++)
    {
        for (col = 0; col < 96; col++)
        {
            unsigned long rgb = imgPixel[row][col];
            binaryPixel[0] = rgb >> 7;
            binaryPixel[1] = (rgb & 64) >> 6;
            binaryPixel[2] = (rgb & 32) >> 5;
            binaryPixel[3] = (rgb & 16) >> 4;
            binaryPixel[4] = (rgb & 8) >> 3;
            binaryPixel[5] = (rgb & 4) >> 2;
            binaryPixel[6] = (rgb & 2) >> 1;
            binaryPixel[7] = (rgb & 1);
            p0[row][col][0] = binaryPixel[0];
            p0[row][col][1] = binaryPixel[4];
            p0[row][col][2] = binaryPixel[7];
            p1[row][col][0] = binaryPixel[0];
            p1[row][col][1] = binaryPixel[3];
            p1[row][col][2] = binaryPixel[6];
            p2[row][col][0] = binaryPixel[1];
            p2[row][col][1] = binaryPixel[4];
            p2[row][col][2] = binaryPixel[7];
            p3[row][col][0] = binaryPixel[2];
            p3[row][col][1] = binaryPixel[5];
            p3[row][col][2] = binaryPixel[7];
        }
    }
}

