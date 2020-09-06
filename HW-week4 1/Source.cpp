#include<stdio.h>
int main()
{
	int i, j;
	int N;
	scanf_s("%d", &N);
	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= N; j++)
		{
			if (i == 1 || j == 1 || i == N || j == N || i == j || i + j == N + 1)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		if (i != N)
		{
			printf("\n");
		}
	}
	return 0;
}