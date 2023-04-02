#include "delay.h"
#include <stdio.h>

void display(int count) // Function to display the data on the four Led's
{
	printf("Count value is: %d\n", count);						
}

void main()
{
	int count = 0x00000000;
	while (1)
	{
		display(count);
		count++;
        if(count==16){
            count=0;
        }
		delay(500000);   // delay by 0.5 microseconds
	}
}
