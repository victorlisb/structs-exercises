#include <stdio.h>


void main(){

    typedef struct {

        char nome[15];
        int idade;
        float altura;
    }pessoa;

    pessoa pessoa1;

    printf("Digite o nome da pessoa:");
    scanf("%s", pessoa1.nome);

    printf("Digite a idade da pessoa:");
    scanf("%d",&pessoa1.idade);

    printf("Digite a altura da pessoa (em metros):");
    scanf("%f",&pessoa1.altura);

    printf(" \nCadastro: \n");
    printf("Nome: %s \n", pessoa1.nome);
    printf("Idade: %d anos \n", pessoa1.idade);
    printf("Altura: %.2f metros ",pessoa1.altura);


}