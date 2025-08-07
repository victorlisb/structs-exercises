#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_ALUNOS 2
void imprime_dados();
void recebe_dados();
char *maior_nota();

struct aluno{

    char nome[20];
    char matricula[10];
    int n1,n2,n3;
    float media;

};

struct aluno alunos[MAX_ALUNOS];
char aluno_maior_nota[20];

int main(){

    char aluno_maior_nota[20];

    recebe_dados();
    imprime_dados();
    printf("Aluno com maior nota:%s !",maior_nota());

  return 0;
}

void recebe_dados(){

    for(int i = 0; i < MAX_ALUNOS; i++){

        printf("Digite o nome do aluno: ");
        scanf(" %s",alunos[i].nome);

        printf("Digite a matrícula do aluno:");
        scanf(" %s",alunos[i].matricula);

        printf("Digite a nota 1 do aluno:");
        scanf("%d",&alunos[i].n1);

        printf("Digite a nota 2 do aluno:");
        scanf("%d",&alunos[i].n2);

        printf("Digite a nota 3 do aluno:");
        scanf("%d",&alunos[i].n3);
        
        alunos[i].media = (float)(alunos[i].n1 + alunos[i].n2 + alunos[i].n3)/3;

        printf("\n");
    }    
}
void imprime_dados(){


    for(int i = 0;i < MAX_ALUNOS;i++){

        printf("Aluno %d: %s \n",i,alunos[i].nome);
        printf("Matrícula: %s \n",alunos[i].matricula);
        printf("Nota(1) = %d\n",alunos[i].n1);
        printf("Nota(2) = %d\n",alunos[i].n2);
        printf("Nota(3) = %d\n",alunos[i].n3);
        printf("Média = %f\n",alunos[i].media);
    printf("\n");
    }
}

char *maior_nota(){

    int indice_maior = 0; //Indice de comparacao
//Comparada o aluno 1 com o 0
    for(int i = 1; i < MAX_ALUNOS;i++){

        if(alunos[i].media > alunos[indice_maior].media){

            indice_maior = i;
        }
    }
    strcpy(aluno_maior_nota,alunos[indice_maior].nome);

    return aluno_maior_nota;
}