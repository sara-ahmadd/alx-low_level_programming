#include "main.h"

void print_command_history(int count, char *his[]);

/**
 */
void getHistory()
{
	char *buff, *command_history[MAX_HISTORY];
	int history_count = 0, i;
	size_t buff_size = 255;
	
	buff = (char *)malloc(sizeof(char) * buff_size);
	if (!buff)
	{
		perror("Can't allocate buffer memory");
		exit(1);
	}
	getline(&buff, &buff_size, stdin);
	printf("you entered : %s ", buff);

	if (buff)
	{
		if (history_count < MAX_HISTORY)
		{
			command_history[history_count++] = strdup(buff);
		}
	}
	else
	{
		free(command_history[0]);
		for(i = 1; i < MAX_HISTORY; i++)
		{
			command_history[i - 1] = command_history[i];
		}
	}
	command_history[MAX_HISTORY - 1] = strdup(buff);
	print_command_history(history_count, command_history);
}
/**
 * print_command_history - print last commands
 * @count: count
 */
void print_command_history(int count, char *his[]) {
	int i;
    for (i = 0; i < count; i++) {
        printf("%d: %s\n", i + 1, his[i] ? his[i] : "");
    }
}
