#include <stdio.h>
#include <stdlib.h>
#include "Deposit.h"

Deposit * int_dep_new(size_t initial_size) {
	Deposit *dep = (Deposit*)malloc(sizeof(Deposit));
	dep->sum = 0;
	dep->days = 0;
	return dep;
}

int data_checking(Deposit *dep) {
        while(dep->sum <10000)
        {
                printf("\nFailed! Insert please sum not less than 10,000: ");
                scanf("%zu", &dep->sum);
        }
        while(dep->days >365)
        {
                printf("\nFailed! Insert please days no more than 365: ");
                scanf("%zu", &dep->days);
        }
	return 0;
} 

int calculation_of_contribution(Deposit *dep) {
	int days = dep->days;
	int sum = dep->sum;
	int res = 0;
	if(sum<=100000)
        {
                if((days>=0)&&(days<=30))
                        res=sum-(sum/100*10);
                if((days>=31)&&(days<=120))
                        res=sum+(sum/100*2);
                if((days>=121)&&(days<=240))
                        res=sum+(sum/100*6);
                if((days>=241)&&(days<=365))
                        res=sum+(sum/100*12);
        }
	 if(sum>100000)
        {
                if((days>=0)&&(days<=30))
                        res=sum-(sum/100*10);
                if((days>=31)&&(days<=120))
                        res=sum+(sum/100*3);
                if((days>=121)&&(days<=240))
                        res=sum+(sum/100*8);
                if((days>=241)&&(days<=365))
                        res=sum+(sum/100*15);
        }
        printf("\nResult will be: %d", res);
	return res;      
}
