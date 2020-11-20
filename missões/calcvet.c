/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

float peso;
int x;
float n;

int main()
{
printf("qual o medicamento: 1 - amoxilina 2 - dipirona 3-omeprazol: ");
scanf("%d",&x);
printf("qual o peso: ");
scanf("%f",&peso);
    if (x == 1) {
        n =(25 * peso)/50;
        printf(" o valor a ser aplicado e: %f mg/kg",n);
    }else{
        if (x == 2){
           n =( 25 * peso)/500;
           printf("o valor a ser aplicado e: %f mg/kg",n);
        }else{
            if (x == 3){
               n= (1 * peso)/40;
                printf("o valor a ser aplicado e: %f mg/kg",n);
            }else{ 
                printf("error");
            }
        }
    }
    return 0;
}
