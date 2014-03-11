/*
 * Screen.h
 *
 * Declares the Screen class, which is responsible for handling screen output
 * by manipulating the terminal cursor and drawing to it.
 */

#ifndef SCREEN_H
#define SCREEN_H

#include <ncurses.h>

class Screen
{
public:
	Screen();
	~Screen();
	
	void update(void);
	void clear(void);
	
	void go(int x, int y);
	
	void put(const char c);
	void put(const char * str);
	void remove(void);
	
protected:
private:
	WINDOW * window;
	int width, height;
};

#endif // SCREEN_H
