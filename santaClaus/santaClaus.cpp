#include <iostream>
#include "stdafx.h"
#include <SFML/Graphics.hpp>


using namespace std;
using namespace sf;

class Ded {
public:
	int BeardLenght;
	int collor;
	Texture ded_texture;
	Sprite ded_sprite;

	Ded() {
		BeardLenght = 1;
		collor = 1;
		ded_texture.loadFromFile("img/santa.png");
		ded_sprite.setTexture(ded_texture);
		ded_sprite.setTextureRect(IntRect(0,0,200,200));
		ded_sprite.setPosition(30, 30);
	}
};

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 900), "Santa");
	//int a, b;

	//cout << "Type in beard lengs(1-9: ";
	//cin >> a;
	//cout << "Type in beard collor(RED-1, GREEN-2, BLUE-3): ";
	//cin >> b;
	

	while (window.isOpen())
	{
		sf::Event event;
		Ded ded;

		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(ded.ded_sprite);
		window.display();
	}

	return 0;
}