#include "BlackButton.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

BlackButton::BlackButton(SDL_Renderer* _renderer) {
    renderer = _renderer;
}

void BlackButton::Render() {
    SDL_Texture* tex = NULL;
    tex = IMG_LoadTexture(renderer, "./res/toolbar/BlackButton.png");
    if (tex == NULL) {
        printf("Unable to load image: %s\n", SDL_GetError());
        exit(1);
    }
    SDL_Rect dst;
    dst.x = 30;
    dst.y = 730;
    dst.w = 32;
    dst.h = 32;
    SDL_RenderCopy(renderer, tex, NULL, &dst);
}

bool BlackButton::ShouldChangeColor(SDL_Event* _event) {
    if (_event->type == SDL_MOUSEBUTTONDOWN) {
        if (_event->button.button == SDL_BUTTON_LEFT) {
            if (_event->button.x >= 30 && _event->button.x <= 62 && _event->button.y >= 730 && _event->button.y <= 762) {
                return true;
            }
        }
    }
    return false;
}