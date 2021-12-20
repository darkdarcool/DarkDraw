#include <SDL2/SDL.h>
#include "eventHandler.h"
#include "draw.h"

EventHandler::EventHandler(SDL_Event _event) {
  event = _event;

}

void EventHandler::HandleEvent(SDL_Renderer* renderer, Draw draw) {
    /*
    if (event.type == SDL_MOUSEBUTTONDOWN) {
        Circle cir = draw.DrawCircle(event.button.x, event.button.y, 10);
        circles.push_back(cir);
    }
     */
    if (event.type == SDL_MOUSEBUTTONDOWN) canDraw = true;
    if (canDraw) {
        Circle cir = draw.DrawCircle(event.button.x, event.button.y, size, std::string(color));
        circles.push_back(cir);
    }
    for (auto& circle : circles) {
        draw.DrawCircle(circle.rect.x, circle.rect.y, circle.s, std::string(circle.color));
    }
    if (event.type == SDL_MOUSEBUTTONUP) canDraw = false;
}

void EventHandler::UpdateEvent(SDL_Event _event) {
  event = _event;
}

void EventHandler::Reset() {
    circles.clear();
}