#include <stdio.h>

#define MAX_ALUNOS 2

int main(){

    typedef struct {

        char nome[15];
        float n1,n2,n3;
        float media;

    }aluno;

    aluno alunos[MAX_ALUNOS];

  for(int i = 0; i < MAX_ALUNOS; i++){

    printf("Digite o nome do aluno: ");
    scanf("%s",alunos[i].nome);

    printf("Digite a primeira nota do aluno: ");
    scanf("%f",&alunos[i].n1);

    printf("Digite a segunda nota do aluno: ");
    scanf("%f",&alunos[i].n2);

    printf("Digite a terceira nota do aluno: ");
    scanf("%f",&alunos[i].n3); printf("\n");

    alunos[i].media = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3)/3;

    getchar();

   }

   for(int i = 0; i < MAX_ALUNOS; i++){

    if(alunos[i].media >= 7){

        printf("%s aprovado com média %f \n",alunos[i].nome,alunos[i].media);
    }
    else{
        printf("%s reprovado com média %f \n",alunos[i].nome,alunos[i].media);
    }

   }

   return 0;
}