#include <stdio.h>
#include <string.h>

int main() {
    char buffer[40];
    char ln = '\n';
    int t0, t1, t2;

    // Lê um número (syscall 5)
    scanf("%d", &t0);

    while (t0 != 0) {
        // Decrementa t0
        t0 -= 1;

        // Lê uma string (syscall 8)
        scanf("%s", buffer);

        // Lê os caracteres buffer[0] e buffer[2]
        t1 = buffer[0];
        t2 = buffer[2];

        if (t1 != t2) {
            // Verdadeiro: Imprime "2"
            printf("%d", 2);
            printf("%c", ln);
        } else {
            // Falso: Imprime "1"
            printf("%d", 1);
            printf("%c", ln);
        }
    }

    // Finaliza o programa
    return 0;
}
