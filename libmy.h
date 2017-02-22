/*
** libmy.h for Libmy in /home/myujinn/PSU/PSU_2016_navy
**
** Made by Victor LE DANTEC
** Login   <victor.le-dantec@epitech.eu>
**
** Started on  Mon Jan 30 15:21:00 2017 Victor LE DANTEC
** Last update Tue Jan 31 12:00:46 2017 Victor LE DANTEC
*/

#ifndef _LIBMY_H_
# define _LIBMY_H_

# include <stdlib.h>

void    *my_calloc(size_t);
ssize_t my_getnbr(char *);
void    *my_malloc(size_t);
void    *my_memset(void *, int, size_t);
ssize_t my_power(ssize_t, ssize_t);
void    my_put_adress(long);
void    my_putchar(char);
void    my_put_nbr_base(ssize_t, char *);
void    my_put_nbr(long long);
void    my_putstr(char *);
void	my_putstrerr(char *);
void    my_show_wordtab(char **);
char    *my_strcat(char *, char *);
ssize_t my_strcmp(char *, char *);
char    *my_strcpy(char *, char *);
char    *my_strdup(char *);
size_t  my_strlen(char *);
ssize_t my_strncmp(char *, char *, size_t);
char    *my_strncpy(char *, char *, ssize_t);
void    my_swap(int *, int *);
char    **my_tabdup(char **);

#endif
