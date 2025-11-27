# MiniShell v1.0

MiniShell est un terminal simple écrit en langage C, conçu pour démontrer la maîtrise des concepts système Unix : gestion des processus, parsing de commandes, commandes internes et externes.

---

## Fonctionnalités

- Exécution de commandes externes via `fork()` et `execvp()` (ex : `ls`, `mkdir`)  
- Commandes internes :  
  - `cd` pour changer de répertoire  
  - `exit` pour quitter le shell  
- Parsing basique des commandes avec séparation des arguments (jusqu’à 10 arguments)  
- Affichage d’un prompt simple `>user :`  
- Gestion des erreurs (fork, exec, commande `cd` invalide)

---

## Exemple d’utilisation

```bash
==============================
         MiniShell  v1.0
==============================

>user : ls
main.c  parser.c  README.md  shell.h

>user : cd src

>user : pwd
/home/user/minishell/src

>user : exit

Fin d'execution.

```
## Structure du projet

minishell/
├── main.c             # Boucle principale, prompt, lecture commandes
├── parse.c            # Fonction de découpage de la ligne en tokens
├── commande_interne.c # Gestion des commandes internes (cd, exit)
├── run_commande.c     # Exécution des commandes externes (fork + exec)
├── shell.h            # Déclarations des fonctions et constantes


##Compilation

gcc -Wall -Wextra -o minishell main.c parse.c commande_interne.c run_commande.c

##Améliorations possibles

Gestion des redirections < et > (entrée/sortie)
Ajout d’un historique des commandes
Ajout de commandes internes supplémentaires (ex : help, pwd, echo)


##Licence
Ce projet est libre d’utilisation et de modification.

##Auteur

Gaspard Lesourd
