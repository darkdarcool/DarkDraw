#ifndef SIZE30BUTTON_H
#define SIZE30BUTTON_H

#include <SDl2/SDL.h>
#include <SDl2/SDL_image.h>

class Size30Button {
public:
    SDL_Renderer* renderer;
    Size30Button(SDL_Renderer* _renderer);
    void Render();
    bool ShouldChangeSize(SDL_Event* event);
};

#endif SIZE30BUTTON_H
