#include <stdio.h>

void afficherBinaire(int nombre) {
    int bits[32];
    int i = 0;

    if (nombre == 0) {
        printf("0");
        return;
    }

    while (nombre > 0) {
        bits[i] = nombre % 2;
        nombre = nombre / 2;
        i++;
    }

    for (i = i - 1; i >= 0; i--) {
        printf("%d", bits[i]);
    }
}

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};

    for (int i = 0; i < 5; i++) {
        printf("%d : ", nombres[i]);
        afficherBinaire(nombres[i]);
        printf("\n");
    }

    return 0;
}