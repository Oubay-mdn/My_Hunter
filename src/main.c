/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main.c
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Audio/Music.h>
#include <SFML/Audio/SoundBuffer.h>
#include <SFML/Audio/Sound.h>
#include "../couscous.h"

int background(base_s *tok);
int display_ss(base_s *tok);

void inivariable_all(base_s *tok)
{
    inivariable_pall(tok);
    inivariableclic(tok);
    inivariable_dragon(tok);
    tok->rect.top = 0;
    tok->rect.left = 0;
    tok->rect.width = 220;
    tok->rect.height = 220;
    tok->V_position.x = 10;
    tok->V_position.y = 835;
    tok->sprite_V = sfSprite_create();
    tok->texture_V = sfTexture_createFromFile("pic/run1.png", NULL);
    sfSprite_setTexture(tok->sprite_V, tok->texture_V, sfTrue);
    sfSprite_setTextureRect(tok->sprite_V, tok->rect);
    tok->clock = sfClock_create();
    tok->mamusique = sfMusic_createFromFile("music/ingame.ogg");
    sfMusic_play(tok->mamusique);
}

int background(base_s *tok)
{
    tok->sky = sfTexture_createFromFile("pic/sky.png", NULL);
    tok->fonnd = sfSprite_create();
    sfSprite_setTexture(tok->fonnd, tok->sky, sfTrue);
}

void help(void)
{
    my_putstr("[-------------------------]");
    my_putchar('\n');
    my_putstr("| Moudden Oubay my_Hunter |");
    my_putchar('\n');
    my_putstr("| Epitech Student at Lyon |");
    my_putchar('\n');
    my_putstr("[-------------------------]");
    my_putchar('\n');
    my_putchar('\n');
    my_putstr("A game when you will be the protection of the Valhalla.\n");
    my_putstr("How do you play ? What is the command ?\n");
    my_putstr("The goal is to protect the Valhalla for the attack, how ?\n");
    my_putstr("You just have to press your left click on the enemies !");
    my_putchar('\n');
}

int main(int ac, char **av)
{
    base_s tok;
    tok.myscore = 10;

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        help();
        return (0);
    }
    else if (ac == 1) {
        init_all(&tok);
        while (sfRenderWindow_isOpen(tok.window)) {
            sfRenderWindow_clear(tok.window, sfBlack);
            analyze_event(&tok);
            game(&tok);
            sfRenderWindow_display(tok.window);
        }
        destroy_all(&tok);
    }
}