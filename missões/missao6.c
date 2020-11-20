#include <stdio.h>
#include <stdlib.h>

int escolha_do_usuario=0,num,num2;
float Imc,peso,altura,resultado;

main(){
	while(escolha_do_usuario!=6){
    	printf("menu:\n 1 - Informacoes\n 2 - Calcular Imc\n 3 - Par ou Impar\n 4 - Multiplicação\n 5 - Divisao\n 6 - Sair\n");
		scanf("%d",&escolha_do_usuario);
		if(escolha_do_usuario >6 || escolha_do_usuario<1){
			printf("insira uma opcao valida\n");
		}else{
			switch(escolha_do_usuario){
				case 1:
					printf("Nome: Vitor Manoel Aquino de Brito\n Matricula: 200028677\n Semestre - 1\n");
				break;
				
				case 2:
					printf("calculadora de IMC:\n Qual seu peso:\n qual sua Altura\n responda nesta ordem\n");
					scanf("%f",&peso);
					scanf("%f",&altura);
					Imc =peso /(altura*altura);
					printf("Seu imc e: %f\n",Imc);
				break;
				case 3:
					printf("digite um numero: ");
					scanf("%d",&num);
						if(num%2==0){
							printf("O numero %d e par\n",num);
						}else{
							printf("O numero %d e impar\n",num);
						}
				break;
				case 4:
					printf("digite dois numeros:\n");
						scanf("%d",&num);
						scanf("%d",&num2);
						printf("O resultado da multiplicacao destes numero e: %d\n", num *num2);
					break;
				case 5:
					printf("digite dois numeros,numerador e denominador,respectivamente:\n");
					scanf("%d",&num);
					scanf("%d",&num2);
					if(num==0 || num2 ==0){
						printf("Numero Invalido\n");
					}else{
						printf("O resultado da divisao destes numero e: %.2f\n",resultado = num /num2);
					}
				break;
			}
		}
	}

printf("Ate mais, Fim do programa");
    return 0;
}
