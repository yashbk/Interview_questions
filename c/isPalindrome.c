#include <stdio.h>

int isPalindrome(int num)
{
	int original = num;
	int new = 0;
	while(num)
	{
		new = new * 10 + (num%10);	
		num /= 10;
	}
	if(original == new)
		return 1;
	else
		return 0;
}

int main()
{
	int num = 0;
	printf("Enter the number to check whether it's palindrome or not:\n");
	scanf("%d",&num);

	if(isPalindrome(num))
	{
		printf("The entered number is PALINDROME\n");
	}
	else
	{
		printf("The entered number is not a PALINDROME\n");
	}
}
