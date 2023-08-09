//Write a program to convert a binary number to a decimal number
//Input : 1011
//Output : 11

#include <stdio.h>
#include <math.h>

int main()
{
	int input = 0,output = 0,remainder = 0,i = 0;
	printf("Enter the binary:\n");
	scanf("%d",&input);
	while(input)
	{
		remainder = input % 10;
		input /= 10;
		output += remainder * pow(2,i);
		i++;
	}
	printf("The decimal equivalent is %d\n",output);;
}


