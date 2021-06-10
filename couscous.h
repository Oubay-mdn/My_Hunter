/*
** EPITECH PROJECT, 2020
** couscous.h
** File description:
** structur for the hunter
*/

#include <SFML/Graphics.h>
#include <SFML/Audio/Music.h>
#include <SFML/Audio.h>
#include <stdlib.h>

typedef struct base {
    sfVideoMode window_params;
    sfRenderWindow *window;
    sfEvent event;
    sfMusic *mamusique;

    sfSprite *fonnd;
    sfTexture *sky;

    sfSprite *sprite_V;
    sfTexture *texture_V;
    sfIntRect rect;
    sfClock *clock;
    sfClock *clock_jV;
    sfVector2f V_position;

    sfSprite *sprite_D;
    sfTexture *texture_D;
    sfIntRect recd;
    sfClock *clockd;
    sfVector2f D_position;

    sfVector2i mouse;
    sfSprite *smouse;
    sfTexture *textmouse;

    sfTexture *P0_texture;
    sfSprite *P0_sprite;
    sfIntRect rect0;
    sfVector2f P0_position;
    sfClock *clock0;

    sfTexture *P1_texture;
    sfSprite *P1_sprite;
    sfIntRect rect1;
    sfVector2f P1_position;
    sfClock *clock1;

    sfTexture *P2_texture;
    sfSprite *P2_sprite;
    sfIntRect rect2;
    sfVector2f P2_position;
    sfClock *clock2;

    sfTexture *P3_texture;
    sfSprite *P3_sprite;
    sfIntRect rect3;
    sfVector2f P3_position;
    sfClock *clock3;

    sfTexture *P4_texture;
    sfSprite *P4_sprite;
    sfIntRect rect4;
    sfVector2f P4_position;
    sfClock *clock4;

    sfTexture *P5_texture;
    sfSprite *P5_sprite;
    sfIntRect rect5;
    sfVector2f P5_position;
    sfClock *clock5;

    sfTexture *P6_texture;
    sfSprite *P6_sprite;
    sfIntRect rect6;
    sfVector2f P6_position;
    sfClock *clock6;

    sfTexture *text_menu;
    sfSprite *spr_menu;
    sfVector2i click_mouse;
    sfVector2i pos_mouse;
    sfTexture *text_target;
    sfSprite *spr_target;
    sfVector2f pos_target;
    int scene;
    sfTexture *text_screen;
    sfSprite *screen;

    int myscore;
    sfText *txtscore;
    sfText *textsco;
    sfVector2f myscore_p;
    sfVector2f myscore_u;

    int nb_life;
    int nb_score;
    char *str_score;
    char *str_life;
    sfText *life;
    sfText *score;
    sfText *text_life;
    sfFont *my_font;

    sfSound *jsound;
    sfSoundBuffer *buffsound;
    sfSound *touchsound;
    sfSoundBuffer *buffertouchs;
    sfSound *lolsound;
    sfSoundBuffer *bufflol;
    sfSound *deathsound;
    sfSoundBuffer *bufferdeath;

    sfTexture *text_end;
    sfSprite *spr_end;
} base_s;

void inivariable_viking(base_s *tok);
int display_ss(base_s *tok);
int parallax(base_s *tok);
int parallax1(base_s *tok);
int parallax2(base_s *tok);
int parallax3(base_s *tok);
int parallax4(base_s *tok);
int parallax5(base_s *tok);
int parallax6(base_s *tok);
int parallax0(base_s *tok);
void my_draw(base_s *tok);
int aimtarget(base_s *tok);
int get_out(base_s *tok);
int aimtarget(base_s *tok);
int clic(base_s *tok);
void inivariableclic(base_s *tok);
int dp_dragon(base_s *tok);
void inivariable_dragon(base_s *tok);
void event_menu(base_s *tok);
void draw_menu(base_s *tok);
void inifont(base_s *tok);
void init_end(base_s *tok);
void initlife(base_s *tok);
void init_menu(base_s *tok);
void lifegest(base_s *tok);
int main(int ac, char **av);