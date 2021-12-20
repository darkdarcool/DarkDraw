
#ifndef BLACKBUTTON_H
#define BLACKBUTTON_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class BlackButton {
public:
    SDL_Renderer* renderer;
    BlackButton(SDL_Renderer* _renderer);
    void Render();
    bool ShouldChangeColor(SDL_Event* event);
};

#endif /
