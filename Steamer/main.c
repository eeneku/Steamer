#include<stdio.h>

int main()
{
	printf("STEAMER\n\n\n");
	printf("Steamerin kayttoa varten tarvitset steam id:t.");
	printf("%d\n", aliohjelma(24));

	return 0;
}

int aliohjelma(int luku)
{
	return luku*2;
}