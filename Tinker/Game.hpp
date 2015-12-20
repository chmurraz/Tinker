#include <SFML/Graphics.hpp>
#include "TextureHolder.hpp"

class Game
{
private:
	bool mIsMovingUp, mIsMovingDown, mIsMovingLeft, mIsMovingRight;
	float PlayerSpeed = 50.f;
	sf::Time TimePerFrame = sf::seconds(1.f / 60.f);
	void processEvents();
	void update(sf::Time deltaTime);
	void render();
	void handlePlayerInput(sf::Keyboard::Key key, bool isPressed);
private:
	sf::RenderWindow mWindow;
	TextureHolder textures;
	sf::Sprite playerPlane;
public:
	Game();
	void run();
};