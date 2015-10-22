#include "Menu.hpp"
#include"Engine.hpp"

Menu::Menu()
{
	if(!bgTexture.loadFromFile("gfx/kanin.png"))
	{
		Engine::stop();
	}
	bgSprite.setTexture(bgTexture);
}


Menu::Menu(std::string bgPath)
{
	if(!bgTexture.loadFromFile(bgPath))
	{
		Engine::stop();
	}
	bgSprite.setTexture(bgTexture);
}

Menu::~Menu()
{
	for(int i=0; i<menuObjects.size(); i++)
	{
		delete menuObjects.at(i);
	}
}

void Menu::addObject(MenuObject* obj)
{
	menuObjects.push_back(obj);
}

void Menu::render()
{
	//Engine::engine.App.draw(bgSprite);
	for(int i=0; i<menuObjects.size(); i++)
	{
		menuObjects.at(i)->draw();
	}
}

