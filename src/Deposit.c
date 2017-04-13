#include <stdio.h>
#include <stdlib.h>
#include "Deposit.h"

int data_checking(int sum, int days) {
        while(sum < 10000)
        {
                printf("\nFailed! Insert please sum not less than 10,000: ");
                scanf("%d", &sum);
        }
        while(days > 365)
        {
                printf("\nFailed! Insert please days no more than 365: ");
                scanf("%d", &days);
        }
	return 0;
} 

int calculation_of_contribution(int sum, int days) {
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
	return res;      
}
