#include "libft_math.h"

// Returns the smaller size_t out of two.
size_t	ft_st_smaller(size_t x, size_t y)
{
	if (x < y)
		return (x);
	return (y);
}
