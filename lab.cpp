#include <stdio.h>
#include "E101.h"

int main()
{
  //int err;
  //printf(" Hello\n");
  init();
	
	int adc1 = 0;
	int count = 0;
	int max = 0;
	int mean = 0;
	int total = 0;
	int min = 1000;
	int range = 0;
	int halfRange = 0;
	
	while (count < 5){
	
		adc1 = read_analog(0);
		sleep1(1, 0);
		printf("%d\n", adc1);
		
		if (adc1 > max){
			max = adc1;
		}
		if (adc1 < min){
			min = adc1;
		}
		total = total + adc1;
		count = count + 1;
		}
		
		
	mean = total / count;
	range = max - min;
	halfRange = range / 2;
			
	printf("The maximum is %d\n", max);	
	printf("The maximum is %d\n", min);
	printf("The mean is %d\n", mean);
	printf("The count is %d\n", count);
	printf("the range is %d\n", range);
	printf("The half range is %d\n", halfRange);
		
    
	//printf("error is %d\n", err);
	
	return 0;
}
