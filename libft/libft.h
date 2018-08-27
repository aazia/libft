#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

void      ft_putchar(char c);
void      ft_putstr(char const *s);
int       ft_tolower(int c);
int       ft_toupper(int c);
int       ft_strcmp(const char *s1, const char *s2);
int       ft_strlen(const char *s);
int       ft_isprint(int c);

#endif