#include <stdio.h>

#define HEIGHT 15
#define WIDTH  25


int main()
{
    //set up map
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            if( j == 0 || j == WIDTH - 1 )
            {
                printf("|");
            }
            if( (i == 0 || i == HEIGHT - 1) && j != WIDTH -1 )
            {
                printf("=");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}