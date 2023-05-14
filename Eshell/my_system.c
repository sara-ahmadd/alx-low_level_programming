#include "main.h"

/**
 * my_system - mimic the system() in c
 * @command: the entered command
 *
 * Return: integer
 */

int my_system(const char *command) {
    pid_t pid;
    int status;

    if (command == NULL) {
        return 1;
    }

    pid = fork();
    if (pid == -1) {
        return -1;
    } else if (pid == 0) {
        execl("/bin/sh", "sh", "-c", command, NULL);
        _exit(127);
    } else {
        waitpid(pid, &status, 0);
        if (WIFEXITED(status)) {
            return WEXITSTATUS(status);
        } else if (WIFSIGNALED(status)) {
            return WTERMSIG(status) + 128;
        }
    }

    return -1;
}
