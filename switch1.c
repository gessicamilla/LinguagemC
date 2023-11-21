#include <stdio.h>
#include <stdlib.h>

int main(){
    int final_placa;
    printf("Digite o final da placa do carro\n");
    scanf("%d",&final_placa);
    
    switch(final_placa){
        case 1:
        printf("Rodizio do veículo na segunda-feira\n");
        break;
        
        case 2:
        printf("Rodizio do veículo na segunda-feira\n");
        break;

        case 3:
        printf("Rodizio do veículo na terça-feira\n");
        break;
        
        case 4:
        printf("Rodizio do veículo na terça-feira\n");
        break;
        
        case 5:
        printf("Rodizio do veículo na quarta-feira\n");
        break;
       
        case 6:
        printf("Rodizio do veículo na quarta-feira\n");
        break;
        
        case 7:
        printf("Rodizio do veículo na quinta-feira\n");
        break;
        
        case 8:
        printf("Rodizio do veículo na quinta-feira\n");
        break;
        
        case 9:
        printf("Rodizio do veículo na sexta-feira\n");
        break;

        case 0:
        printf("Rodizio do veículo na sexta-feira\n");
        break;

        default:
        printf("Esse final não existe\n");
        break;


    }
    printf("\n");
    return 0;
}