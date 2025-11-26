#include "shell.h"

void run_commande(char *argv[])
{
    //Execution des commandes internes (ls, mkdir)
    pid_t pid = fork();

    if (pid < 0)
    {
        perror("fork échoué");//Affiche la derniere erreur du systeme
    }
    else if (pid == 0)
    {
        //Processus fils : exécute la commande
        execvp(argv[0], argv);
        perror("execvp échoué");
        exit(1);
    }
    else
    {
        //Processus parent : attend la fin du fils
        int status;
        waitpid(pid, &status, 0);
    }
}
