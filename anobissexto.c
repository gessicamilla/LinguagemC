#include <stdio.h>

int main(){
    system("/bin/clear");
    int ano;
    printf("Digite um ano e direi se ele é bissexto\n");
    scanf("%d",&ano);
    if(ano % 4 == 0 )
        printf("O ano %d é bissexto\n",ano);
    else
        printf("O ano %d não é bissexto\n",ano);
    
return 0;
}