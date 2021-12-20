#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "EraserButton.h"

EraserButton::EraserButton(SDL_Renderer *_renderer) {
    renderer = _renderer;
}

void EraserButton::Render() {
    SDL_Texture* tex = NULL;
    tex = IMG_LoadTexture(renderer, "./res/toolbar/EraserButton.png");
    if (tex == NULL) {
        printf("Unable to load image: %s\n", SDL_GetError());
        exit(1);
    }
    SDL_Rect dst;
    dst.x = 1120;
    dst.y = 730;
    dst.w = 32;
    dst.h = 32;
    SDL_RenderCopy(renderer, tex, NULL, &dst);
    SDL_DestroyTexture(tex);
}

bool EraserButton::ShouldChangeColor(SDL_Event *event) {
    if (event->type == SDL_MOUSEBUTTONDOWN) {
        if (event->button.button == SDL_BUTTON_LEFT) {
            if (event->button.x >= 1120 && event->button.x <= 1120 + 32 && event->button.y >= 730 && event->button.y <= 760) {
                return true;
            }
        }
    }
    return false;
}