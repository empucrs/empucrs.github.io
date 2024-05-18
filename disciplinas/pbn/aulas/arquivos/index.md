# Manipulação de Arquivos em C

---

## Introdução

Nesta apresentação, vamos explorar os conceitos básicos de manipulação de arquivos em C.

---

## Funções Básicas

### fopen()

- Abre um arquivo
- Retorna um ponteiro para o arquivo

### fclose()

- Fecha um arquivo aberto
- Libera recursos associados ao arquivo

### fprintf() e fscanf()

- Leitura e escrita formatada em arquivos

### fputc() e fgetc()

- Leitura e escrita de caracteres em arquivos

### fwrite() e fread()

- Leitura e escrita de blocos de dados em arquivos

---

## Exemplo de Código

Vamos ver um exemplo simples de como abrir, escrever e ler um arquivo em C.

```c
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
