#include <stdio.h>

int main(){

char nome[50];
 

printf("Digite seu nome completo:");
fgets(nome,50,stdin);
nome[strcspn(nome,"\n")]=0;
printf("Seu nome completo é: %s\n", nome); 

}
