#include <stdio.h>

int main() {
    int num1 = 16;
    int num2 = 3;
    char op = '+';

    switch (op) {
        case '+':
            printf("%d\n", num1 + num2);
            break;

        case '-':
            printf("%d\n", num1 - num2);
            break;

        case '*':
            printf("%d\n", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("%d\n", num1 / num2);
            else
                printf("Division impossible\n");
            break;

        case '%':
            if (num2 != 0)
                printf("%d\n", num1 % num2);
            else
                printf("Modulo impossible\n");
            break;

        case '&':
            printf("%d\n", num1 & num2);
            break;

        case '|':
            printf("%d\n", num1 | num2);
            break;

        case '~':
            printf("%d\n", ~num1);
            break;

        default:
            printf("Operateur invalide\n");
    }

    return 0;
}
