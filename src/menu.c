/*
** EPITECH PROJECT, 2020
** menu.c
** File description:
** menu
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include "../couscous.h"

void lifegest(base_s *tok)
{
    sfText_setString(tok->life, tok->str_life);
    sfRenderWindow_drawText(tok->window, tok->text_life, NULL);
    sfRenderWindow_drawText(tok->window, tok->life, NULL);
}

void init_menu(base_s *tok)
{
    tok->text_menu = sfTexture_createFromFile("pic/menu.png", NULL);
    tok->spr_menu = sfSprite_create();
    sfSprite_setTexture(tok->spr_menu, tok->text_menu, sfTrue);
    tok->text_target = sfTexture_createFromFile("pic/target.png", NULL);
    tok->spr_target = sfSprite_create();
    sfSprite_setTexture(tok->spr_target, tok->text_target, sfTrue);
    sfRenderWindow_setMouseCursorVisible(tok->window, 1);
}

void draw_menu(base_s *tok)
{
    sfRenderWindow_drawSprite(tok->window, tok->spr_menu, NULL);
}

void event_menu(base_s *tok)
{
    if (tok->event.type == sfEvtMouseButtonPressed) {
        tok->click_mouse =
        sfMouse_getPositionRenderWindow(tok->window);
        if (tok->click_mouse.x < 1125
        && tok->click_mouse.x > 790
        && tok->click_mouse.y < 600
        && tok->click_mouse.y > 491) {
            tok->scene = 1;
            sfSound_play(tok->lolsound);
        }
    }
}

void game(base_s *tok)
{
    if (tok->scene == 0)
        draw_menu(tok);
    if (tok->scene == 1) {
        my_draw(tok);
        tok->myscore += 1;
    }
    if (tok->scene == 2)
        draw_end(tok);
}