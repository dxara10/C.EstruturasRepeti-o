#include <stdio.h>

int main()
{
    int filhos, npessoas;
    float salario, somas, somaf, msalario;
    npessoas = 0;
    somaf = 0;
    somas = 0;
    msalario = 0;
    printf("Informe o salario:\n");
    scanf("%f", &salario);
    while (salario != -1)
    {
        printf("Informe o número de filhos:\n");
        scanf("%d", &filhos);
        npessoas++;
        if (salario > msalario)
        {
            msalario = salario;
        }
        somaf = somaf + filhos;
        somas = somas + salario;
        printf("Informe o salario:\n");
        scanf("%f", &salario);
        
    }
    printf("A média de salários é: %.2f\n", somas/npessoas);
    printf("A média de filhos é: %.2f", somaf/npessoas);
    printf("O maior salario é: %.2f\n", msalario);
    return(0);
    
}
