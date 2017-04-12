#include <stdio.h>
#include <time.h>
#include "E101.h"

// assuming motor 1 is on the left, and it facing so +tive direction is forward
// therefore motor 2 is on the right, and is facing so that -tive direction is forward

int turn_left(){
	init();
	
	set_motor(1, -155);
	set_motor(2, -155);
	sleep1(1, 0);
	stop(0);
return 0;}

int main(){
	init();
	
	int IR = 0;
	int count = 0;
		
	while (count < 15){
		IR = read_analog(0);
	
		if (IR < 100){
		
			printf("%d\n", IR);
			set_motor(1,155);
			set_motor(2,-155);
			sleep1(1,0);
			count++;
		} 
	
			else {
				printf("%d\n", IR);
				set_motor(1, 0);
				//turn_left();
				sleep1(1,0);
				count++;
			}
	}

	stop(0);
	sleep1(1, 0);
return 0;}


