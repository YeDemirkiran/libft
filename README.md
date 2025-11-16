# libft (a.k.a. Lib Forty-Two)
My own custom implementation of the libft library - by [yademirk](https://www.google.com).

This version of libft is NOT the one I submitted the libft project on Ecole 42. Instead, it's a heavily modified version that suits to my needs on each 42 project. It gets updated and new functions are added with each project I start. Therefore, it doesn't follow the usual libft structure and may contain additional functions (ft_printf, get_next_line, etc). Due to this, it's NOT suitable for passing the first libft project.

However, you can use it for learning purposes.

# Submodules
The library consists of 8 submodules.

## 1 - Char
Consists of char modification functions.

- [ft_tolower()](./src/char/ft_tolower.c): Converts an uppercase character to lowercase and returns the converted char.
- [ft_tolower()](./src/char/ft_toupper.c): Converts a lowercase character to uppercase and returns the converted char.

### Dependencies
None.

## 2 - Converter
Consists of conversion functions that converts one data type to another.

- [ft_atoi()](./src/converter/ft_atoi.c): Converts an ASCII array to integer.
- [ft_itoa()](./src/converter/ft_itoa.c): Converts an integer to an ASCII string.

### Dependencies
- [Predicate](./src/predicate/)
- [Math](./src/math/)

# Authors
Yaşam Ensar Demirkıran ([yademirk](https://www.google.com))
