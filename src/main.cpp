#include "game.h"
#include "eventHandler.h"
#include "draw.h"
#include "toolbar.h"
#include "BlackButton.h"
#include "BlueButton.h"
#include "TrashButton.h"
#include "RedButton.h"
#include "YellowButton.h"
#include "EraserButton.h"

int main() {
    Game game(1200, 800, "AmeliaDraw");
    SDL_Event event;
    // Important classes

    Draw draw(game.renderer);
    ToolBar toolbar(game.renderer);
    BlackButton blackButton(game.renderer);
    BlueButton blueButton(game.renderer);
    TrashButton trashButton(game.renderer);
    RedButton redButton(game.renderer);
    YellowButton yellowButton(game.renderer);
    EraserButton eraserButton(game.renderer);

    // End of important classes

    bool quit = false;
    game.Clear();
    EventHandler eventHandler(event);
    while (!quit) {
        if (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                quit = true;
            }
        }
        game.Clear();
        eventHandler.HandleEvent(game.renderer, draw);
        toolbar.Render();
        blackButton.Render();
        blueButton.Render();
        trashButton.Render();
        redButton.Render();
        yellowButton.Render();
        eraserButton.Render();

        if (blackButton.ShouldChangeColor(&event)) {
            eventHandler.color = "black";
        }
        if (blueButton.ShouldChangeColor(&event)) {
            eventHandler.color = "blue";
        }
        if (redButton.ShouldChangeColor(&event)) {
            eventHandler.color = "red";
        }
        if (yellowButton.ShouldChangeColor(&event)) {
            eventHandler.color = "yellow";
        }
        if (eraserButton.ShouldChangeColor(&event)) {
            eventHandler.color = "white"; // White is the background color so it simulates erasing
        }
        if (trashButton.ShouldDelete(&event)) {
            eventHandler.Reset();
        }

        SDL_RenderPresent(game.renderer);
        eventHandler.UpdateEvent(event);
    }
}