#include <stdio.h>

int main() {
    FILE *arquivo;
    char texto[] = "Olá, mundo!";
    char buffer[100];

    // Abre o arquivo para escrita
    arquivo = fopen("exemplo.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Escreve no arquivo
    fprintf(arquivo, "%s\n", texto);

    // Fecha o arquivo
    fclose(arquivo);

    // Abre o arquivo para leitura
    arquivo = fopen("exemplo.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Lê do arquivo
    fscanf(arquivo, "%s", buffer);

    // Imprime o conteúdo lido
    printf("Conteúdo do arquivo: %s\n", buffer);

    // Fecha o arquivo
    fclose(arquivo);

    return 0;
}