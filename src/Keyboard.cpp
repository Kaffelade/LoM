/*
 * Keyboard.cpp
 *
 * Defines the Keyboard class methods.
 */

#include "Keyboard.h"

#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>
#include <ncurses.h>

Keyboard::Keyboard()
{
}

Keyboard::~Keyboard()
{
}

bool Keyboard::poll(int& c)
{
	if ( hit() ) {
		c = getch();
		return true;
	}
	return false;
}

int Keyboard::hit()
{
	struct timeval timeout;
	fd_set readfds;
	int how;
	
	FD_ZERO(&readfds);
	FD_SET(0, &readfds);
	
	timeout.tv_sec = 0L;
	timeout.tv_usec = 0L;
	
	how = select(1, &readfds, (fd_set *)NULL, (fd_set *)NULL, &timeout);
	
	if ( (how > 0) && FD_ISSET(0, &readfds) )
		return 1;
	else
		return 0;
}
