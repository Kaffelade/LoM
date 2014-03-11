/*
 * Legend of Maria
 *
 * Game.h
 *
 */

#ifndef GAME_H
#define GAME_H

#include "Screen.h"
#include "Keyboard.h"
#include "Object.h"

class Game
{
public:
	Game();
	~Game();
    
    bool isRunning();
    void update();

protected:
private:
    bool running; // if true then game is running, otherwise we need to quit
    
    Screen screen; // gives access to manipulate the terminal
    Keyboard keys; // gives access to keyboard input
    
    Object * testObject; // temporary
};

#endif // GAME_H

