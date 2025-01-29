#include <unistd.h>


void	print_bits(unsigned char octet)
{
	int temp = 7;

	while (temp >= 0)
	{
		if (octet & (1 << temp))
			write (1, "1", 1);
		else
			write (1, "0", 1);
		temp--;
	}
}