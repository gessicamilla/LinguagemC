#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    char nome[] = "";
    // char* pnome = &nome;
    printf("Digite o seu nome\n");
    scanf("%s",&nome);
    printf("Olá %s\n",nome);
    return 0;
}