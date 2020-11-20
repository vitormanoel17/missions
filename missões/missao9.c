#include <stdio.h>

int quantidade_de_elementos=0,i;

int main(){
    int vetor[200],numero,quant,escolha;
    do{
        escolha = menu();
        switch (escolha){
        case 1:
            printf("qual numero deseja inserir\n");
            scanf("%d",&numero);
            vetor[quantidade_de_elementos]= numero;
            quantidade_de_elementos++;
            break;
        case 2:
            listar(vetor);
            break;
        case 3:
            printf("qual posicao deseja alterar: \n");
            scanf("%d",&i);
            if(i>=quantidade_de_elementos){
                printf("posicao nao cadastrada\n");
            }else{
                printf("qual o novo numero: \n");
                scanf("%d",&numero);
                vetor[i]= numero;
            }
            break;
        case 4:
            printf("qual posicao deseja excluir: \n");
            scanf("%d",&i);
            if(i>=quantidade_de_elementos){
                printf("posicao nao cadastrada\n");
            }else{
                quantidade_de_elementos--;
                for(i=i;i<quantidade_de_elementos;i++){
                    vetor[i]=vetor[i+1];
                }
            }
            break;
        case 5: 
            mostramedia(vetor);
            break;
        default:
            if(escolha!=6)
                printf("tente novamente");
            break;

        }
    }while(escolha!= 6);
    printf("ate mais\n");
    return 0;
}

// função para imprimir o menu e retornar a escolha do usuário
int menu(){
    int escolha;
    printf("1 - inserir numero\n");
    printf("2 - Listar numeros\n");
    printf("3 - Editar posicao\n");
    printf("4 - Excluir posicao\n");
    printf("5 - Listar numeros maiores que a media\n");
    printf("6 - Sair\n");
    scanf("%d",&escolha);
return escolha;
}

//função para listar os numeros cadastrados
void listar( int *vetor){
    printf("os numeros sao: \n");
    for(i=0 ;i<quantidade_de_elementos;i++){
        printf("%d\n",vetor[i]);
    }
}

//função para mostrar os números cadastrados que são maiores que a média
void mostramedia ( int *vetor){
    float media;
    for(i=0;i<quantidade_de_elementos;i++){
        media += vetor[i];
    }
        media/= quantidade_de_elementos;
    for(i=0;i<quantidade_de_elementos;i++){
        if(media<vetor[i]){
            printf("numeros maiores que a media: \n");
            printf("%d\n",vetor[i]);
        }
    }
}