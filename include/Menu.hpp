#ifndef MENU_HPP_INCLUDED
#define MENU_HPP_INCLUDED

#include <SFML/Graphics.hpp>
#include <vector>
#include <string>
#include <iostream>
//#include "MenuObject.h"

class Menu
{
private:
    //std::vector<MenuObject> MenuObjects;
	sf::Sprite renderingSprite;
	sf::Font font;
	
public:
	Menu();
	virtual ~Menu();

	void AddImage(std::string imName, int x, int y);
	void AddText(std::string txt, int txtSize, int x, int y);
	void SetTextColor(int c1, int c2, int c3);
	void Render();
};

#endif //MENU_H_INCLUDED
