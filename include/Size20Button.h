#ifndef SIZE20BUTTON_H
#define SIZE20BUTTON_H

#include <SDl2/SDL.h>
#include <SDl2/SDL_image.h>

class Size20Button {
public:
    SDL_Renderer* renderer;
    Size20Button(SDL_Renderer* _renderer);
    void Render();
    bool ShouldChangeSize(SDL_Event* event);
};



#endif // SIZE20BUTTON_H
