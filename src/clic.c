/*
** EPITECH PROJECT, 2020
** clic.c
** File description:
** all the clic gestion
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include "../couscous.h"

void inivariableclic(base_s *tok)
{
    tok->textmouse = sfTexture_createFromFile("pic/aim.png", NULL);
    tok->smouse = sfSprite_create();
    sfSprite_setTexture(tok->smouse, tok->textmouse, sfTrue);
}

int clic(base_s *tok)
{
    if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        tok->mouse = sfMouse_getPositionRenderWindow(tok->window);
    }
}

int aimtarget(base_s *tok)
{
    tok->mouse = sfMouse_getPositionRenderWindow(tok->window);
    sfRenderWindow_setMouseCursorVisible(tok->window, 0);
    sfSprite_setPosition(tok->smouse, (sfVector2f)
    {(float)tok->mouse.x - 89, tok->mouse.y - 89});
    sfRenderWindow_drawSprite(tok->window, tok->smouse, NULL);
}

int get_out(base_s *tok)
{
    if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        tok->mouse.x = tok->event.mouseButton.x;
        tok->mouse.y = tok->event.mouseButton.y;
        if (tok->mouse.x <= tok->V_position.x + 220 && tok->mouse.x >
        tok->V_position.x && tok->mouse.y <= tok->V_position.y + 220 &&
        tok->mouse.y > tok->V_position.y) {
            tok->V_position.x = -120;
            tok->V_position.y = 835;
            tok->myscore += 500;
            sfSound_play(tok->deathsound);
        }
        if (tok->mouse.x <= tok->D_position.x + 200 && tok->mouse.x >=
        tok->D_position.x && tok->mouse.y <= tok->D_position.y + 200 &&
        tok->mouse.y > tok->D_position.y) {
            tok->D_position.x = -150;
            tok->D_position.y = rand()%800;
            tok->myscore += 1000;
            sfSound_play(tok->deathsound);
        }
    }
}