/*
 * Legend of Maria
 *
 * Object.h
 *
 */

#ifndef OBJECT_H
#define OBJECT_H

#include "Screen.h"

class Object
{
public:
	Object(char image, int x, int y);
	~Object();

    void draw(Screen * screen);

protected:
    int x, y; // position of image
    char image; // ASCII character

private:
};

#endif // OBJECT_H

