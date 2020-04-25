#ifndef GAME_H
#define GAME_H

#include"Character.h"
#include"functions.h"
#include<ctime>
#include<vector>
#include<fstream>

using namespace std;

class Game
{
public:
	Game();
	virtual ~Game();

	// Operators

	// Functions
	void mainMenu();
	void initGame();
	void createNewCharacter();
	void saveCharacters();
	void loadCharacters();

	// Accessors
	inline bool getPlaying() const { return this->playing; }


	// Modifiers
	

private:
	int choice;
	bool playing;

	// Character Related
	int activeCharacter;
	std::vector <Character> characters;
	std::string fileName;
};
#endif