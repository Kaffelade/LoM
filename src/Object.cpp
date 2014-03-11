/*
 * Legend of Maria
 *
 * Object.cpp
 *
 */

#include "Object.h"

Object::Object(char sprite, int x, int y)
{
    image = sprite;
	this->x = x;
    this->y = y; //note the difference - image from .cpp is sprite here
}

Object::~Object()
{
	// destructor
}

void Object::draw(Screen * screen)
{
    // put the cursor at position (x,y)
    screen->go(x, y);
    
    // write the character stored in 'image'
    screen->put(image);
}
