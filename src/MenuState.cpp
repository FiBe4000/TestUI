#include "MenuState.hpp"
#include "Engine.hpp"

MenuState::MenuState() : StartMenu("gfx/kanin.png")
{
	ActionType action = SCRIPT;
	sf::Color color(255,255,255,155);
	static ActionTextObject ato(action, "Test", Engine::WINDOW_WIDTH/2, Engine::WINDOW_HEIGHT/2, sf::Color::Red, 40);
	static ActionTextObject ato2(action, "Test", 100, 100, sf::Color::Red, 40);
	StartMenu.addObject(&ato);
	StartMenu.addObject(&ato2);
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
