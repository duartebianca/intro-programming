#include <stdio.h>
#include <string.h>


typedef struct {
    char nome_do_aluno[51];
    int id_associado;
    int pontuacao;
    int lista[3][3];
}Aluno;

typedef struct {
   int id;
   char nome_do_monitor[51];
}Monitores;

typedef struct {
    Aluno aluno[40];
    Monitores monitor[10];
}Planilha;

int main () {

    Planilha monitoria_ip;
    int qtd_monitores = 0, qtd_alunos=0, lista_pextra,count[100];

    //dados dos monitores
    scanf("%d", &qtd_monitores);
    for (int i = 0; i < qtd_monitores; i++) {
        scanf(" %s", monitoria_ip.monitor[i].nome_do_monitor);
        scanf("%d", &monitoria_ip.monitor[i].id);
    }
  
    //dados dos alunos
    scanf("%d", &qtd_alunos);
    for (int i = 0; i < qtd_alunos; i++) {
        //zera pontuacao
       count[i] = 0;
        //recebe os dados
        scanf(" %s", monitoria_ip.aluno[i].nome_do_aluno);
        scanf("%d", &monitoria_ip.aluno[i].id_associado);
    }
    
    //armazena questoes para cada aluno
    //ao mesmo tempo, ja calcula pontuacao
    for (int i = 0; i < qtd_alunos; i++) { //Para cada aluno
        for (int j = 0; j < 3; j++) {
            for(int k=0;k<3;k++){// 3 listas
            scanf("%d", &monitoria_ip.aluno[i].lista[j][k]);
             
           }
        }
    }
    
    scanf("%d", &lista_pextra);
    
    for (int i = 0; i < qtd_alunos; i++) { 
        for (int j = 0; j < 3; j++) {
            for(int k=0;k<3;k++){
        if (monitoria_ip.aluno[i].lista[j][k]==1) {
             count[i]++;
             }
             if(j==lista_pextra-1 && k==2){
             if(monitoria_ip.aluno[i].lista[j][k]==1){
             count[i]++;
             }
        }
    }
  }
 }

    //Imprimir resultado
    for (int i = 0; i < qtd_alunos; i++) { 
        printf("%s\n", monitoria_ip.aluno[i].nome_do_aluno);
        //encontrar monitor com aquele id e imprimir seu nome
            for (int j = 0; j < qtd_monitores; j++) {
                if (monitoria_ip.aluno[i].id_associado == monitoria_ip.monitor[j].id) {
                    printf("%s\n", monitoria_ip.monitor[j].nome_do_monitor);
                }
            }
        //imprime pontos
        printf("%d\n", count[i]);
    }
    return 0;
}
