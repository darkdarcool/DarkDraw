#include "draw.h"

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <vector>

 Draw::Draw(SDL_Renderer* _renderer) {
    renderer = _renderer;
}

Circle Draw::DrawCircle(int x, int y, int size, std::string color) {
    // Render current circle
    SDL_Texture* tex = NULL;
    tex = IMG_LoadTexture(renderer, std::string(std::string("./res/colors/") + color + std::string(".png")).c_str());
    if (tex == NULL) {
        printf("Unable to load image: %s\n", SDL_GetError());
        std::exit(1);
    }
    SDL_Rect rect = {x, y, size, size};
    SDL_RenderCopy(renderer, tex, NULL, &rect);
    SDL_DestroyTexture(tex);
    Circle ballPoint = {rect, color, size};
    return ballPoint;
}
