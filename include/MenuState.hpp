#ifndef MENUSTATE_HPP_INCLUDED
#define MENUSTATE_HPP_INCLUDED

#include "State.hpp"
#include "Menu.hpp"
#include "MenuObject.hpp"
#include "ActionTextObject.hpp"

class MenuState : public State
{
private:
    Menu StartMenu;

public:
    MenuState();
	virtual ~MenuState();

	void process();
	void update();
	void render();
};

#endif //MENUSTATE_HPP_INCLUDED
