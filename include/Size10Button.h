#ifndef SIZE10BUTTON_H
#define SIZE20BUTTON_H

#include <SDl2/SDL.h>
#include <SDl2/SDL_image.h>

class Size10Button {
public:
    SDL_Renderer* renderer;
    Size10Button(SDL_Renderer* _renderer);
    void Render();
    bool ShouldChangeSize(SDL_Event* event);
};



#endif // SIZE10BUTTON_H
