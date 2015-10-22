#ifndef MENUOBJECT_HPP_INCLUDED
#define MENUOBJECT_HPP_INCLUDED

#include <SFML/Graphics.hpp>

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
	
	virtual void draw() {}
};

#endif //MENUOBJECT_HPP_INCLUDED
