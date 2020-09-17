 /*
 **  Author: Basile Durand de Gevigney EI2I3 II
 **  Create Time: 2020-09-17 16:11:33
 **  Modified by: Basile Durand de Gevigney
 **  Modified time: 2020-09-17 17:01:22
 **  Description: none
 */
 
 #include <stdio.h>

int main()
{
    int result;
    char t45;

    result = 0;
    scanf("%c", &t45);
    while((t45 >= '0' && t45 <= '9') || (t45 >= 'A' && t45 <= 'F'))
    {
        if (t45 >= 'A' && t45 <= 'F')
            result = (result * 16) + ((t45 - 'A') + 10);
        else
            result = (result * 16) + (t45 - '0');
        
        scanf("%c", &t45);
    }
    printf("le nombre en decimal est %i\n",result);
}