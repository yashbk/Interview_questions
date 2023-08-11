//Write a program to convert decimal number to binary
//Input : 32
//output : 100000

#include <stdio.h>

void dec_to_bin(int num)
{
	int set = 0;
	int len = sizeof(num)*8;
	while(len)
	{
		if((num >> len-1) & 1 == 1)
			set = 1;

		if(set)
			printf("%d",(num>>len-1) & 1);
		len--;
	}
}

int main()
{
	int num = 0;
	printf("Enter a number:\n");
	scanf("%d",&num);
	dec_to_bin(num);
}
