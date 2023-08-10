//Write a program to print armstrong numbers from 100 to 999
//Output : 0,1,153,370,371 and 407

#include <stdio.h>
#include <math.h>

int isArmstrong(int num)
{
	int original = num;
	int digits=0;
	int sum = 0;
	while(num)
	{
		num /= 10;
		digits++;
	}
	
	num = original;
	while(num)
	{
		sum  += pow(num%10,digits);
		num /=10;
	}
	if(sum == original)
		return 1;
	else
		return 0;

}

int main()
{
	int num = 100;
	while(num >=100 && num <=999)
	{
		if(isArmstrong(num))
			printf("%d ",num);
		num++;
	}
}
