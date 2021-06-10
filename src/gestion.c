/*
** EPITECH PROJECT, 2020
** gestion.c
** File description:
** gestion
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include "../couscous.h"

void init_all(base_s *tok)
{
    tok->window_params = (sfVideoMode){1920, 1080, 32};
    tok->window = sfRenderWindow_create(tok->window_params,
    "Protect the Valhalla", sfClose, NULL);
    tok->scene = 0;
    init_menu(tok);
    inivariable_all(tok);
}

void event_end(base_s *tok)
{
    if (tok->event.type == sfEvtMouseButtonPressed) {
        tok->click_mouse =
        sfMouse_getPositionRenderWindow(tok->window);
        if (tok->click_mouse.x < 1125
        && tok->click_mouse.x > 790
        && tok->click_mouse.y < 600
        && tok->click_mouse.y > 491) {
            sfRenderWindow_close(tok->window);
        }
    }
}

void analyze_event(base_s *tok)
{
    tok->pos_mouse = sfMouse_getPositionRenderWindow(tok->window);
    tok->pos_target.x = tok->pos_mouse.x - 40;
    tok->pos_target.y = tok->pos_mouse.y - 15;
    sfSprite_setPosition(tok->spr_target, tok->pos_target);
    while (sfRenderWindow_pollEvent(tok->window, &tok->event)) {
        if (tok->event.type == sfEvtClosed)
            sfRenderWindow_close(tok->window);
        if (tok->scene == 0)
            event_menu(tok);
        if (tok->scene == 1)
            clic(tok);
        if (tok->scene == 2)
            event_end(tok);
    }
}
