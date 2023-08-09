//Write a program to print the sum of digits of any number
//Input : 16754
//Output : 23

#include <stdio.h>

int main()
{
	int num = 0;
	int sum = 0;
	printf("Enter the number\n");
	scanf("%d",&num);
	printf("The entered number is %d\n",num);
	while(num)
	{
		sum = sum + num % 10;
		num = num/10;		
	}
	printf("The sum is %d\n",sum);
}


