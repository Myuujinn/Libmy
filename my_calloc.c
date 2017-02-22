/*
** my_calloc.c for libmy-reboot in /home/victor/Libmy-reboot
** 
** Made by Victor LE DANTEC
** Login   <victor.le-dantec@epitech.eu>
** 
** Started on  Fri Jan  6 21:52:33 2017 Victor LE DANTEC
** Last update Fri Jan  6 21:54:04 2017 Victor LE DANTEC
*/

#include <stdlib.h>

void	*my_memset(void *, int, size_t);
void	*my_malloc(size_t);

void	*my_calloc(size_t size)
{
  void	*ptr;

  ptr = my_malloc(size);
  ptr = my_memset(ptr, 0, size);
  return (ptr);
}
