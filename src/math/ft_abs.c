#include "libft_math.h"

// Returns the absolute value of an integer.
unsigned int	ft_abs(int n)
{
	unsigned int	un;

	if (n < 0)
		un = (unsigned int)(-(long)(n));
	else
		un = (unsigned int)n;
	return (un);
}
