#include "State.hpp"
#include "Engine.hpp"

State::State() : GStateReq(false), IStateReq(false), MStateReq(false)
{
}

State::~State()
{
}

void State::process()
{	
    Engine::engine.App.pollEvent(event);
	
	static bool OldEscKeyDown = false;
	
    bool EscKeyDown = sf::Keyboard::isKeyPressed(sf::Keyboard::Escape);
    
    if(event.type == sf::Event::Closed)
    {
        Engine::stop();
    }
    if(EscKeyDown && !OldEscKeyDown)
    {
        Engine::stop();
    }
    
	OldEscKeyDown = EscKeyDown;
}

void State::update()
{
}

void State::render()
{
    Engine::engine.App.clear();
}

void State::reqStateChange(int state)
{
	switch(state)
	{
		case GAME_STATE:
			GStateReq = true;
		break;
		
		case INTRO_STATE:
			IStateReq = true;
		break;
		
		case MENU_STATE:
			MStateReq = true;
		break;	
	}
}

