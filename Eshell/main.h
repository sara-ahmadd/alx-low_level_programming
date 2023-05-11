#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>


#define MAX_HISTORY 150

char *currentDirectory;
void getHistory();
int change_dir(char *argv[]);

void execcmd(char **argv);
char *getPath(char *command);
#endif
