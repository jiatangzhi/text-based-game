#include <iostream>
#include <ctime>

using namespace std;


/*class Map{
    private:   //Attributes
            string Direction;
    public:     //Methods
        Map();    //Constructor
        void setDirection(string) {}
};

Map::Map(){
}

//setting values to the attributes
void Map::setMap (string _Direction) 
{
    Direction = _Direction
}
        
string Map::getDirection()
{
    return Direction
}*/
    
int main()
{
    
    clock_t start, now;
    
    start = clock();
    now = clock();
   
    cout << "\nWelcome to spyAdventure!" << endl;
    cout << "" << endl;
    
    while((now - start)/CLOCKS_PER_SEC < 1.0f) // 1.0f because pausing for 1 second
    {
        now = clock();
    }
    
    Room room1;
    room1.createRoom();
    Room room2;
    room2.createSecondRoom();
    Dungeon myDungeon;
    myDungeon.rooms.push_back(room1);
    myDungeon.rooms.push_back(room2);
    myDungeon.currentRoom = 0; 
    
    string name;
    cout << "Your name Please: " << endl;
    cin >> name;
    cout << "\n Good luck " << name << endl;
    
    string direction;
    cout << "\n Which direction would you like to go?: " << endl;
    cout << "  - North." << endl;
    cout << "  - East." << endl;
    cout << "  - South." << endl;
    cout << "  - West." << endl;
    cout << " " << endl;
    cin >> direction;
    
        if ( direction == "North" || direction == "N" || direction == "north" || direction == "n" )
        {
            cout << "\nYou have just entered into room X." << endl;
        }
        else if ( direction == "East" || direction == "E" || direction == "east" || direction == "e" )
        {
            cout << "\nYou have just entered into room X." << endl;
        }
        else if ( direction == "South" || direction == "S" || direction == "south" || direction == "s" )
        {
            cout << "\nYYou have just entered into room X." << endl;
        }
        else if ( direction == "West" || direction == "W" || direction == "west" || direction == "w" )
        {
            cout << "\nYou have just entered into room X." << endl;
        }
        else
        {
            cout << "\nI cannot recognize that direction." << endl;
        }    

    return 0;
}


