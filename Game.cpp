#include <iostream>
#include <string>
#include "Game.h"

Game::Game()
{
    choice = 0;
    playing = true; 
}

Game::~Game()
{
    
}

void mainMenu();
{
    cout << "MAIN MENU" << endl; 
    cout << "0: Quit" << endl;
    cout << "1: Inventory" << endl; 
    
    cout << endl << "choice: ";
    cin >> choice;
   
   switch (choice)
   {
       case 0:
           playing = false;
         break;
       default:
           break;
           
   }
}