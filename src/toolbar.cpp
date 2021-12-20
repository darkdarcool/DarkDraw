#include "toolbar.h"
#include "BlackButton.h"
#include <iostream>

ToolBar::ToolBar(SDL_Renderer *_renderer) {
    renderer = _renderer;
}

void ToolBar::Render() {
    // Render the toolbar
    SDL_Texture* tex = NULL;
    tex = IMG_LoadTexture(renderer, "./res/toolbar/toolbar.png");
    if (tex == NULL) {
        printf("Unable to load image: %s\n", SDL_GetError());
        std::exit(1);
    }
    SDL_Rect trect;
    trect.x = 0;
    trect.y = 700;
    trect.w = 1200;
    trect.h = 100;
    SDL_RenderCopy(renderer, tex, NULL, &trect);
    SDL_DestroyTexture(tex);
}