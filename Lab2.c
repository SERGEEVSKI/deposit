#include <stdio.h>
#include "Deposit.h"

int main()
{	
	Deposit *dep;
	dep = int_dep_new(5);
	printf("Enter sum, please: ");
	scanf("%zu", &dep->sum);
	printf("\n");
	printf("Enter days, please: ");
        scanf("%zu", &dep->days);
        printf("\n");
	data_checking(dep);
        calculation_of_contribution(dep);
	return 0;
}
