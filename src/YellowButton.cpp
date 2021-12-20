#include "YellowButton.h"

YellowButton::YellowButton(SDL_Renderer* _renderer) {
    renderer = _renderer;
}

void YellowButton::Render() {
    SDL_Texture* tex = NULL;
    tex = IMG_LoadTexture(renderer, "./res/toolbar/YellowButton.png");
    if (tex == NULL) {
        printf("Unable to load image: %s\n", SDL_GetError());
        exit(1);
    }
    SDL_Rect dst;
    dst.x = 120;
    dst.y = 730;
    dst.w = 32;
    dst.h = 32;
    SDL_RenderCopy(renderer, tex, NULL, &dst);
    SDL_DestroyTexture(tex);
}

bool YellowButton::ShouldChangeColor(SDL_Event* _event) {
    if (_event->type == SDL_MOUSEBUTTONDOWN) {
        if (_event->button.button == SDL_BUTTON_LEFT) {
            if (_event->button.x >= 120 && _event->button.x <= 120 + 32 && _event->button.y >= 730 && _event->button.y <= 762) {
                return true;
            }
        }
    }
    return false;
}