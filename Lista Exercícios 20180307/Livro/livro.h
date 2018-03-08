typedef struct livro Livro;

Livro* criar(char *titulo, int anoEdicao, int nroPagina ,float preco);
void   acessar(Livro *livro, char *titulo, int *anoEdicao, int *nroPagina ,float *preco);
void   liberar(Livro *livro);