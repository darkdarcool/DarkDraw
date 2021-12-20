#ifndef ERASERBUTTON_H
#define ERASERBUTTON_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class EraserButton {
public:
    SDL_Renderer* renderer;
    EraserButton(SDL_Renderer* _renderer);
    void Render();
    bool ShouldChangeColor(SDL_Event* event);
};


#endif //ERASERBUTTON_H
