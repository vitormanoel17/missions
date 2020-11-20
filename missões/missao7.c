#include <stdio.h>

int quantidade,i,numero,invalido=0,total,maior,menor=10,escolha_do_usuario,soma;
float media = 0;

int main(){
    printf("quantos numeros deseja inserir: \n");
    scanf("%d",&quantidade);
    while(quantidade != i){
        printf("qual numero deseja inserir:\n");
        scanf("%d",&numero);
        if(numero<0){
            printf("numero negativo e invalido\n");
            invalido++;
        }else if(numero>100){
            printf("numero maior do que 100 e invalido\n");
            invalido++;
        }else if(numero%3 == 0){
            printf("numero multiplo de 3 e invalido\n");
            invalido++ ;
        }else{
            i++;
            total++;
            media += numero;
            if(numero>maior){
                maior = numero;
            }
			if(numero<menor){
                menor = numero;
            }
        }
    }
    do{
        menu();
        switch(escolha_do_usuario){
            case 1:
            printf("foram inseridos %d numeros validos\n",total);
            break;
            case 2:
            printf("a media dos numeros inseridos e %.2f\n", media/quantidade);
            break;
            case 3:
            printf("o maior numero inserido foi %d\n",maior);
            break;
            case 4:
            printf("o menor numero inserido foi %d\n",menor);
            break;
            case 5:
            printf("a quantidade de numeros invalidos foi: %d \n",invalido);
            break;
        }
    }while(escolha_do_usuario!=6);
    return 0;
}


int menu (){
    printf("1 - total\n 2 - media\n 3- maior \n 4 - menor\n 5 - numero de regras quebradas\n 6 - sair\n");
    scanf("%d",&escolha_do_usuario);
    return escolha_do_usuario;
}
