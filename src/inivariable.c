/*
** EPITECH PROJECT, 2020
** MUL_my_hunter_2020
** File description:
** inivariable.c
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include "../couscous.h"

void inivariable_p1(base_s *tok)
{
    tok->P1_texture = sfTexture_createFromFile("pic/p1.png", NULL);
    tok->P1_sprite = sfSprite_create();
    tok->P1_position.y = 0;
    tok->P1_position.x = 0;
    sfSprite_setTexture(tok->P1_sprite, tok->P1_texture, 0);
    tok->clock1 = sfClock_create();
}

void inivariable_p2(base_s *tok)
{
    tok->P2_texture = sfTexture_createFromFile("pic/p2.png", NULL);
    tok->P2_sprite = sfSprite_create();
    tok->P2_position.y = 0;
    tok->P2_position.x = 0;
    sfSprite_setTexture(tok->P2_sprite, tok->P2_texture, 0);
    tok->clock2 = sfClock_create();
}

void inivariable_p3(base_s *tok)
{
    tok->P3_texture = sfTexture_createFromFile("pic/p3.png", NULL);
    tok->P3_sprite = sfSprite_create();
    tok->P3_position.y = 0;
    tok->P3_position.x = 0;
    sfSprite_setTexture(tok->P3_sprite, tok->P3_texture, 0);
    tok->clock3 = sfClock_create();
}

void inivariable_p4(base_s *tok)
{
    tok->P4_texture = sfTexture_createFromFile("pic/p4.png", NULL);
    tok->P4_sprite = sfSprite_create();
    tok->P4_position.y = 0;
    tok->P4_position.x = 0;
    sfSprite_setTexture(tok->P4_sprite, tok->P4_texture, 0);
    tok->clock4 = sfClock_create();
}

void inivariable_p5(base_s *tok)
{
    tok->P5_texture = sfTexture_createFromFile("pic/p5.png", NULL);
    tok->P5_sprite = sfSprite_create();
    tok->P5_position.y = 0;
    tok->P5_position.x = 0;
    sfSprite_setTexture(tok->P5_sprite, tok->P5_texture, 0);
    tok->clock5 = sfClock_create();
}