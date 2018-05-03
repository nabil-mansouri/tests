#include <stdio.h>

typedef void (*pointeur_fonction)(int, int);

void addition(int a, int b)
{
	printf("%d", a + b);
}

void soustraction(int a, int b)
{
	printf("%d",a - b);
}

typedef struct
{
	char *operation;
	pointeur_fonction ptr;
}	essai;


int main(int argc, const char *argv[])
{
	essai tab[] = {{"add", &addition},
				   {"sous", &soustraction},
					NULL, NULL};
	char *str = "sous";
	int i = -1;
	while (tab[++i].ptr)
		if (tab[i].operation == str)
			tab[i].ptr(1, 2);

	return 0;
}
