#ifndef ENGINE_HPP_INCLUDED
#define ENGINE_HPP_INCLUDED

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include "State.hpp"
#include "MenuState.hpp"

#define GAME_STATE 0
#define INTRO_STATE 1
#define MENU_STATE 2

class Engine
{
private:
    State* state;
	State* NewState;

    bool Running;
	bool ChangeState;
    
    sf::Clock frameClock;
	
	void run();

public:
    static const int WINDOW_WIDTH=800;
    static const int WINDOW_HEIGHT=480;
    static const int TILE_HEIGHT=32;
    static const int TILE_WIDTH=32;
    
    static const double G = 10;

    Engine();
    ~Engine();

    static void start();
    static void stop();
    
    void changeState(State* newState);
	
	float getFrameTime();
	
    State& getState() { return *state; }
    
    sf::RenderWindow App;
	
    static Engine engine;
};

#endif // ENGINE_HPP_INCLUDED
