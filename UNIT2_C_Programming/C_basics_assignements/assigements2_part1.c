#include <stdio.h>
#include <ctype.h>

// Fonction 1 : Vérifier si un nombre est pair ou impair
const char* pair_ou_impair(int a) {
    return (a % 2 == 0) ? "Pair" : "Impair";
}

// Fonction 2 : Vérifier si un caractère est une voyelle ou une consonne
const char* voyelle_ou_consonne(char c) {
    c = tolower(c); // Convertir en minuscule pour simplifier la vérification
    if (c >= 'a' && c <= 'z') {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            return "Voyelle";
        } else {
            return "Consonne";
        }
    }
    return "Caractère non valide";
}

// Fonction pour déterminer le réel le plus grand parmi trois réels
float plus_grand(float a, float b, float c) {
    float max = a; // Supposons que 'a' est le plus grand
    if (b > max) {
        max = b; // 'b' est plus grand que 'max'
    }
    if (c > max) {
        max = c; // 'c' est plus grand que 'max'
    }
    return max; // Retourne le plus grand réel
}

// Fonction pour déterminer si un réel est positif, négatif ou nul
void verifier_nombre(float nombre) {
    if (nombre > 0) {
        printf("Le nombre %.2f est positif.\n", nombre);
    } else if (nombre < 0) {
        printf("Le nombre %.2f est négatif.\n", nombre);
    } else {
        printf("Le nombre est nul.\n");
    }
}

int main() {
    int choix;
    do {
        printf("\nMenu:\n");
        printf("1. Vérifier si un nombre est pair ou impair\n");
        printf("2. Vérifier si un caractère est une voyelle ou une consonne\n");
        printf("3. Trouver le plus grand parmi trois réels\n");
        printf("4. Vérifier si un réel est positif, négatif ou nul\n");
        printf("5. Quitter\n");
        printf("Entrez votre choix (1-5) : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: {
                int nombre;
                printf("Entrez un nombre entier : ");
                scanf("%d", &nombre);
                printf("Le nombre %d est %s.\n", nombre, pair_ou_impair(nombre));
                break;
            }
            case 2: {
                char caractere;
                printf("Entrez un caractère : ");
                scanf(" %c", &caractere); // L'espace avant %c permet d'ignorer les espaces
                printf("'%c' est une %s.\n", caractere, voyelle_ou_consonne(caractere));
                break;
            }
            case 3: {
                float a, b, c;
                printf("Entrez trois réels : ");
                scanf("%f %f %f", &a, &b, &c);
                float max = plus_grand(a, b, c);
                printf("Le réel le plus grand parmi %.2f, %.2f et %.2f est : %.2f\n", a, b, c, max);
                break;
            }
            case 4: {
                float nombre;
                printf("Entrez un nombre réel : ");
                scanf("%f", &nombre);
                verifier_nombre(nombre);
                break;
            }
            case 5:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (choix != 5);

    return 0;
}