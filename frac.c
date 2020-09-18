 /*
 **  Author: Basile Durand de Gevigney EI2I3 II
 **  Create Time: 2020-09-17 17:10:17
 **  Modified by: Basile Durand de Gevigney
 **  Modified time: 2020-09-17 18:00:32
 **  Description: none
 */

#include <stdio.h>

int main()
{
int a;
int d;
int b;

scanf("%d/%d",&a,&b);
d = a;
// 1 decomposition
while (d > 0)
{
    //printf("d = %i, b = %i\n",d,b);
    if (d % 2)
    {
        printf("%i/%i\n", 1, b);
        d /= 2;
    }
    b= b /2;
}
//printf("%i/%i\n", 1, b);

}