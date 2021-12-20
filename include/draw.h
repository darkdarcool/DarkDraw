#ifndef DRAW_H
#define DRAW_H

#include <SDL2/SDL.h>
#include <iostream>
#include <SDL2/SDL_image.h>
#include <vector>

struct Circle {
    SDL_Rect rect;
    std::string color;
    int s;
};

class Draw {
public:
    SDL_Renderer* renderer;
    explicit Draw(SDL_Renderer* _renderer);
    Circle DrawCircle(int x, int y, int size, std::string color);
};

#endif 
