typedef struct aluno Aluno;

Aluno* criar(char *nome, float nota);
void acessar(Aluno *aluno, char *nome, float *nota);
void liberar(Aluno *aluno);