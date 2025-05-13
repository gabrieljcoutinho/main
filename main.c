// RM: 565441  - Gabriel jorge Coutinho
// RM 564743 - Guilherme Ferraz e Medeiros
// RM 564935 - Roberto Marques Moreira



#include <stdio.h>
#include <string.h>

// Protótipos
void sequenciaFibonacci();
void fatoriais();
void verificarPalindromo();
void verificarSubstring();

int main() {
    int opcao;

    printf("===== MENU DE EXERCÍCIOS =====\n");
    printf("1 - Sequencia de Fibonacci\n");
    printf("2 - Fatoriais\n");
    printf("3 - Verificar Palindromo\n");
    printf("4 - Verificar Substring\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            sequenciaFibonacci();
            break;
        case 2:
            fatoriais();
            break;
        case 3:
            verificarPalindromo();
            break;
        case 4:
            verificarSubstring();
            break;
        default:
            printf("Opção invalida!\n");
    }

    return 0;
}

// Opção 1: Fibonacci
void sequenciaFibonacci() {
    int n;
    int fibonacci[50];

    printf("Digite a quantidade de termos da sequencia de Fibonacci (1 a 50): ");
    scanf("%d", &n);

    if (n < 1 || n > 50) {
        printf("Valor invalido. Deve estar entre 1 e 50.\n");
        return;
    }

    fibonacci[0] = 0;
    if (n > 1) fibonacci[1] = 1;

    for (int i = 2; i < n; i++) {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }

    printf("Sequencia de Fibonacci: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci[i]);
    }
    printf("\n");
}

// Opção 2: Fatoriais
void fatoriais() {
    int n;
    unsigned long long fatoriais[20];

    printf("Digite um numero inteiro (1 a 20): ");
    scanf("%d", &n);

    if (n < 1 || n > 20) {
        printf("Valor invalido. Deve estar entre 1 e 20.\n");
        return;
    }

    fatoriais[0] = 1;
    for (int i = 1; i < n; i++) {
        fatoriais[i] = fatoriais[i-1] * (i + 1);
    }

    printf("Fatoriais:\n");
    for (int i = 0; i < n; i++) {
        printf("%d! = %llu\n", i + 1, fatoriais[i]);
    }
}

// Opção 3: Palíndromo
void verificarPalindromo() {
    char palavra[101];
    int tamanho, ehPalindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tamanho = strlen(palavra);

    for (int i = 0; i < tamanho / 2; i++) {
        if (palavra[i] != palavra[tamanho - 1 - i]) {
            ehPalindromo = 0;
            break;
        }
    }

    if (ehPalindromo) {
        printf("A palavra é um palindromo.\n");
    } else {
        printf("A palavra NAO es um palindromo.\n");
    }
}

// Opção 4: Substring
void verificarSubstring() {
    char str1[101], str2[101];

    printf("Digite a primeira string: ");
    scanf("%s", str1);

    printf("Digite a segunda string: ");
    scanf("%s", str2);

    if (strstr(str1, str2)) {
        printf("A segunda string esta contida na primeira.\n");
    } else {
        printf("A segunda string NAO esta contida na primeira.\n");
    }
}

/*
    Essa atividade feita através do teams foi uam experiencia melhor do que usar o classroom, a atividade em si tmabem, foi bem mais legal do que ficar analisando codigos de outras pessoa e fazer
    feedbacks
*/
