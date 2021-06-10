/*
** EPITECH PROJECT, 2020
** clic.C
** File description:
** clic fonction
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include "../couscous.h"

int display_ss(base_s *tok)
{
    if (sfClock_getElapsedTime(tok->clock).microseconds > 45000) {
        tok->rect.left += 220;
        if (tok->V_position.x > 0-220) {
            tok->V_position.x += 20;
        }else
        {
            tok->V_position.x = -100;
        }
        sfSprite_setTextureRect(tok->sprite_V, tok->rect);
        sfSprite_setPosition(tok->sprite_V, tok->V_position);
        if (tok->rect.left >= 3520) {
            tok->rect.left = 0;
        }
        sfClock_restart(tok->clock);
    }
    sfRenderWindow_drawSprite(tok->window, tok->sprite_V, NULL);
}

int parallax1(base_s *tok)
{
    tok->P1_position.x -= 0.5;
    sfSprite_setPosition(tok->P1_sprite, tok->P1_position);
    if (tok->P1_position.x <= -1920) {
        tok->P1_position.x = 0;
        sfSprite_setPosition(tok->P1_sprite, tok->P1_position);
    }
    if (sfClock_getElapsedTime(tok->clock1).microseconds > 50000) {
        sfClock_restart(tok->clock1);
    }
}

int parallax2(base_s *tok)
{
    tok->P2_position.x -= 1;
    sfSprite_setPosition(tok->P2_sprite, tok->P2_position);
    if (tok->P2_position.x <= -1920) {
        tok->P2_position.x = 0;
        sfSprite_setPosition(tok->P2_sprite, tok->P2_position);
    }
    if (sfClock_getElapsedTime(tok->clock2).microseconds > 50000) {
        sfClock_restart(tok->clock2);
    }
}

int parallax3(base_s *tok)
{
    tok->P3_position.x -= 10;
    sfSprite_setPosition(tok->P3_sprite, tok->P3_position);
    if (tok->P3_position.x <= -1920) {
        tok->P3_position.x = 0;
        sfSprite_setPosition(tok->P3_sprite, tok->P3_position);
    }
    if (sfClock_getElapsedTime(tok->clock3).microseconds > 5000) {
        sfClock_restart(tok->clock3);
    }
}

int parallax4(base_s *tok)
{
    tok->P4_position.x -= 2;
    sfSprite_setPosition(tok->P4_sprite, tok->P4_position);
    if (tok->P4_position.x <= -1920) {
        tok->P4_position.x = 0;
        sfSprite_setPosition(tok->P4_sprite, tok->P4_position);
    }
    if (sfClock_getElapsedTime(tok->clock4).microseconds > 50000) {
        sfClock_restart(tok->clock4);
    }
}