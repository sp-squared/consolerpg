#include <iostream>
#include "Game.h"
#include "functions.h"
using namespace std;

int main()
{
	// Demonstrates working type casting of INT for LEVEL
	//int level = 4;
	//int i = static_cast<int>((50 / 3) * ((pow(level, 3) - 6 * pow(level, 2)) + 17 * level - 12));
	//std::cout << i << std::endl;
	
	Game game;
	game.initGame();

	while (game.getPlaying())
	{
		game.mainMenu();
	}
	return 0;
}