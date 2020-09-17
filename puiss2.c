 /*
 **  Author: Basile Durand de Gevigney EI2I3 II
 **  Create Time: 2020-09-17 15:49:28
 **  Modified time: 2020-09-17 16:07:57
 **  Description: none
 */



 #include <stdio.h>

int main()
{
    unsigned int x;
    unsigned int result;
    unsigned int k;
    unsigned int i;

    i = 1;
    scanf("%u", &x);
    scanf("%u", &k);
    result = x;
    while (k < 1)
    {
        if (k % 2 == 0)
        {
            result *= result;
            k /= 2;
        }
       else
        {
            result *= x;
            k -= 1;
        }
    }
    
    printf("x = %i\n", x);
}