#include "Size30Button.h"

Size30Button::Size30Button(SDL_Renderer* _renderer) {
    renderer = _renderer;
}

void Size30Button::Render() {
    SDL_Texture* tex = NULL;
    tex = IMG_LoadTexture(renderer, "./res/toolbar/size30.png");
    if (tex == NULL) {
        printf("Unable to load image: %s\n", SDL_GetError());
        exit(1);
    }
    SDL_Rect dst;
    int x = 500;
    dst.x = x;
    dst.y = 730;
    dst.w = 32;
    dst.h = 32;
    SDL_RenderCopy(renderer, tex, NULL, &dst);
    SDL_DestroyTexture(tex);
}

bool Size30Button::ShouldChangeSize(SDL_Event* _event) {
    int x = 500;
    if (_event->type == SDL_MOUSEBUTTONDOWN) {
        if (_event->button.button == SDL_BUTTON_LEFT) {
            if (_event->button.x >= x && _event->button.x <= x + 32 && _event->button.y >= 730 && _event->button.y <= 762) {
                return true;
            }
        }
    }
    return false;
}