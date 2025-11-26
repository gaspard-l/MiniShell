#include "shell.h"

int main()
{
    printf("==============================\n         MiniShell  v1.0         \n==============================");

    char s[100];
    char *argv[MAX_ARGS];

    while(1)
    {
        //Affichage de base
        printf("\n>user : ");
        if (fgets(s, sizeof(s), stdin) == NULL)
	{
		puts("\nFin d'entree.");
		break;
	}


        //Découper la ligne en tokens
        int argc = parse(s, argv);

        if (argc == 0) continue;  //Pas de commande, continue

        //Gestion des commandes internes (cd, exit)
        if (commande_interne(argc, argv))
            continue;

        //Execution des commandes externes (ls, mkdir)
        run_commande(argv);
    }
    return 0;
}

