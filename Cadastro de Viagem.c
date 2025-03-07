#include <stdio.h>

int main() {
    
    int local;
    int praia;
    int parque;
    int cidade;
    int confirma;
    
    printf("Bem vindo ao 123 METROS")
    printf("Qual tipo de local você deseja visitar? \n");
    printf("Praia = 1 | Parque = 2 | Cidade = 3 |: \n");
    scanf("%d", &local);
    
    if (local == 1) {
        printf("\nPara qual praia você deseja ir? \n");
        printf("Praia A = 1 | Praia B = 2 | Praia C = 3 |: \n");
        scanf("%d", &praia, "\n");
        
        if (praia == 1) {
            printf("\nVocê deseja ir para: Praia A \n");
            printf("Confirmar = 1 | Cancelar = 2 \n");
            scanf("%d", &confirma);
            
            if (confirma == 1) {
                printf("\nBoa viagem!");
            }
            else {
                printf("\nReiniciê o programa");
            }
            
        } 
        else if (praia == 2) {
            printf("\nVocê deseja ir para: Praia B \n");
            printf("Confirmar = 1 | Cancelar = 2 \n");
            scanf("%d", &confirma);
            
            if (confirma == 1) {
                printf("\nBoa viagem!");
            }
            else {
                printf("\nReiniciê o programa");
            }
        }
        else if (praia == 3) {
            printf("\nVocê deseja ir para: Praia C \n");
            printf("Confirmar = 1 | Cancelar = 2 \n");
            scanf("%d", &confirma);
            
            if (confirma == 1) {
                printf("\nBoa viagem!");
            }
            else {
                printf("\nReiniciê o programa");
            }
        }
        else {
            printf("\nDigite um dos números mostrados para selecionar o local, reiniciê o programa");
        }
    }
    
    if (local == 2) {
        printf("\nPara qual parque você deseja ir? \n");
        printf("Parque A = 1 | Parque B = 2 | Parque C = 3 |: \n");
        scanf("%d", &parque, "\n");
        
        if (parque == 1) {
            printf("\nVocê deseja ir para: Parque A \n");
            printf("Confirmar = 1 | Cancelar = 2 \n");
            scanf("%d", &confirma);
            
            if (confirma == 1) {
                printf("\nBoa viagem!");
            }
            else {
                printf("\nReiniciê o programa");
            }
            
        } 
        else if (parque == 2) {
            printf("\nVocê deseja ir para: Parque B \n");
            printf("Confirmar = 1 | Cancelar = 2 \n");
            scanf("%d", &confirma);
            
            if (confirma == 1) {
                printf("\nBoa viagem!");
            }
            else {
                printf("\nReiniciê o programa");
            }
        }
        else if (parque == 3) {
            printf("\nVocê deseja ir para: Parque C \n");
            printf("Confirmar = 1 | Cancelar = 2 \n");
            scanf("%d", &confirma);
            
            if (confirma == 1) {
                printf("\nBoa viagem!");
            }
            else {
                printf("\nReiniciê o programa");
            }
        }
        else {
            printf("\nDigite um dos números mostrados para selecionar o local, reiniciê o programa");
        }
    }
    
    if (local == 3) {
        printf("\nPara qual cidade você deseja ir? \n");
        printf("Cidade A = 1 | Cidade B = 2 | Cidade C = 3 |: \n");
        scanf("%d", &cidade, "\n");
        
        if (cidade == 1) {
            printf("\nVocê deseja ir para: Cidade A \n");
            printf("Confirmar = 1 | Cancelar = 2 \n");
            scanf("%d", &confirma);
            
            if (confirma == 1) {
                printf("\nBoa viagem!");
            }
            else {
                printf("\nReiniciê o programa");
            }
            
        } 
        else if (cidade == 2) {
            printf("\nVocê deseja ir para: Cidade B \n");
            printf("Confirmar = 1 | Cancelar = 2 \n");
            scanf("%d", &confirma);
            
            if (confirma == 1) {
                printf("\nBoa viagem!");
            }
            else {
                printf("\nReiniciê o programa");
            }
        }
        else if (cidade == 3) {
            printf("\nVocê deseja ir para: Cidade C \n");
            printf("Confirmar = 1 | Cancelar = 2 \n");
            scanf("%d", &confirma);
            
            if (confirma == 1) {
                printf("\nBoa viagem!");
            }
            else {
                printf("\nReiniciê o programa");
            }
        }
        else {
            printf("\nDigite um dos números mostrados para selecionar o local, reiniciê o programa");
        }
    }
    
    return 0;
}