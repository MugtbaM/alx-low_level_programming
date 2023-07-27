/**
 * swap_int - Swap the values of two integers
 * @a: The fisrt element to be swapped
 * @b: The second element to be swapped
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
