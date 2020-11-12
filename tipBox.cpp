//##########################################################################################
//tipbox.cpp

#include <iostream>
using namespace std;

int main()
{
    string input;
    cin >> input;
    if (input == "help" || input == "Help" || input == "HELP")
    {
        cout << "Useful commands: " << endl;   
        cout << "\nThe \'INFO\' command prints information which might give some idea of what the game is about." << endl;   
        cout << "The \'INVENTORY\' command lists the objects in your possession." << endl;   
        cout << "The \'LOOK\' command prints a description of your surroundings." << endl;  
        cout << "The \'SCORE\' command prints your current score and ranking." << endl;  
        cout << "The \'DIAGNOSE\' command reports on your injuries, if any.\n" << endl;   

       string command; 
       cin >> command;
       if (command == "INFO" || command == "info" || command == "Info")
       {
             cout << "\nYour aim is to survive. You are in a room, which contains some items that would be useful to acquire. To increase your score, you must survive through them.\n" << endl;   
             cout << "In addition,  you may need sources of weapons and armor, since you will have to deal with some enemies wandering around. Reading material is scattered around the room as well;  some of it can be useful.\n" << endl;   
             cout << "The game will be over only when you die.\n" << endl;       
       }    
       else if (command == "INVENTORY" || command == "inventory" || command == "Inventory")
       {
             //access inventory;
             //cout << "You have" << Item << "saved." << endl;
       }
       else if (command == "LOOK" || command == "look" || command == "Look")
       {
             // show room name and description
       }
       else if (command == "SCORE" || command == "score" || command == "Score")
       {
             cout << "Your score is  + X + ." << endl;
       }
       else if (command == "DIAGNOSE" || command == "diagnose" || command == "Diagnose")
       {
             // show healthPoints
       }
       else 
       {
            cout << "That is not a valid option." << endl;
       }
    }
    return 0;
}

//##########################################################################################











/*else if (command == "QUIT" || "quit" || "Quit")
            {
             cout << "Are you sure you want to quit" << endl;
             string quit;
             cin>>quit;
             if ( quit == "YES" || "yes" || "y" || "Y" || "yeah" || "YEAH" ) 
             {
                 cout << " " << endl;
             }
             else if ( quit == "NO" || "N" || "No" || "no" )
             {
                 labs;
             }
             } */

