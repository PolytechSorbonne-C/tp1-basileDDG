 /*
 **  Author: Basile Durand de Gevigney EI2I3 II
 **  Create Time: 2020-09-30 07:44:56
 **  Modified by: Basile Durand de Gevigney
 **  Modified time: 2020-09-30 11:29:31
 **  Description: none
 */
#include <stdio.h>
#include <stdlib.h>

void myfrac(int x, int y)
{
    int d;

    d = 0;
    while (x != 0)
        if (x * ++d >= y)
        {
            printf(" + 1/%d", d);
            if ((y % d) == 0)
                x -= y/d;
            else
            {
                x = (x * d) - y;
                y = d * y;
            }
        } 
}

int main()
{
    int x;
    int y;

    scanf("%d/%d", &x, &y);
    printf("%d/%d = ", x, y);
    myfrac(x, y);
    printf("\n");
    exit (EXIT_SUCCESS);
}