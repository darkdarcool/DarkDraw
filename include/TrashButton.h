#ifndef TRASHBUTTON_H
#define TRASHBUTTON_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class TrashButton {
public:
    SDL_Renderer* renderer;
    TrashButton(SDL_Renderer* _renderer);
    void Render();
    bool ShouldDelete(SDL_Event* event);
};


#endif //TRASHBUTTON_H
