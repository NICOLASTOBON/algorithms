#include <stdio.h>
#include <stdlib.h>

/**
 * isPalindrome - checks if a unsigned interger is palindrome
 * @num: is a unsigned integer
 * Return - void
 */
void isPalindrome(unsigned int num)
{
	int reversed = 0;
	int remainder = 0;
	int original = num;

	while (num != 0)
	{
		remainder = num % 10;
		reversed = (reversed * 10) + remainder;

		num /= 10;
	}

	if (reversed == original)
		printf("Is Palindrome\n");
	else
		printf("Not is Palindrome\n");
}

int main(void)
{
	unsigned int numberOne = 12121;

	isPalindrome(numberOne);

	unsigned int numberTwo = 233;

	isPalindrome(numberTwo);

	return (0);
}
