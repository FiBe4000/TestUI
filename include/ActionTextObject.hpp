#ifndef ACTIONTEXTOBJECT_HPP_INCLUDED
#define ACTIONTEXTOBJECT_HPP_INCLUDED

#include "MenuObject.hpp"
#include "ActionType.hpp"
#include <iostream>

class ActionTextObject : public MenuObject
{
private:
	ActionType action;
	sf::Text text;
	sf::Font font;
	int size;
	
public:
	ActionTextObject(ActionType action);
	ActionTextObject(ActionType action, std::string text, float x, float y, sf::Color color, int size);
	virtual ~ActionTextObject();
	
	void setPosition(float x, float y);
	void setColor(sf::Color color);
	void setSize(int size);
	void draw();
};

#endif //ACTIONTEXTOBJECT_HPP_INCLUDED

