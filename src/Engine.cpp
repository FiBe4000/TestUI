#include "Engine.hpp"
#include <iostream>
#include <vector>

Engine Engine::engine;

Engine::Engine()
{
    App.create(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT, 32), "ConsoleUI");//, sf::Style::Fullscreen);
    App.setFramerateLimit(60);
    App.setVerticalSyncEnabled(true);
    //App.ShowMouseCursor(false);
    //App.SetSize(WINDOW_WIDTH*2, WINDOW_HEIGHT*2);
	state = new MenuState();
    ChangeState = false;
    std::cerr << "Window set up" << std::endl;
}

Engine::~Engine()
{
    delete state;
}

void Engine::start()
{
    engine.run();
}

void Engine::run()
{
    Running=true;
    std::cerr << "Running main loop" << std::endl;
    while(engine.Running)
    {
    	frameClock.restart();
    	
        if(ChangeState)
        {
        	std::cerr << "Deleting " << state->p() << std::endl;
            delete state;
            state=NewState;
            ChangeState=false;
        }

        state->process();
        state->update();
        state->render();
    }
}

void Engine::stop()
{
    engine.Running=false;
}

void Engine::changeState(State* newState)
{
    ChangeState=true;
    NewState=newState;
}

float Engine::getFrameTime()
{
	return frameClock.getElapsedTime().asSeconds();
}

