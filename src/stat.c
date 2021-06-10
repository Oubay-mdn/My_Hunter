/*
** EPITECH PROJECT, 2020
** B-MUL-100-LYN-1-1-myhunter-oubay.moudden
** File description:
** stat
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include "../couscous.h"

void init_end(base_s *tok)
{
    tok->text_end = sfTexture_createFromFile("pic/end.png", NULL);
    tok->spr_end = sfSprite_create();
    sfSprite_setTexture(tok->spr_end, tok->text_end, sfTrue);
    sfRenderWindow_setMouseCursorVisible(tok->window, 1);
}

void draw_end(base_s *tok)
{
    sfRenderWindow_setMouseCursorVisible(tok->window, 1);
    sfRenderWindow_drawSprite(tok->window, tok->spr_end, NULL);
    score(tok);
}

void inifont(base_s *tok)
{
    tok->my_font = sfFont_createFromFile("pic/Redressed-Regular.ttf");
    tok->life = sfText_create();
    tok->score = sfText_create();
    tok->text_life = sfText_create();
    tok->nb_life = 3;
    tok->nb_score = 0;
    sfText_setFont(tok->score, tok->my_font);
    sfText_setFont(tok->life, tok->my_font);
    sfText_setFont(tok->text_life, tok->my_font);
}

void initlife(base_s *tok)
{
    sfText_setPosition(tok->text_life, (sfVector2f){10, 10});
    sfText_setPosition(tok->life, (sfVector2f){70, 10});
    sfText_setPosition(tok->score, (sfVector2f){10, 50});
    tok->str_life = malloc(sizeof(char) * 2);
    tok->str_score = malloc(sizeof(char) * 10);
    tok->str_life[0] = tok->nb_life + 48;
    tok->str_life[1] = '\0';
    sfText_setString(tok->text_life, "life :");
    sfText_setString(tok->life, tok->str_life);
}

void initinit(base_s *tok)
{
    sfRenderWindow_drawSprite(tok->window, tok->fonnd, NULL);
    sfRenderWindow_drawSprite(tok->window, tok->P0_sprite, NULL);
    sfRenderWindow_drawSprite(tok->window, tok->P1_sprite, NULL);
    sfRenderWindow_drawSprite(tok->window, tok->P2_sprite, NULL);
    sfRenderWindow_drawSprite(tok->window, tok->P3_sprite, NULL);
    sfRenderWindow_drawSprite(tok->window, tok->P4_sprite, NULL);
    sfRenderWindow_drawSprite(tok->window, tok->P5_sprite, NULL);
    sfRenderWindow_drawSprite(tok->window, tok->P6_sprite, NULL);
    sfRenderWindow_drawSprite(tok->window, tok->sprite_V, NULL);
    sfRenderWindow_drawSprite(tok->window, tok->sprite_D, NULL);
}