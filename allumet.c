#include <stdio.h>

int main()
{
	int nd, nb ,n1, n2;
	printf("Entrez le nombre de limiets: ");
	scanf("%d", &nd);
	if (nd <= 0)
	{
		do
		{
			printf("Entrez n grand nombre: ");
			scanf("%d", &nd);
		}
		while (nd <= 0);
	}
	printf("le nombre de allumet est %d\n", nd);
	nb = nd;
	do
	{
		printf("jouer n1: ");
		scanf("%d", &n1);
		if (n1 <= 0 || n1 > 3)
		do
		{
			printf("Entrez un nombre entre [1 , 3]: ");
			scanf("%d", &n1);
		}
		while (n1 <= 0 || n1 > 3);
		do
		{
			break;
		}
		while (nb < 0);
		printf("le nombre de allumet est %d\n", nb = nb - n1);
		if (nb <= 0) printf("Jouer 2 ganer\n");
		printf("joer n2: ");
		scanf("%d", &n2);
		if (n2 <= 0 || n2 > 3)
		do
		{
			printf("Entrez un nombre entre [1 , 3]: ");
			scanf("%d", &n2);
		}
		while (n2 <= 0 || n2 > 3);
		printf("le nombre de allumet est %d\n", nb = nb - n2);
		if (nb <= 0) printf("Jouer 1 ganer");
	}
	while (nb > 0);
}