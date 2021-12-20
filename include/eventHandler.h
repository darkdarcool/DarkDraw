#ifndef EVENT_H
#define EVENT_H

#include <SDL2/SDL.h>
#include <iostream>
#include <SDL2/SDL_ttf.h>
#include "draw.h"
#include <vector>


class EventHandler {
public:
    std::string color = "black";
    int size = 10;
    SDL_Event event;
    std::vector<Circle> circles;
    bool canDraw = false;

    explicit EventHandler(SDL_Event _event);
    void HandleEvent(SDL_Renderer* renderer, Draw draw);
    void UpdateEvent(SDL_Event _event);
    void Reset();
};

#endif