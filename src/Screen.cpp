/*
 * Screen.cpp
 *
 * Defines the class methods of the Screen class.
 */

#include "Screen.h"

#include <ncurses.h>

Screen::Screen()
{
	// initialize the window
	window = initscr();
	noecho();
	curs_set(0);
	keypad(window, true);
	
	// get the windows properties
	getmaxyx(window, height, width);
}

Screen::~Screen()
{
	// clean up
	go(0, 0);
	clear();
	update();
	
	// release the window
	endwin();
}

void Screen::update()
{
	refresh();
}

void Screen::clear()
{
	erase();
}

void Screen::go(int x, int y)
{
	move(y, x);
}

void Screen::put(const char c)
{
	addch(c);
}

void Screen::put(const char * str)
{
	addstr(str);
}

void Screen::remove(void)
{
	addch(' ');
}

