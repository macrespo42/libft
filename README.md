# Libft is the First project of 42 cursus.

## This project compile a C library include theses functions :

### Part 1 functions

* memset
* bzero
* memcpy
* memccpy
* memmove
* memchr
* memcmp
* strlen
* isalpha
* isdigit
* isalnum
* isascii
* isprint
* toupper
* tolower
* strchr
* strrchr
* strncmp
* strlcpy
* strlcat
* strnstr
* atoi
* calloc
* strdup

### Part 2 functions

* ft_substr
* ft_strjoin
* ft_strtrim
* ft_split
* ft_itoa
* ft_strmapi
* ft_putchar_fd
* ft_putstr_fd
* ft_putendl_fd
* ft_putnbr_fd

### Part 3 functions

* ft_lstnew
* ft_lstadd_front
* ft_lstsize
* ft_lstlast
* ft_lstadd_back
* ft_lstdelone
* ft_lstclear
* ft_lstiter
* ft_lstmap

### new functions

* get_next_line

## How to use ?

for compile the project use the Makefile, following rules included

* make : compile part1 and part2 functions in a libft.a
* make bonus : compile part1, part2 and bonus functions in a libft.a
* make clean : delete the .o
* make fclean : delete the .o and libft.a
* make re : run fclean then make rule

next you can use libft.a like : **gcc -W yourCfile.c -L. libft.a** for example
