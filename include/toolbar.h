#ifndef TOOLBAR_H
#define TOOLBAR_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>

class ToolBar {
public:
    SDL_Renderer* renderer;

    ToolBar(SDL_Renderer* _renderer);
    void Render();
};

#endif //TOOLBAR_H
