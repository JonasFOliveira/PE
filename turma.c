#include <stdio.h>
#include <string.h>
typedef struct {
    char nome[100];
    int idade;
}Pessoa;

typedef struct {
    char disciplina[100];
    Pessoa professor;
    Pessoa alunos[50];
    int alunos_qtd;
}Turma;

Pessoa preencher_pessoa(char *nome, int idade);
Turma preencher_turma(char *disc, Pessoa prof, Pessoa alunos[], int qtd_alunos);
void mostrar_turma(Turma t);

Pessoa preencher_pessoa(char *nome, int idade){
    Pessoa p;
    strcpy(p.nome, nome);
    p.idade = idade;

    return p;
}

Turma preencher_turma(char *disc, Pessoa prof, Pessoa alunos[], int qtd_alunos){
    Turma a;
    strcpy(a.disciplina, disc);
    a.professor = prof;
    for(int i = 0; i < qtd_alunos; i++){
        a.alunos[i] = alunos[i];
    }
    a.alunos_qtd = qtd_alunos;

    return a;

}

void mostrar_turma(Turma t){
    printf("Disciplina:\t%s\n", t.disciplina);
    printf("Professor:\t%s - %d Anos\n", t.professor.nome, t.professor.idade);
    printf("Alunos:\n");
    for(int i = 0; i < t.alunos_qtd; i++){
        printf("%d - %s (%d Anos)\n", i+1, t.alunos[i].nome, t.alunos[i].idade);
    }
}

int main(){

    Pessoa prof = preencher_pessoa("Igor Malheiros", 29);
    Pessoa alunos[3];
    Turma t;

    alunos[0] = preencher_pessoa("Maria Raquel", 25);
    alunos[1] = preencher_pessoa("Jonas Felipe", 20);
    alunos[2] = preencher_pessoa("Samila Garrido", 20);

    t = preencher_turma("PE", prof, alunos, 3);
    mostrar_turma(t);

}