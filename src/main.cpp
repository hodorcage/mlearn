#include <SFML/Graphics.hpp>

const int SW = 800;
const int SH = 600;
const sf::Color QWHITE = sf::Color(200, 200, 200);

int main()
{
	sf::RenderWindow window(sf::VideoMode(SW, SH), "SFML works!");
	
	sf::Vertex line[] = {
		sf::Vertex(sf::Vector2f(SW/2, 0), QWHITE),
		sf::Vertex(sf::Vector2f(SW/2, SH), QWHITE),
	};
	
	sf::Font font;
	font.loadFromFile("fonts/opensans/OpenSans-Regular.ttf");
	sf::Text text;
	text.setFont(font);
	text.setString("JS Bach - French Suite No. 2, I. Allemande");
	text.setCharacterSize(20);
	text.setColor(QWHITE);
	text.setPosition(10, 10);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear(sf::Color(25, 25, 25));
		window.draw(line, 2, sf::Lines);
		window.draw(text);
		window.display();
	}

	return 0;
}
