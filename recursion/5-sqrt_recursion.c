#include "main.h"

/**
 * _sqrt_helper - searches for the natural square root
 * @n: number whose square root is calculated
 * @guess: possible square root
 *
 * Return: Natural square root of n, or -1
 */
int _sqrt_helper(int n, int guess)
{
	if (guess > n / guess)
		return (-1);

	if (guess * guess == n)
		return (guess);

	return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number whose square root is calculated
 *
 * Return: Natural square root of n, or -1 if it does not exist
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	return (_sqrt_helper(n, 1));
}
