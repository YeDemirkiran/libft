#ifndef LIBFT_WRITE_H
# define LIBFT_WRITE_H

# include "unistd.h"
# include "libft_string.h"

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif