#include "main.h"

/**
 * main - cp
 * @argc: counter of args
 * @argv: args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int o, o1, r;
	char *buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	o = open(argv[1], O_RDONLY);
	o1 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(o, buff, 1024)) > 0)
	{
		if (o1 == -1 || write(o1, buff, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(o) == -1 || close(o1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd -1\n");
		exit(100);
	}
	return (0);
}
