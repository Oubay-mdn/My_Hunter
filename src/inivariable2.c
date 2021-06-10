/*
** EPITECH PROJECT, 2020
** MUL_my_hunter_2020
** File description:
** inivariable2.c
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include "../couscous.h"

void inivariable_p6(base_s *tok)
{
    tok->P6_texture = sfTexture_createFromFile("pic/p6.png", NULL);
    tok->P6_sprite = sfSprite_create();
    tok->P6_position.y = 0;
    tok->P6_position.x = 0;
    sfSprite_setTexture(tok->P6_sprite, tok->P6_texture, 0);
    tok->clock6 = sfClock_create();
}

void inivariable_p0(base_s *tok)
{
    tok->P0_texture = sfTexture_createFromFile("pic/p0.png", NULL);
    tok->P0_sprite = sfSprite_create();
    tok->P0_position.y = 0;
    tok->P0_position.x = 0;
    sfSprite_setTexture(tok->P0_sprite, tok->P0_texture, 0);
    tok->clock0 = sfClock_create();
}

void inivariable_pall(base_s *tok)
{
    background(tok);
    inivariable_p0(tok);
    inivariable_p1(tok);
    inivariable_p2(tok);
    inivariable_p3(tok);
    inivariable_p4(tok);
    inivariable_p5(tok);
    inivariable_p6(tok);
    inifont(tok);
    initlife(tok);
    init_end(tok);
    init_soundj(tok);
}

void destroy_t(base_s *tok)
{
    sfTexture_destroy(tok->sky);
    sfTexture_destroy(tok->P0_texture);
    sfTexture_destroy(tok->P1_texture);
    sfTexture_destroy(tok->P2_texture);
    sfTexture_destroy(tok->P3_texture);
    sfTexture_destroy(tok->P4_texture);
    sfTexture_destroy(tok->P5_texture);
    sfTexture_destroy(tok->P6_texture);
    sfTexture_destroy(tok->texture_V);
    sfTexture_destroy(tok->texture_D);
    sfTexture_destroy(tok->textmouse);
    sfText_destroy(tok->text_life);
    sfText_destroy(tok->life);
    sfText_destroy(tok->score);
    sfFont_destroy(tok->my_font);
    sfSound_destroy(tok->deathsound);
    sfSoundBuffer_destroy(tok->bufferdeath);
}

void destroy_all(base_s *tok)
{
    destroy_t(tok);
    sfSprite_destroy(tok->fonnd);
    sfSprite_destroy(tok->P0_sprite);
    sfSprite_destroy(tok->P1_sprite);
    sfSprite_destroy(tok->P2_sprite);
    sfSprite_destroy(tok->P3_sprite);
    sfSprite_destroy(tok->P4_sprite);
    sfSprite_destroy(tok->P5_sprite);
    sfSprite_destroy(tok->P6_sprite);
    sfSprite_destroy(tok->sprite_V);
    sfSprite_destroy(tok->sprite_D);
    sfSprite_destroy(tok->smouse);
    sfMusic_destroy(tok->mamusique);
    sfSound_destroy(tok->jsound);
    sfSoundBuffer_destroy(tok->buffsound);
    sfSound_destroy(tok->touchsound);
    sfSoundBuffer_destroy(tok->buffertouchs);
    sfSound_destroy(tok->lolsound);
    sfSoundBuffer_destroy(tok->bufflol);
}
