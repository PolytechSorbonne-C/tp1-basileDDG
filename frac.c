 /*
 **  Author: Basile Durand de Gevigney EI2I3 II
 **  Create Time: 2020-09-17 17:10:17
 **  Modified by: Basile Durand de Gevigney
 **  Modified time: 2020-09-18 11:52:04
 **  Description: none
 */

#include <stdio.h>
#define PRECISION 1000000

int main()
{
int a;
int d;
int b;
long double nbr;

scanf("%d/%d",&a,&b);
nbr = a/(long double)b;
d = 1;
printf("%i/%i =", a, b);
while (nbr > 0 && d < PRECISION - 1)
{
    //printf(" + %i >= %i ?", ((unsigned int)(nbr * PRECISION)), (unsigned int)((1/(long double)d)* PRECISION));
    if (((unsigned int)(nbr * PRECISION )) >= (unsigned int)((1/(long double)d)* PRECISION))
    {
        nbr -= 1/(long double)d;
        printf(" + %i/%i", 1, d);
    }
    d++;
}
printf("\n");

}