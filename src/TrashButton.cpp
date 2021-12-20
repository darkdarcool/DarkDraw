#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "TrashButton.h"

TrashButton::TrashButton(SDL_Renderer *_renderer) {
    renderer = _renderer;
}

void TrashButton::Render() {
    SDL_Texture* tex = NULL;
    tex = IMG_LoadTexture(renderer, "./res/toolbar/TrashButton.png");
    if (tex == NULL) {
        printf("Unable to load image: %s\n", SDL_GetError());
        exit(1);
    }
    SDL_Rect dst;
    int x = 1150;
    dst.x = x;
    dst.y = 730;
    dst.w = 32;
    dst.h = 32;
    SDL_RenderCopy(renderer, tex, NULL, &dst);
    SDL_DestroyTexture(tex);
}

bool TrashButton::ShouldDelete(SDL_Event* _event) {
    int x = 1150;
    if (_event->type == SDL_MOUSEBUTTONDOWN) {
        if (_event->button.button == SDL_BUTTON_LEFT) {
            if (_event->button.x >= x && _event->button.x <= x + 32 && _event->button.y >= 730 && _event->button.y <= 762) {
                return true;
            }
        }
    }
    return false;
}