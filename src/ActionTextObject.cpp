#include "ActionTextObject.hpp"
#include "Engine.hpp"

ActionTextObject::ActionTextObject(ActionType action)
{
	this->action = action;
	std::cout << action << std::endl;
}

ActionTextObject::ActionTextObject(ActionType action, std::string text, float x, float y, sf::Color color, int size)
{
	if(!font.loadFromFile("data/ETHNOCEN.TTF"))
	{
		Engine::stop();
	}
	this->action = action;
	this->text.setString(text);
	this->text.setFont(font);
	this->text.setPosition(x, y);
	this->text.setCharacterSize(size);
	this->text.setColor(color);
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

