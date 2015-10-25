#include "MenuState.hpp"
#include "Engine.hpp"

MenuState::MenuState() : StartMenu("/home/fibe/Pictures/Wallpapers/ds2.jpg")
{
	ActionType action = SCRIPT;
	sf::Color color(255,255,255,255);
	static ActionTextObject ato(action, "data/scripts/test.sh", "Kodi", "data/ETHNOCEN.TTF", 100, Engine::WINDOW_HEIGHT/2, color, 35);
	static ActionTextObject ato2(action, "data/scripts/test.sh", "Steam", "data/ETHNOCEN.TTF", 300, Engine::WINDOW_HEIGHT/2, color, 35);
	static ActionTextObject ato3(action, "data/scripts/test.sh", "Games", "data/ETHNOCEN.TTF", 500, Engine::WINDOW_HEIGHT/2, color, 35);
	static ActionTextObject ato4(action, "data/scripts/shutdown.sh", "Exit", "data/ETHNOCEN.TTF", 500, Engine::WINDOW_HEIGHT/2, color, 35);
	
	ato.setBgImage("gfx/buttonBg.png");
	ato2.setBgImage("gfx/buttonBg.png");
	ato3.setBgImage("gfx/buttonBg.png");
	ato4.setBgImage("gfx/buttonBg.png");
	
	ato.background(false);
	ato2.background(false);
	ato3.background(false);
	ato4.background(false);
		
	StartMenu.addButtonRowBg("gfx/buttonRow.png", sf::Vector2f(0.f, 300.f));
	StartMenu.addObject(&ato);
	StartMenu.addObject(&ato2);
	StartMenu.addObject(&ato3);
	StartMenu.addObject(&ato4);
	
	StartMenu.setColorHighlight(true, sf::Color(0,128,255,255));
}

MenuState::~MenuState()
{
}

void MenuState::process()
{
	State::process();

	Engine::engine.App.pollEvent(event);
	
	static bool OldRightKeyDown = false;
    static bool OldLeftKeyDown = false;
    static bool OldReturnKeyDown = false;
	
    bool RightKeyDown = sf::Keyboard::isKeyPressed(sf::Keyboard::Right);
    bool LeftKeyDown = sf::Keyboard::isKeyPressed(sf::Keyboard::Left);
    bool ReturnKeyDown = sf::Keyboard::isKeyPressed(sf::Keyboard::Return);
    
    if(RightKeyDown && !OldRightKeyDown)
    {
        StartMenu.moveCursor(FORWARD);
    }
    if(LeftKeyDown && !OldLeftKeyDown)
    {
        StartMenu.moveCursor(BACKWARD);
    }
    if(ReturnKeyDown && !OldReturnKeyDown)
    {
        StartMenu.activate();
    }
    
	OldRightKeyDown = RightKeyDown;
    OldLeftKeyDown = LeftKeyDown;
    OldReturnKeyDown = ReturnKeyDown;
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
