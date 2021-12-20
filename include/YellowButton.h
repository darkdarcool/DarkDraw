#ifndef YELLOWBUTTON_H
#define YELLOWBUTTON_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class YellowButton {
public:
    SDL_Renderer* renderer;
    YellowButton(SDL_Renderer* _renderer);
    void Render();
    bool ShouldChangeColor(SDL_Event* event);
};

#endif //YELLOWBUTTON_H
