#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;

int main() {
	RenderWindow window(VideoMode(800,600), "BugGame");
	
	RectangleShape test;
	test.setSize(Vector2f(800,40));
	test.setFillColor(Color(255,40,200));
	
	Texture txt;
	txt.loadFromFile("char.png");
	
	int x,y;
	x = 400;
	y = 300;
	
	Sprite character;
	character.setTexture(txt);
	character.setPosition(x,y);
	
	while (window.isOpen()){
		Event e;
		window.clear();

		while (window.pollEvent(e)) {
			if (e.type == Event::Closed) window.close();
			
			if (e.type == Event::KeyPressed) {
				if (Keyboard::isKeyPressed(Keyboard::A)) {
					x -= 2;
				}
				if (Keyboard::isKeyPressed(Keyboard::D)) {
					x += 2;
				}
				
				character.setPosition(x, y);
			}
		}
		window.draw(test);
		window.draw(character);

		window.display();
	}
	return EXIT_SUCCESS;
}