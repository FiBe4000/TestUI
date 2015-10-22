#include "MenuState.hpp"
#include "Engine.hpp"

MenuState::MenuState() : StartMenu("gfx/kanin.png")
{
	ActionType action = SCRIPT;
	sf::Color color(255,255,255,155);
	StartMenu.addObject(new ActionTextObject(action, "Test", Engine::WINDOW_WIDTH/2, Engine::WINDOW_HEIGHT/2, color, 100));
}

MenuState::~MenuState()
{
}

void MenuState::process()
{
	State::process();
}

void MenuState::update()
{
	State::update();
}

void MenuState::render()
{
	State::render();
	
	StartMenu.render();
	Engine::engine.App.display();
}
