/*
** EPITECH PROJECT, 2020
** B-MUL-100-LYN-1-1-myhunter-oubay.moudden
** File description:
** score
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include "../couscous.h"

char *my_itoa(int nb)
{
    int le = 0;
    char *str;
    int tt = nb;

    while (tt > 0) {
        tt /= 10;
        le++;
    }
    str = malloc(sizeof(*str) * (le + 1));
    str[le] = '\0';
    while (le--) {
        str[le] = nb % 10 + '0';
        nb /= 10;
    }
    return (str);
    free(str);
}

void score(base_s *tok)
{
    char *str;
    str = my_itoa(tok->myscore);
    tok->myscore_p.x = 980;
    tok->myscore_u.x = 850;
    tok->txtscore = sfText_create();
    tok->textsco = sfText_create();
    sfText_setString(tok->txtscore, "Score : ");
    sfText_setString(tok->textsco, str);
    sfText_setFont(tok->txtscore, tok->my_font);
    sfText_setFont(tok->textsco, tok->my_font);
    sfText_setCharacterSize(tok->txtscore, 50);
    sfText_setCharacterSize(tok->textsco, 50);
    sfText_setPosition(tok->textsco, tok->myscore_p);
    sfText_setPosition(tok->txtscore, tok->myscore_u);
    sfRenderWindow_drawText(tok->window, tok->txtscore, NULL);
    sfRenderWindow_drawText(tok->window, tok->textsco, NULL);
}