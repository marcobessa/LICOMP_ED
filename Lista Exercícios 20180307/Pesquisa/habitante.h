typedef struct habitante Habitante;

Habitante* criar(int idade, int sexo, int nroFilhos, float salario);
void   acessar(Habitante *habitante, int *idade, int *sexo, int *nroFilhos, float *salario);
void   liberar(Habitante *habitante);
