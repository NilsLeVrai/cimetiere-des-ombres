#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned int i = 8;
	while (i--)
		(octet >> i & 1) ? write(1, "1", 1) : write(1, "0", 1);
}

int main ()
{
	unsigned char a = 2;
	print_bits(a);
}