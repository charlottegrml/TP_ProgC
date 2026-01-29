#include <stdio.h>

int main() {

    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = 5;

    for (int n = 0; n < taille; n++) {

        int valeur = nombres[n];

        printf("Nombre %d en binaire : ", valeur);

        /* Affichage sur 16 bits */
        for (int i = 15; i >= 0; i--) {
            int bit = (valeur >> i) & 1;
            printf("%d", bit);
        }

        printf("\n");
    }

    return 0;
}
