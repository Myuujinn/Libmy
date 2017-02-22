/*
** my_getnbr.c for libmy-reboot in /home/victor/Libmy-reboot
** 
** Made by Victor LE DANTEC
** Login   <victor.le-dantec@epitech.eu>
** 
** Started on  Fri Jan  6 19:19:58 2017 Victor LE DANTEC
** Last update Fri Jan  6 19:34:04 2017 Victor LE DANTEC
*/

#include <stdlib.h>

ssize_t		my_getnbr(char *str)
{
  ssize_t	nb;
  signed char	sign;
  size_t	i;

  nb = i = 0;
  sign = 1;
  while (str[i] == '-' || str[i] == '+')
    if (str[i++] == '-')
      sign = -sign;
  while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
    nb = nb * 10 + str[i++] - '0';
  return ((sign == -1) ? -nb : nb);
}
