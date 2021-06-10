/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2020
** File description:
** parallax.c
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Audio/Music.h>
#include <SFML/Audio.h>
#include "../couscous.h"

int parallax(base_s *tok)
{
    parallax1(tok);
    parallax2(tok);
    parallax3(tok);
    parallax4(tok);
    parallax5(tok);
    parallax6(tok);
    display_ss(tok);
    dp_dragon(tok);
}

int parallax5(base_s *tok)
{
    tok->P5_position.x -= 5;
    sfSprite_setPosition(tok->P5_sprite, tok->P5_position);
    if (tok->P5_position.x <= -1920) {
        tok->P5_position.x = 0;
        sfSprite_setPosition(tok->P5_sprite, tok->P5_position);
    }
    if (sfClock_getElapsedTime(tok->clock5).microseconds > 5) {
        sfClock_restart(tok->clock5);
    }
}

int parallax6(base_s *tok)
{
    tok->P6_position.x -= 15;
    sfSprite_setPosition(tok->P6_sprite, tok->P6_position);
    if (tok->P6_position.x <= -1920) {
        tok->P6_position.x = 0;
        sfSprite_setPosition(tok->P6_sprite, tok->P6_position);
    }
    if (sfClock_getElapsedTime(tok->clock6).microseconds > 50000) {
        sfClock_restart(tok->clock6);
    }
}

int parallax0(base_s *tok)
{
    tok->P0_position.x -= 20;
    sfSprite_setPosition(tok->P0_sprite, tok->P0_position);
    if (tok->P0_position.x <= -1920) {
        tok->P0_position.x = 0;
        sfSprite_setPosition(tok->P0_sprite, tok->P0_position);
    }
    if (sfClock_getElapsedTime(tok->clock0).microseconds > 50000) {
        sfClock_restart(tok->clock0);
    }
}

void my_draw(base_s *tok)
{
    parallax(tok);
    initinit(tok);
    score(tok);
    tok->str_life[0] = tok->nb_life + 48;
    lifegest(tok);
    aimtarget(tok);
    get_out(tok);
    if (tok->nb_life == 0)
        tok->scene = 2;
    if (tok->V_position.x > 1980) {
        tok->nb_life -= 1;
        tok->V_position.x = -120;
        sfSound_play(tok->touchsound);
    }
    if (tok->D_position.x > 1980) {
        tok->nb_life -= 1;
        tok->D_position.x = -120;
        sfSound_play(tok->touchsound);
    }
}