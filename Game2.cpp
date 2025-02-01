#include "GameEngine.h"

int main(int argc, char* argv[])
{
	/*
	sf::Font font;
	if (!font.loadFromFile("arial.ttf"))
	{
		std::cerr << "Could not load font" << std::endl;
	}
	else
	{
		std::cout << "Successfully Loaded the font" << std::endl;
	}
	sf::Texture texture;
	if (!texture.loadFromFile("block.jpg"))
	{
		std::cerr << "Could not load texture" << std::endl;
	}
	else
	{
		std::cout << "Successfully Loaded the texture" << std::endl;
	}
	*/
	std::shared_ptr<GameEngine> game = std::make_shared<GameEngine>();
	game->run(game);

	return 0;
}