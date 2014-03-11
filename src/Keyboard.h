/*
 * Keyboard.h
 *
 * Declares the Keyboard class, which is responsible for handling keyboard
 * input.
 * */

#ifndef KEYBOARD_H
#define KEYBOARD_H

typedef enum {
	KBD_UP			= 259,
	KBD_DOWN		= 258,
	KBD_LEFT		= 260,
	KBD_RIGHT		= 261,
	KBD_SPACE		= 32,
} Key;

class Keyboard
{
public:
	Keyboard();
	virtual ~Keyboard();
	
	int hit(void); // registers if keyboard's been hit
	bool poll(int& c); // puts keycode into pointer c
	
protected:
private:
	char key;
};

#endif // KEYBOARD_H
