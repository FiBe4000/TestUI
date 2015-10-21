#ifndef MENUSTATE_HPP_INCLUDED
#define MENUSTATE_HPP_INCLUDED

#include "State.hpp"
#include "Menu.hpp"

class MenuState : public State
{
private:
    Menu StartMenu;

public:
    MenuState();
	virtual ~MenuState();

	void Process();
	void Update();
	void Render();
};

#endif //MENUSTATE_HPP_INCLUDED
