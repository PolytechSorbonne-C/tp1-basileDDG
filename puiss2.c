 /*
 **  Author: Basile Durand de Gevigney EI2I3 II
 **  Create Time: 2020-09-17 15:49:28
 **  Modified time: 2020-09-18 08:28:58
 **  Description: none
 */
 #include <stdio.h>
 #include <stdlib.h>

int func(int x, int k)
{
    if (k <= 1)
        return x; 
    if (k % 2)
        return (func(x, k - 1) * x);
    return func(x * x, k/2);
}

int main()
{
    int x;
    int y;

    scanf("%d", &x);
    scanf("%d", &y);
    printf("result : %i\n", func(x, y));
    return EXIT_SUCCESS;
}