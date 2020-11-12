#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include "Game.h"

using namespace std;

class Game 
{
public:
Game();
virtual ~Game();

void Mainmenu();

inline bool getPlaying() const { return this->playing; }

private:
int choice;
bool playing;
}