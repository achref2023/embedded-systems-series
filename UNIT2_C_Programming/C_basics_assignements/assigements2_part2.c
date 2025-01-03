#include <stdio.h>
#include <ctype.h>

// Fonction 1 : Vérifier si un caractère est un alphabet
const char* est_alphabet(char c) {
    return (isalpha(c)) ? "Oui" : "Non";
}

// Fonction 2 : Faire la somme d'une série d'entiers consécutifs jusqu'à un entier donné
int somme_entiers(int n) {
    int somme = 0;
    for (int i = 1; i <= n; i++) {
        somme += i;
    }
    return somme;
}

// Fonction 3 : Calculer le factoriel d'un entier
int factorielle(int n) {
    if (n < 0) {
        printf("Erreur : La factorielle n'est pas définie pour les nombres négatifs.\n");
        return -1; // Retourne -1 en cas d'erreur
    }
    int resultat = 1;
    for (int i = 1; i <= n; i++) {
        resultat *= i;
    }
    return resultat;
}

// Fonction 4 : Faire une opération arithmétique
float operation_arithmetique(float a, float b, char operateur) {
    switch (operateur) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b != 0) {
                return a / b;
            } else {
                printf("Erreur : Division par zéro.\n");
                return 0; // Retourne 0 en cas d'erreur
            }
        default:
            printf("Erreur : Opérateur non valide.\n");
            return 0; // Retourne 0 en cas d'erreur
    }
}

int main() {
    int choix;
    do {
        printf("\nMenu:\n");
        printf("1. Vérifier si un caractère est un alphabet\n");
        printf("2. Faire la somme d'une série d'entiers consécutifs jusqu'à un entier donné\n");
        printf("3. Calculer le factoriel d'un entier\n");
        printf("4. Faire une opération arithmétique\n");
        printf("5. Quitter\n");
        printf("Entrez votre choix (1-5) : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: {
                char caractere;
                printf("Entrez un caractère : ");
                scanf(" %c", &caractere); // L'espace avant %c permet d'ignorer les espaces
                printf("Le caractère '%c' est un alphabet ? %s.\n", caractere, est_alphabet(caractere));
                break;
            }
            case 2: {
                int n;
                printf("Entrez un entier : ");
                scanf("%d", &n);
                int somme = somme_entiers(n);
                printf("La somme des entiers de 1 à %d est : %d\n", n, somme);
                break;
            }
            case 3: {
                int n;
                printf("Entrez un entier : ");
                scanf("%d", &n);
                int fact = factorielle(n);
                if (fact != -1) {
                    printf("Le factoriel de %d est : %d\n", n, fact);
                }
                break;
            }
            case 4: {
                float a, b;
                char operateur;
                printf("Entrez deux opérandes réelles : ");
                scanf("%f %f", &a, &b);
                printf("Entrez un opérateur (+, -, *, /) : ");
                scanf(" %c", &operateur);
                float resultat = operation_arithmetique(a, b, operateur);
                printf("Le résultat de %.2f %c %.2f est : %.2f\n", a, operateur, b, resultat);
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