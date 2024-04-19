
#ifndef COMMON_FUNCTION_H_
#define COMMON_FUNCTION_H_

#include <windows.h>
#include <string>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include <vector>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_ttf.h>
static SDL_Window* g_window = NULL;
static SDL_Renderer* g_screen = NULL;
static SDL_Event g_event;

static Mix_Music* g_music = NULL;
static Mix_Chunk* g_sound_bullet[3];
static Mix_Chunk* g_sound_explosion = NULL;
static Mix_Chunk* g_sound_ex_main = NULL;


static char g_name_audio_bullet_main1[] = { "sound//Fire.wav" };
static char g_name_audio_bullet_main2[] = { "sound//Laser.wav" };
static char g_name_audio_ex_main[] = { "sound//Explosion+1.wav" };
static char g_name_audio_ex_threats[] = { "sound//Bomb1.wav" };
static char g_name_sound_increase[] = { "sound//two_beep_.wav" };
static char kSoundBeep[] = { "sound//beep_.wav" };
// Screen
const int FRAME_PER_SECOND = 25;  // fps
const int SCREEN_WIDTH = 1280;
const int SCREEN_HEIGHT = 640;
const int SCREEN_BPP = 32;

const int COLOR_KEY_R = 167;
const int COLOR_KEY_G = 175;
const int COLOR_KEY_B = 180;

const int RENDER_DRAW_COLOR = 0Xff;

//BULLET OBJECT
#define PLAYER_BULLET_SPEED 20

#define BLANK_TILE 0
#define TILE_SIZE 64

#define MAX_MAP_X 400
#define MAX_MAP_Y 10

#define STATE_MONEY 4

 struct Input
{
    int left_;
    int right_;
    int up_;
    int down_;
    int jump_;
};

 struct Map
{
    int start_x_;
    int start_y_;
    
    int max_x_;
    int max_y_;

    int tile[MAX_MAP_Y][MAX_MAP_X];
    std :: string file_name_;
};


namespace SDLCommonFunc
{
    bool CheckCollision(const SDL_Rect& object1, const SDL_Rect& object2);
    bool CheckMousePos(const int& x,const int& y,const SDL_Rect& Obj_);
    bool MainMenu(SDL_Renderer* screen);
}

#endif