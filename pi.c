 /*
 **  Author: Basile Durand de Gevigney EI2I3 II
 **  Create Time: 2020-09-17 15:00:09
 **  Modified time: 2020-09-17 15:38:00
 **  Description: none
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

 #define PRECISION 10000
/*
** equation du cercle = (x - a)² (y - b)² = R²
** donc on verifi que x² +   y² < 1²
*/
int main()
{
    int i;
    int p;
    float x;
    float y;

    i = 0;
    p = 0;
    srand(time(NULL));
    while (++i < PRECISION)
    {
        x = (((float)(rand()) / RAND_MAX ) * 2) -1;
        y = (((float)(rand()) / RAND_MAX ) * 2) -1;
        if (x * x + y * y < 1)
            p += 1;
    } 
    printf("pi est approx = %f\n", ((float)p / PRECISION) * 4);
}