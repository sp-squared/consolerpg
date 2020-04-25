#include "Game.h"


Game::Game()
{
	choice = 0;
	playing = true;
	activeCharacter = 0;
	fileName = "characters.txt";
}

Game::~Game()
{
}

// Functions

void Game::initGame()
{
	createNewCharacter();

}


void Game::mainMenu()
{
	// Menu Options
	std::cout << "MAIN MENU" << std::endl;
	std::cout << "0: Quit" << std::endl;
	std::cout << "1: Travel" << std::endl;
	std::cout << "2: Shop" << std::endl;
	std::cout << "3: Level Up" << std::endl;
	std::cout << "4: Rest" << std::endl;
	std::cout << "5: Character Sheet" << std::endl;
	std::cout << "6: Create New Character" << std::endl;
	std::cout << "7: Save Characters" << std::endl;
	std::cout << "8: Load Characters" << std::endl;
	std::cout << std::endl;

	std::cout << std::endl << "Choice: ";
	std::cin >> choice;
	std::cout << std::endl;

	switch (choice)
	{
	case 0:
		playing = false;
		break;

	case 5:
		characters[activeCharacter].printStats();
		break;

	case 6:
		std::cin.ignore();
		createNewCharacter();
		saveCharacters();

		break;

	case 7:
		saveCharacters();
		break;
	case 8:
		loadCharacters();
		break;
	default:
		break;

	}
}

void Game::createNewCharacter()
{	
	std::string name= "";
	std::cout << "Enter name for character: ";
	std::getline(std::cin, name);
	//std::cin.ignore();

	characters.push_back(Character());
	activeCharacter = characters.size() - 1;
	characters[activeCharacter].initialize(name);



}

void Game::saveCharacters()
{
	std::ofstream outfile(fileName);
	if (outfile.is_open())
	{
		for (size_t i = 0; i < characters.size(); i++)
		{
			outfile << characters[i].getAsString() << "\n";
		}

	}

	outfile.close();

}


void Game::loadCharacters()
{

}