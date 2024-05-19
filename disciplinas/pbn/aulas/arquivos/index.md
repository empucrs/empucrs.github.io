# Manipulação de Arquivos em C

---

## Tipos arquivos

Existem dois tipos de arquivos manipuláveis

- **Arquivos texto**
  - O conteúdo é legível com editor de textos simples
  - Requer a conversão do dado lido
    - De string para o tipo destino

- **Arquivos binários**
  - O conteúdo é "confuso", por vezes ilegível
  - Dado lido é mapeado para o tipo destino

---

## Biblioteca necessária

- Biblioteca  <a href="https://en.cppreference.com/w/c/io">stdio.h</a>
  - Fornece o seguinte conjunto de funções

<div style="max-height: 400px; overflow-y: auto; border: 1px solid #ccc; padding: 10px;">
| *Função* | *Descrição* |
| - | - |
| fopen() | Cria um novo arquivo ou abre um existente |
| fclose() | Fecha um arquivo |
| getc() | Lê um caracter de um arquivo |
| putc() | Escreve um caracter em um arquivo |
| fscanf() | Lê um conjunto de dados de um arquivo |
| fprintf() | Escreve um conjunto de dados em um arquivo |
| etc | ... |
</div>

---

## Comandos comuns

### Abertura de um arquivo
- Comando *fopen()*
  - Abre um arquivo
  - Retorna um ponteiro para o arquivo
  
  ```c
    FILE *filePointer = fopen("nomeDoArquivo.extensao","modo de operacao");
  ```
  - nome do arquivo
    - caminho relativo ou completo até o arquivo
  - modo de operação
    - depende do tipo de arquivo  

---

## Comandos comuns

### Fechamento de um arquivo
- Fechamento de fclose()
  - Fecha um arquivo aberto
  - Libera recursos associados ao arquivo
  ```c
    fclose(filePointer);
  ```

---

### fprintf() e fscanf()

- Leitura e escrita formatada em arquivos

### fputc() e fgetc()

- Leitura e escrita de caracteres em arquivos

### fwrite() e fread()

- Leitura e escrita de blocos de dados em arquivos

---

## Exemplo de Código

Vamos ver um exemplo simples de como abrir, escrever e ler um arquivo em C.

<div style="max-height: 400px; overflow-y: auto; border: 1px solid #ccc; padding: 10px;">
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
```
</div>

<a href="./recursos/01_codigoBase.c"><p style="font-size:0.5em">Código do exemplo</p></a>