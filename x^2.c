#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, d, x1, x2;
	printf("* Introduisez les valeurs pour a, b, c: ");
	scanf("%f, %f, %f", &a, &b, &c);
	if (a == 0 && b == 0 && c == 0)
	printf("* Tout reel est une solution de cette equation.\n");
	else if (a == 0 && b == 0 && c != 0)
		printf("* Cette equation ne possede pas de solution.\n");
	else if (a == 0 && b != 0 && c != 0)
	{
		printf("* La solution de cette equation du premier degre est:\n");
		printf("x = %.2f\n", -c / b);
	}
	else
	{
		printf("\tDelta = %.2f\n", d = pow(b, 2) - 4 * a * c);
		if (d < 0)
			printf("* Cette equation n'a pas de solution reelles.\n");
		else if (d == 0)
		{
			printf("* Cette equation a une seule solution reelle:\n");
			printf("x = %.2f\n", b / (2 * a));
		}
		else
		{
			printf("* Les solution reelles de cette equation sont:\n");
			x1 = ((-b - sqrt(d)) / (2 * a));
			x2 = ((-b + sqrt(d)) / (2 * a));
			printf("\tx1 = %.2f\t", x1);
			printf("x2 = %.2f\n", x2);
		}
	}
	return 0;
}
