#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>



#ifndef SHELL_H
#define SHELL_H

#define MAX_ARGS 10

int parse(char *input, char *argv[]);
int commande_interne(int argc, char *argv[]);
void run_commande(char *argv[]);

#endif
