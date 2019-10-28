 #include <iostream>
#include <SFML/Graphics.hpp>
#include "Random.h"
#include "Math.h"
#include "AssetManager.h"
using namespace sf;

int main() {
	RenderWindow window({ 600, 600 }, "Percents", Style::Close | Style::Titlebar);
	RectangleShape percent1({ 200.f, 50.f }), percent2({ 200.5, 50.f });
	Text p1Text("0%", AssetManager::get().getFont(FontNames::Fonts::TIMES_ROMAN_NUMERAL), 20), p2Text(p1Text);
	Random rand;

	percent1.setFillColor(Color::Green);
	percent2.setFillColor(Color::Red);

	percent1.setPosition({ 100, 300 });
	percent2.setPosition({ 100, 400 });
	p1Text.setPosition(percent1.getSize().x + percent1.getPosition().x + 20, percent1.getPosition().y);
	p2Text.setPosition(percent2.getSize().x + percent2.getPosition().x + 20, percent2.getPosition().y);

	int totalVotes = 4, votes1 = 2, votes2 = 2;
	float percentForBar1 = 0, percentForBar2 = 0, newPercentx1 = 0, newPercentx2 = 0;
	while (window.isOpen()) {
		Event e;
		while (window.pollEvent(e)) {
			if (e.type == Event::Closed)
				window.close();
			else if (e.type == Event::KeyPressed and e.key.code == Keyboard::A) {
				votes1++;
				totalVotes++;
				std::cout << "new size for percent 1 bar: " << newPercentx1 << "\n";
			}
				
			else if (e.type == Event::KeyPressed and e.key.code == Keyboard::S) {
				votes2++;
				totalVotes++;
				std::cout << "new size for percent 2 bar: " << newPercentx2 << "\n";
			}
				
		}



		//(rand.getIntInRange(0, 100) < 20) ? votes1++ : votes2++;
		

		percentForBar1 = (votes1 / (float)totalVotes) * 100;
		percentForBar2 = (votes2 / (float)totalVotes) * 100;
		
		newPercentx1 = mapper(percentForBar1, 0.f, 100.f, 0.f, percent1.getSize().x);
		newPercentx2 = mapper(percentForBar2, 0.f, 100.f, 0.f, percent2.getSize().x);

		//std::cout << "votes1: " << votes1 << "total votes: " << totalVotes << "\n";
		//percent1.setSize({ newPercentx1, percent1.getSize().y });
		//percent2.setSize({ newPercentx2, percent2.getSize().y });

		p1Text.setString(std::to_string(percentForBar1) + "%");
		p2Text.setString(std::to_string(percentForBar2) + "%");

		window.clear();
		window.draw(percent1);
		window.draw(percent2);
		window.draw(p1Text);
		window.draw(p2Text);
		window.display();
	}
}