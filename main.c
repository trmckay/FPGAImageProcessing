#include <stdio.h>

static unsigned char *image;
static unsigned int len = 76800;
static unsigned int num_rows = 240;
static unsigned int num_cols = 320;

int main()
{
    // for each pixel
    int offset = 0;
    for (int row = 0; row < num_rows; row++)
    {
        for (int col = 0; col < num_cols; col++)
        {
            // draw it
            offset++;
            unsigned char RGB = *(image + offset);
            draw_dot(row, col, RGB);
        }
    }

    // sleep for 500,000 instructions
    sleep(500000);

    // convert image to grayscale
    grayscale(image, image+len);
    return 0;
}
