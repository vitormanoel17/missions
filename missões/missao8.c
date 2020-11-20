#include <stdio.h>

int escolha_do_usuario, negativo, triplo, numprimo, maior, menor=1000;

int main()
{

    int  numero, quantidade, total = 0, erro=0;
    float media;

    printf("digite a quantidade de numeros que deseja inserir:\n");
    scanf("%d", &quantidade);

    while (total < quantidade)
    {
        printf("digite um numero:\n");
        scanf("%d", &numero);
        if (numero < 0)
        {
            printf("numero negativo, invalido\n");
            erro++;
            negativo++;
        }
        else if (numero >= quantidade * 3 && numeroprimo(numero) == 1)
        {
            printf("numero primo e numero maior ou igual ao triplo de %d\n", quantidade);
            erro++;
            triplo++;
            numprimo++;
        }
        else if (numero >= quantidade * 3)
        {
            printf("numero maior ou igual ao triplo de %d\n", quantidade);
            erro++;
            triplo++;
        }
        else if (numeroprimo(numero) == 1)
        {
            printf("numero primo inserido,invalido\n");
            erro++;
            numprimo++;
        }
        else
        {
            maioroumenor(numero);
            media += numero;
            total++;
        }
    }
    do
    {
        switch (menu())
        {
        case 1:
            printf("o total de numeros validos foi: %d\n", total);
            break;
        case 2:
            printf("o total de tentativas invalidas foi: %d\n", erro);
            break;
        case 3:
            printf("A media foi: %.2f\n", media / total);
            break;
        case 4:
            printf("O maior numero foi: %d\n", maior);
            break;
        case 5:
            printf("O menor numero foi: %d\n", menor);
            break;
        case 6:
            regracritica();
            break;
        default:
            if(escolha_do_usuario !=7)
            {
            printf("tentativa invalida, tente novamente \n");
            }
            break;
        }
    } while (escolha_do_usuario != 7);
    printf("Ate mais");
    return 0;
}

int menu()
{
    printf(" 1 - Total de numero validos\n 2 - Total de tentativas invalidas\n");
    printf(" 3 - Media\n 4 - Maior\n 5 - Menor\n");
    printf(" 6 - Regra critica (Que causou o maior numero de problemas)\n 7 - Sair\n");
    scanf("%d", &escolha_do_usuario);

    return escolha_do_usuario;
}

int numeroprimo(int numero)
{
    int i, primo = 0;
    for (i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            primo++;
        }
    }
    if (primo == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void maioroumenor(int numero)
{
    if (numero > maior)
    {
        maior = numero;
    }
    if (numero < menor)
    {
        menor = numero;
    }
}

void regracritica()
{
    if (negativo > triplo && negativo > numprimo)
    {
        printf("Os Numeros negativos foram a Regra critica\n ");
    }
    else if (triplo > negativo && triplo > numprimo)
    {
        printf("Os Numeros maiores ou igual ao triplo de n foram a Regra critica\n ");
    }
    else if (numprimo > negativo && numprimo > triplo)
    {
        printf("Os Numeros primos foram a Regra critica\n ");
    }
    else
    {
        printf("As regra foram quebradas na mesma quantidade\n ");
    }
}