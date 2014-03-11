/* Dette er en main-fil */

#include "Game.h"

int main(int argc, const char * argv[])
{
    Game myGame;

    while ( myGame.isRunning() )
    {
        myGame.update();        
    }

    return 0;
}

