#include<stdio.h>

int main()
{
	printf("STEAMER\n\n\n");
	printf("Steamerin kayttoa varten tarvitset kahden eri profiilin steam ID:t. Ne ovat muotoa steamcommunity.com/id/pidgin, eli tassa tapauksessa ID = pidgin.\n\nValitse suoritettava komento syottamalla numero:\n\n");
	printf("1. ID:n syotto\n2. Hae tiedot\n3. Lopeta\n\n");

	printf("%d\n", aliohjelma(24));

	return 0;
}

int aliohjelma(int luku)
{
	return luku*2;
}