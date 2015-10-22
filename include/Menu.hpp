#ifndef MENU_HPP_INCLUDED
#define MENU_HPP_INCLUDED

#include <SFML/Graphics.hpp>
#include <vector>
#include <string>
#include <iostream>
#include "ActionType.hpp"
#include "MenuObject.hpp"

class Menu
{
private:
    std::vector<MenuObject*> menuObjects;
	
	sf::Sprite renderingSprite;
	sf::Sprite bgSprite;
	
	sf::Texture bgTexture;
	sf::Font font;
	
public:
	Menu();
	Menu(std::string bgPath);
	virtual ~Menu();
	
	void addObject(MenuObject* obj);
	void render();
};

#endif //MENU_H_INCLUDED
