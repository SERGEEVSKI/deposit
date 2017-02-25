#include <stdio.h>

int main()
{
	int sum, days, res;
	printf("Insert sum, please: ");
	scanf("%d", &sum);
	printf("\nInsert days, please: ");
	scanf("%d", &days);
	while(sum<10000)
	{
		printf("\nFailed! Insert please sum not less than 10,000: ");
		scanf("%d", &sum );
	}
	while(days>365)
	{
		printf("\nFailed! Insert please days no more than 365: ");
		scanf("%d", &days );
	}

}
