#include <stdio.h>

int main() {
    
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("A sua idade é: %d \n \n", idade);
    
    if (idade >= 18){
        printf("Bem vindo a festa! \n");
        if (idade >= 65){
            printf("Passe na farmacia, \n");
        }
    }
    else if (idade >= 12){
        printf("Vá tomar uma Fanta Uva, \n");
    }
    else{
        printf("Vá tomar um chá, \n");
    }
    printf("Vá para casa dormir.");
    
    return 0;
}
