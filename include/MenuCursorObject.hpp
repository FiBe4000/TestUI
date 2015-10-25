#ifndef MENUCURSOROBJECT_HPP_INCLUDED
#define MENUCURSOROBJECT_HPP_INCLUDED

#include <SFML/Graphics.hpp>
#include "MenuObject.hpp"

class MenuCursorObject : public MenuObject
{
private:
	static const float offset = 7.5f;
	sf::Texture bgTex;
	sf::Sprite imSprite;
	sf::Color color;
	
public:
	MenuCursorObject(std::string imPath);
	virtual ~MenuCursorObject();
	
	sf::FloatRect getSizeRect() { return imSprite.getLocalBounds(); }
	sf::Vector2f getPosition() { return imSprite.getPosition(); }
	sf::Color getColor() { return imSprite.getColor(); }
	
	void setSizeFromObject(sf::FloatRect objSize);
	void setPosition(sf::Vector2f pos);
	void setColor(sf::Color color);
	void activate() {;}
	void draw();
};

#endif //MENUCURSOROBJECT_HPP_INCLUDED
