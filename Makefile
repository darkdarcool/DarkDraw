all:
	g++ -w src/main.cpp -w src/game.cpp -w src/eventHandler.cpp -w src/draw.cpp -w src/toolbar.cpp -w src/BlackButton.cpp -w src/BlueButton.cpp -w src/TrashButton.cpp -w src/RedButton.cpp -w src/YellowButton.cpp -w src/EraserButton.cpp -w src/Size30Button.cpp -w src/Size20Button.cpp src/Size10Button.cpp -o main -Wall -lSDL2 -lSDL2_ttf -lSDL2_image -I include
clean:
	rm ./main