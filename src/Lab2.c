#include <stdio.h>
#include "Deposit.h"

int main()
{
	int sum, days;	
	printf("Enter sum, please: ");
	scanf("%d", sum);
	printf("\n");
	printf("Enter days, please: ");
        scanf("%d", &days);
        printf("\n");
	data_checking(sum,days);
        calculation_of_contribution(sum,days);
	return 0;
}
