/*
 * Legend of Maria
 *
 * Game.cpp
 *
 */

#include "Game.h"
#include <iostream>

Game::Game()
{
    running = true;
    std::cout << "Starting game ..." << std::endl;
    
    // create a test object
    testObject = new Object('@', 5, 8);
}

Game::~Game()
{
    std::cout << "YOU LOST - NO MERCY GIVEN!" << std::endl;
    
    // clean up memory we've used (any place where 'new' occurs)
    delete testObject;
}

void Game::update()
{
    // if we hit a key, set running to false
    if ( keys.hit() )
        running = false;
    
    // draw the test object
    testObject->draw(&screen);
    
    // update the screen
    screen.update();
}

bool Game::isRunning()
{
    return running;
}
