 /*
 **  Author: Basile Durand de Gevigney EI2I3 II
 **  Create Time: 2020-09-17 14:32:15
 **  Modified time: 2020-09-17 14:49:34
 **  Description: none
 */

 #include <stdio.h>

int main()
{
    int i;

    i = 0;
    while (!(++i > 100))
    {
        if (((i % 3) == 0 || (i % 10) == 3) && ((i % 7) == 0 || (i % 10) == 7))
            printf("FizzBuzz\n");
        else if ((i % 3) == 0 || (i % 10) == 3)
            printf("Fizz\n");
        else if ((i % 7) == 0 || (i % 10) == 7)
            printf("Buzz\n");
        else
            printf("%i\n", i);
    }
}