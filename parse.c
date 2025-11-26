#include "shell.h"

int parse(char *input, char *argv[])
{
    int argc = 0;
    
    //Separation de l'entree en tokens depuis la chaine de caracteres
    char *token = strtok(input, " \n");
    while (token != NULL && argc < MAX_ARGS) 
    {
        argv[argc++] = token;
        token = strtok(NULL, " \n");
    }
    argv[argc] = NULL;
    return argc;
}
