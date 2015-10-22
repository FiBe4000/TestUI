#include "ActionTextObject.hpp"
#include "Engine.hpp"

ActionTextObject::ActionTextObject(ActionType action)
{
	this->action = action;
	std::cout << action << std::endl;
}

ActionTextObject::ActionTextObject(ActionType action, std::string text, float x, float y, sf::Color color, int size)
{
	this->action = action;
	this->text.setString(text);
	this->x = x;
	this->y = y;
	this->color = color;
	this->size = size;
	
	this->text.setPosition(this->x, this->y);
	this->text.setCharacterSize(this->size);
	this->text.setColor(this->color);
}

ActionTextObject::~ActionTextObject()
{
}

void ActionTextObject::setPosition(float x, float y)
{
}

void ActionTextObject::setColor(sf::Color color)
{
}

void ActionTextObject::draw()
{
	Engine::engine.App.draw(text);
}

