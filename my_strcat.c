/*
** my_strcat.c for libmy-reboot in /home/victor/Libmy-reboot
** 
** Made by Victor LE DANTEC
** Login   <victor.le-dantec@epitech.eu>
** 
** Started on  Fri Jan  6 21:00:19 2017 Victor LE DANTEC
** Last update Wed Feb 22 14:02:33 2017 Victor LE DANTEC
*/

#include <stdlib.h>

size_t	my_strlen(char *);
void	*my_malloc(size_t);
char	*my_strcpy(char *, char *);

char		*my_strcat(char *dest, char *src)
{
  size_t	i;
  size_t	j;
  char		*str;

  j = 0;
  i = my_strlen(dest);
  str = my_malloc(i + my_strlen(src) + 1);
  str = my_strcpy(str, dest);
  while (src[j] != '\0')
    str[i++] = src[j++];
  str[i] = '\0';
  return (str);
}
