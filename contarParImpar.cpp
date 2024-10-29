#include <stdio.h>

int main()
{
    int par, impar, num;
    par = 0;
    impar = 0;
    printf("Informe o número:\n");
    scanf("%d", &num);
    while (num != 0)
    {
        if (num % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
        printf("Informe o número:\n");
        scanf("%d", &num);
    }
    printf("A quantidade de par é %d", &par);
    printf("A quantidade de impar é %d", &impar);
    return(0);
}
