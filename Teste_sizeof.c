// Teste no ambiente linux
#include <stdio.h>

    int main(){

        int numeroNormal = 2147483647; //valor maximo de int
        long long int numeroGrande = 2147483647;

            printf("Numero Regular (int): %d\n" , numeroNormal);
            printf("Numero Grande (long int): %lld\n" , numeroGrande);

            numeroGrande = 2147483648; // Valor maior que o de int.
            printf("Numero Grande Atualizado (long int): %lld\n", numeroGrande);




        return 0;
    }
