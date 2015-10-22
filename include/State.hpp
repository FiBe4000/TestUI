#ifndef STATE_HPP_INCLUDED
#define STATE_HPP_INCLUDED

#include <SFML/Graphics.hpp>
#include <string>

class State
{
private:
	bool GStateReq;
	bool IStateReq;
	bool MStateReq;

public:
    sf::Event event;

    State();
    virtual ~State();

    virtual void process();
    virtual void update();
    virtual void render();
    
    void reqStateChange(int state);
    
    virtual std::string p() { return "State"; }
};

#endif //STATE_HPP_INCLUDED
