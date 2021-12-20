#ifndef REDBUTTON_H
#define REDBUTTON_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class RedButton {
public:
    SDL_Renderer* renderer;
    RedButton(SDL_Renderer* _renderer);
    void Render();
    bool ShouldChangeColor(SDL_Event* event);
};

#endif //REDBUTTON_H
