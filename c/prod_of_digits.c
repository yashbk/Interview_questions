//Write a program to find products of digits of any number
//Input  : 246
//Output : 48

#include <stdio.h>

int main()
{
	int input = 0,output = 1;
	printf("Enter the digits:\n");
	scanf("%d",&input);
	while(input)
	{
		output *= input % 10;
		input /= 10;
	}
	printf("The product of digits is %d\n",output);
}
