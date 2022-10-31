#include <stdio.h>
int main()
{
	int jj, mm, aa, nbj;
	printf("introduire la date du jour jj mm aaaa: ");
	scanf("%d%d%d", &jj, &mm, &aa);
	switch(mm)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: nbj = 31;
		break;
		case 2:
			{
				if(aa % 4 == 0) nbj = 29;
				else nbj = 28;
			}
			break;
		case 4: case 6: case 9: case 11: nbj = 30;
		break;
		default: printf("Erruer! Entrez une date correct \n");
	}
	if((jj > 31 || jj <= 0) || (mm <= 0 || mm > 12)) printf("Erreur!! Entrez une date correctement ");
	else
	{
		if(jj == nbj)
		{
			if(mm == 12)
			{
				jj = 1;
				mm = 1;
				aa++;
			}
			else
			{
				jj = 1;
				mm++;
			}
			printf("\n La date du lendemain est %d \%d \%d", jj, mm, aa);
		}
		else
		{
			jj++;
			printf("\n La date du lendemain est %d \%d \%d", jj, mm, aa);
		}
	}
}
