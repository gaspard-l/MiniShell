#include "shell.h"

int commande_interne(int argc, char *argv[])
{
    if (argc == 0) return 1;

    //Si on tape exit, le programme s'arrete
    if (strcmp(argv[0], "exit") == 0)
    {
        printf("\n\nFin d'execution.\n\n");
        exit(0);
    }

    //Execution cd pour se deplacer dans l'arborescence
    if (strcmp(argv[0], "cd") == 0)
    {
        if (argc < 2)
        {
            fprintf(stderr, "cd: argument manquant\n");
        }
        else
        {
            if (chdir(argv[1]) != 0)
            {
                perror("cd");
            }
        }
        return 1; // commande interne traitée
    }

    return 0; // pas une commande interne
}

