//Write a program to generate fibonacci series
//Output : 0,1,1,2,3,5,8,13,34,55,89....

#include <stdio.h>

int main()
{
	int num = 0;
	int last=0,present=1,next=0;
	printf("Enter a number:\n");
	scanf("%d",&num);
	printf("%d ",last);
	while(next <= num)
	{
		if(present <=num)
			printf("%d ",present);
		next = present + last;
		last = present;
		present = next;
	}
}

