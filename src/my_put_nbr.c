/*
** EPITECH PROJECT, 2020
** my put nbr
** File description:
** put nbr
*/

#include "../couscous.h"

void my_putchar(char c);

int my_put_nbr(int nb)
{
    long div = 1;
    long num = nb;
    int n = 0;

    while (num % div != num) {
        n++;
        div = div * 10;
    }
    if (num < 0) {
        my_putchar('-');
        div = -div;
    }
    if (n == 0)
        my_putchar(48);
    for (; n > 0; n--) {
        my_putchar(48 + ((num % div)/(div/10)));
        div = div / 10;
    }
    return (0);
}
