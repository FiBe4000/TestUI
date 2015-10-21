#ifndef ENGINE_HPP_INCLUDED
#define ENGINE_HPP_INCLUDED

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include "State.hpp"

#define GAME_STATE 0
#define INTRO_STATE 1
#define MENU_STATE 2

class Engine
{
private:
    State* state;
	State* NewState;

    bool Running;
	bool changeState;
    
    sf::Clock frameClock;
	
	void Run();

public:
    static const int WINDOW_WIDTH=800;
    static const int WINDOW_HEIGHT=480;
    static const int TILE_HEIGHT=32;
    static const int TILE_WIDTH=32;
    
    static const double G = 10;

    Engine();
    ~Engine();

    static void Start();
    static void Stop();
    
    void ChangeState(State* newState);
	
	float GetFrameTime();
	
    State& GetState() { return *state; }
    
    sf::RenderWindow App;
	
    static Engine engine;
};

#endif // ENGINE_HPP_INCLUDED
