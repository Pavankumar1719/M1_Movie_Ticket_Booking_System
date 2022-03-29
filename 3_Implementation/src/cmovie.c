#include "function.h"

int movieselect(void)
{
	int i;
	printf("\t\t\tMovie Name\n");
	printf("\t\t\t-------------------------------------\n");
	printf("\t\t\tpress 1 for KGF-2\n\n");
	printf("\t\t\tpress 2 for RRR\n\n");
	printf("\t\t\tpress 3 for BATMAN\n");
	scanf("%d",&i);
	return i;
}