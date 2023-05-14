#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <signal.h>
#include <termios.h>


#define MAX_HISTORY 150
#define MAX_CHAR 100

char *currentDirectory;
int init_mode;
extern char **environ;

void start_shell();
void init();
char *env_vars(char *argv[]);
int comm_handle(char *argv[]);
void getHistory();
int change_dir(char *argv[]);
void exit_builtin(char *argv[]);
void execcmd(char **argv);
char *getPath(char *command);
#endif
