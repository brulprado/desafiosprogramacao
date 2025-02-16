#include <stdio.h>

    int main (){

        int numero = 5, resultado;

        resultado = numero % 2;
        
        printf ("A variavel resultado é: %d\n", resultado);
        if (resultado ==0){

            printf("O numero é par!\n");
        }
    }

    // % é o resultado do resto da divisão
    // exemplo - 3,50 ( o resultado de % é o numero 0)
    // retornar falso = quando nao imprime o resultado que voce pediu no printf