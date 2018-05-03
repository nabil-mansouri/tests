#include <stdlib.h>
#include <stdio.h>

typedef struct
{
	char op;
	void(*ptr)(int, int);
}operation;

void	add(int nb1, int nb2)
{
	printf("%d", nb1 + nb2);
}

void	sous(int nb1, int nb2)
{
	printf("%d", nb1 - nb2);
}

void	mul(int nb1, int nb2)
{
	printf("%d", nb1 * nb2);
}

void	divi(int nb1, int nb2)
{
	printf("%d", nb1 / nb2);
}

void	mod(int nb1, int nb2)
{
	printf("%d", nb1 % nb2);
}

int main(int argc, const char *argv[])
{
	operation tab[] = {{'+', add},
		{'-', sous},
		{'*', mul},
		{'/', divi},
		{'%', mod}};
	int i = -1;
	int nb1 = atoi(argv[1]);
	int nb2 = atoi(argv[3]);

	while (*argv)
		printf("%s\n", *argv++);
		exit (1);
	while (tab[++i].op)
	{
		printf("tab.op : %c et op : %c\n", tab[i].op, atoi(argv[2]));
		if (tab[i].op == *(argv[2]))
		{
		tab[i].ptr(nb1, nb2);
		exit(1);
		}
	}
	return 0;
}
