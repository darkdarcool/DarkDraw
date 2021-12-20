#ifndef BLUEBUTTON_H
#define BLUEBUTTON_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class BlueButton {
public:
    SDL_Renderer* renderer;
    BlueButton(SDL_Renderer* _renderer);
    void Render();
    bool ShouldChangeColor(SDL_Event* event);
};

#endif 
