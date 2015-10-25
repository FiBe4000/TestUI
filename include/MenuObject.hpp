#ifndef MENUOBJECT_HPP_INCLUDED
#define MENUOBJECT_HPP_INCLUDED

#include <SFML/Graphics.hpp>
#include <iostream>

class MenuObject
{
private:

protected:
	float x;
	float y;
	sf::Color color;

public:
	MenuObject();
	virtual ~MenuObject();
	
	virtual sf::FloatRect getSizeRect() {;}
	virtual sf::Vector2f getPosition() {;}
	virtual sf::Color getColor() {;}
	
	virtual void setColor(sf::Color color) {;}
	virtual void setPosition(float x, float y) { this->x = x; this->y = y; }
	virtual void activate() {;}
	virtual void draw() {;}
};

#endif //MENUOBJECT_HPP_INCLUDED
