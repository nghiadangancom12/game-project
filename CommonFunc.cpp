

#include "CommonFunc.h"
#include "BaseObject.h"
bool SDLCommonFunc::CheckCollision(const SDL_Rect& object1, const SDL_Rect& object2)
{
    int left_a = object1.x;
    int right_a = object1.x + object1.w;
    int top_a = object1.y;
    int bottom_a = object1.y + object1.h;

    int left_b = object2.x;
    int right_b = object2.x + object2.w;
    int top_b = object2.y;
    int bottom_b = object2.y + object2.h;

    // Case 1: size object 1 < size object 2
    if (left_a > left_b && left_a < right_b)
    {
        if (top_a > top_b && top_a < bottom_b)
        {
            return true;
        }
    }

    if (left_a > left_b && left_a < right_b)
    {
        if (bottom_a > top_b && bottom_a < bottom_b)
        {
            return true;
        }
    }

    if (right_a > left_b && right_a < right_b)
    {
        if (top_a > top_b && top_a < bottom_b)
        {
            return true;
        }
    }

    if (right_a > left_b && right_a < right_b)
    {
        if (bottom_a > top_b && bottom_a < bottom_b)
        {
            return true;
        }
    }

    // Case 2: size object 1 < size object 2
    if (left_b > left_a && left_b < right_a)
    {
        if (top_b > top_a && top_b < bottom_a)
        {
            return true;
        }
    }

    if (left_b > left_a && left_b < right_a)
    {
        if (bottom_b > top_a && bottom_b < bottom_a)
        {
            return true;
        }
    }

    if (right_b > left_a && right_b < right_a)
    {
        if (top_b > top_a && top_b < bottom_a)
        {
            return true;
        }
    }

    if (right_b > left_a && right_b < right_a)
    {
        if (bottom_b > top_a && bottom_b < bottom_a)
        {
            return true;
        }
    }

    // Case 3: size object 1 = size object 2
    if (top_a == top_b && right_a == right_b && bottom_a == bottom_b)
    {
        return true;
    }

    return false;
}

bool SDLCommonFunc::CheckMousePos(const int& x,const int& y,const SDL_Rect& Obj_)
{
    return (x >= Obj_.x && x <= Obj_.x + Obj_.w && y>= Obj_.y && y <= Obj_.y + Obj_.h);
}

bool SDLCommonFunc::MainMenu(SDL_Renderer* screen)
{
    BaseObject StartButton[2];
	BaseObject ExitButton[2];
	BaseObject ContinueButton[2];
    BaseObject menu_screen;
	StartButton[0].LoadImg("img//startbutton.png",screen);
	StartButton[1].LoadImg("img//startbutton.png",screen);
	ExitButton[0].LoadImg("img//exitbutton.png",screen);
	ExitButton[1].LoadImg("img//exitbutton.png",screen);
	// ContinueButton[0].LoadImg("img//menu//ContinueButtomUp.png",screen);
	// ContinueButton[1].LoadImg("img//menu//ContinueButtomUp.png",screen);
    menu_screen.LoadImg("img//menu.png",screen);
	SDL_Rect Button = StartButton[0].GetRect();
	StartButton[0].SetRect(SCREEN_WIDTH/2 - Button.w/2,SCREEN_HEIGHT/2);
	StartButton[1].SetRect(SCREEN_WIDTH/2 - Button.w/2,SCREEN_HEIGHT/2);
	
	Button = ExitButton[0].GetRect();
	ExitButton[0].SetRect(SCREEN_WIDTH/2 - Button.w/2,SCREEN_HEIGHT/2 + Button.h*1.5);
	ExitButton[1].SetRect(SCREEN_WIDTH/2 - Button.w/2,SCREEN_HEIGHT/2 + Button.h*1.5);

	// Button = ContinueButton[0].GetRect();
	// ContinueButton[0].SetRect(SCREEN_WIDTH/2 - Button.w/2,SCREEN_HEIGHT/2 - Button.h*1.5);
	// ContinueButton[1].SetRect(SCREEN_WIDTH/2 - Button.w/2,SCREEN_HEIGHT/2 - Button.h*1.5);
    int MousePosX = 0;
    int MousePosY = 0;
    bool menu_quit = false;
    while(!menu_quit)
	{
        SDL_RenderClear(screen);
        menu_screen.Render(screen, NULL);
        while(SDL_PollEvent(&g_event) != 0)
        {
            if(g_event.type == SDL_MOUSEMOTION)
            {
                MousePosX = g_event.motion.x;
                MousePosY = g_event.motion.y;
            }
            if(g_event.type == SDL_MOUSEBUTTONDOWN)
            {
                if (g_event.button.button == SDL_BUTTON_LEFT)
                {
                    if(SDLCommonFunc::CheckMousePos(MousePosX,MousePosY,StartButton[0].GetRect()) == true)
                    {
                        menu_quit = true;
                        return false;
                    }
                    if(SDLCommonFunc::CheckMousePos(MousePosX,MousePosY,ExitButton[0].GetRect()) == true)
                    {
                        menu_quit = true;
                        return true;
                    }
                }
            }
        }
        if(SDLCommonFunc::CheckMousePos(MousePosX,MousePosY,StartButton[0].GetRect()) == true)
        {
            StartButton[1].Render(screen);
        }
        else
        {
            StartButton[0].Render(screen);
        }
        if(SDLCommonFunc::CheckMousePos(MousePosX,MousePosY,ExitButton[0].GetRect()) == true)
        {
            ExitButton[1].Render(screen);
        }
        else
        {
            ExitButton[0].Render(screen);
        }
        SDL_RenderPresent(screen);
        SDL_Delay(300);
    }
    return true;
}