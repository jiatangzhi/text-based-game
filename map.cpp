randomMonsterName.h
#include <iostream> 
#include <string>
#include <vector>
using namespace std; 

/*class Item {
public:

    string name;
    
};

class Rifle : public Item {
public:
    
    int dps = 6;
    // Properties of a rifle
    
};


*/









class HealthPotion : public Item {
public:
    //int healthRegen = 10;
    int Decision, HP, MaxHP;
    cout << "Would you like to take this potion?" << endl;
    cout << "(1 = Yes, 2 = No) ";
    cin >> Decision;
    
    HP = 0
    MaxHP = 50;


    if(Decision == 1)
    {    
         if(POTION1 == 0)
         {
              POTION1 = 1;
              PotionItem1 = 1;
              Potion1();
         }
         else if(POTION2 == 0)
         {
              POTION2 = 1;
              PotionItem2 = 1;
              Potion2();
         }
         else if(POTION3 == 0)
         {
              POTION3 = 1;
              PotionItem3 = 1;
              Potion3();
         }
         
        
        (POTION1 > 0)
          {
               cout << "Potion: " << PotionName1 << endl << endl;
               cout << "Health: +" << PotionHP1 << endl;
          }
          if(POTION2 > 0)
          {
               cout << "Potion: " << PotionName2 << endl << endl;
               cout << "Health: +" << PotionHP2 << endl;
          }
          if(POTION3 > 0)
          {
               cout << "Potion: " << PotionName3 << endl << endl;
               cout << "Health: +" << PotionHP3 << endl;
          }
          
          
        
          if(POTION1 > 0)
          {
               cout << "Would you like to use a potion?" << endl;
               cout << "(1 = Yes, 2 = No) ";
               
               int UsePotion;
               
               cin >> UsePotion;           
               else if(POTION3 >=1 && UsePotion == 1)
               {
                    HP = HP + PotionHP3;
                    cout << "Health increased by: " << PotionHP1 << endl;
                    PotionItem3 = 0;
                    Potion3();
                    if(HP > MaxHP)
                    {
                         HP = MaxHP;
                    }
               }
               else if(POTION2 >=1 && UsePotion == 1)
               {
                    HP = HP + PotionHP2;
                    cout << "Health increased by: " << PotionHP1 << endl;
                    PotionItem2 = 0;
                    Potion2();
                    if(HP > MaxHP)
                    {
                         HP = MaxHP;
                    }
               }
               else if(POTION1 >=1 && UsePotion == 1)
               {
                    HP = HP + PotionHP1;
                    cout << "Health increased by: " << PotionHP1 << endl;
                    PotionItem1 = 0;
                    Potion1();
                    if(HP > MaxHP)
                    {
                         HP = MaxHP;
                    }
               }
          }
        
        else if (Decision == 2)
        {
            cout << "You have just left the potion" << endl;
        }
        
        else
        {
            cout << "What do you mean?" << endl;
        }
};


    
   


class Entity {
public:
    string name;
    int health;
    
    Entity(string N, int h): name(N), health(h) {}
    
    virtual void print(void) {}
};

class Monster : public Entity 
{
public:
    int dps;
    
    Monster(int d, string N, int h) : dps(d), Entity(N, h) {}
    
    void print(void) { 
        std::cout << "You have just encountered with a " << name << std::endl;
        std::cout << "Health: " << health << ":       damage/sec: " << dps << std::endl; 
        }
};


class Enemies
{
public:
    
    int maxSize = 5;
    vector<Entity*> entities;
    
    void addEntity(Entity* newEntity)
    {
       if(entities.size() < maxSize)
       {
         entities.push_back(newEntity);
       }
       else
       {
           std::cout << "." << std::endl;
        }
    };	
}; 
    
        
    
    

class QuestGiver : public Entity {
public:
    
    //Properties of quest giver - quest logic
    
};


class spyPlayer{

public:
    string name; 
    
};


    

/*class items : public hqLocation {
    
    // All the items stored in the hqLocation
    
    
    
};



class Knife : public items{ // inside the items
public:
    int dps = 2; 
    
};

class firstAid: public items{ // inside items 
public:    
    int health = 5;
    
};

*/
    
    
    

class Room {
public:
    void createRoom()
    {
        direction[0] ="N";
        direction[1] ="NE"; 
        direction[2] ="E";
        direction[3] ="SE";
        direction[4] ="S";
        direction[5] ="SW";
        direction[6] ="W"; 
        direction[7] ="NW";
        
        
        movement[0] = -1;
        movement[1] = -1;
        movement[2] = 2;
        movement[3] = 3;
        movement[4] = -1;
        movement[5] = -1;
        movement[6] = -1;
        movement[7] = -1; 
       
    }; 
    
    void createSecondRoom()
    {
        direction[0] ="N";
        direction[1] ="NE"; 
        direction[2] ="E";
        direction[3] ="SE";
        direction[4] ="S";
        direction[5] ="SW";
        direction[6] ="W"; 
        direction[7] ="NW";
        
        
        movement[0] = -1;
        movement[1] = -1;
        movement[2] = 2;
        movement[3] = 3;
        movement[4] = -1;
        movement[5] = -1;
        movement[6] = 7;
        movement[7] = -1; 
       
    }; 
    
    int roomID; // ID of a room - lets us work out where we are. All roomIDs must be > -1
                // Means that if we CAN'T travel in a given direction, we set -1 to be the connectedRooms value
    int connectedRooms[4]; // Rooms we can reach from a room
    
    string direction[8];
    int movement[8];
    
    int playerLocation;
    
    string roomDescription; // Describe the room   
    
     
    vector<Item> items; // Rifles and health potions in the room
    vector<Monster> entities; // Creatures in the room
};
    
    

    
int main(void)
{
  Enemies myEnemies;
  Monster myFirstMonster(6, "flock of pigeons", 10);
  Monster mySecondMonster(10, "wolf", 20 );
  Monster myThirdMonster(8, "dog", 15 );
  Monster myFourthMonster(15, "bear trap", 0);
  Monster myFithMonster(9, "troll", 15 ); 
    
   Room *firstRoom = new Room ();
   firstRoom->entities.push_back(myFirstMonster);
   firstRoom->entities.push_back(mySecondMonster);
   firstRoom->entities.push_back(myThirdMonster);
   firstRoom->entities.push_back(myFourthMonster);
   firstRoom->entities.push_back(myFithMonster);

      for (int i = 0; i < firstRoom ->entities.size(); i++)
         firstRoom->entities[i].print();
}
    
    

    


class Dungeon {
public:

   playerLocation = movement[] 
    
    
    
    
    void update(string a){
        if(a == "North")
        {
           // Check current Room to see if can go north
           // If can go north, go north
           // // spyPlayer = string overClock 
           // Display string overClock content 
           // Else, cout << "There is no path north!"
            for (int i = 0; i<8; i++)
            {
                
                if(rooms[currentRoom].direction[i]=="N")
                {
                    if(rooms[currentRoom].movement[i]<0)
                        cout<<"Cannot travel"<< endl;
                    else
                        cout<<"Can travel"<< endl;
                }        
         
                
                
            }
           
           
            
            
        }
        
        else if (a == "East")
        {
            //check east for room
            //if no room access denied 
            
            
            
            
        }
        
        else if(a == "South")
        {
            
            //If south go south 
            //if not/ access denied 
            
        } 
        
        
        else if(a == "West")
        {
            // Check room to see if you can go west
            // if can go north, go north 
            // 
            
            
        }
        
    } 
        /*else if(a == "Help" || a == "Help" || a == "help" )
        {
        cout << "Useful commands: \n" << endl;   
        cout << "The \'INFO\' command prints information which might give some idea of what the game is about." << endl;   
        cout << "The \'INVENTORY\' command lists the objects in your possession." << endl;   
        cout << "The \'LOOK\' command prints a description of your surroundings." << endl;  
        cout << "The \'SCORE\' command prints your current score and ranking." << endl;  
        cout << "The \'DIAGNOSE\' command reports on your injuries, if any.\n" << endl;   

           string command; 
           cin >> command;
           if (command == "INFO" || command == "info" || command == "Info")
           {
                 cout << "\nYou are in a dark room, which contains some items you wish to acquire. In order to do so, you must of course remove it from the room.  To receive full credit for it, you must survive through them.\n" << endl;   
                 cout << "\n In addition, the room contains various objects which may or may not be useful in your attempt to survive.  You may need sources of light, since you are in the dark, and weapons, since will have to deal with some unfriendly monsters wandering about.  Reading material is scattered around the room as well;  some of it is rumored to be useful.\n" << endl;   
                 cout << "\n To determine how successful you have been, a score is kept. When you find a valuable object and pick it up, you receive a certain number of points, which depends on the difficulty of finding the object.  In addition, some particularly interesting rooms have a value associated with visiting them.  The only penalty is for getting yourself killed and the game will be over.\n" << endl;       
           }    
           else if (command == "INVENTORY" || command == "inventory" || command == "Inventory")
           {
                 //access inventory;
                 //cout << "You have" << Item << "saved." << endl;
           }
           else if (command == "LOOK" || command == "look" || command == "Look")
           {
                 cout << "#roomName" << endl;
                 cout << "#roomDescription" << endl;
           }
           else if (command == "SCORE" || command == "score" || command == "Score")
           {
                 cout << "Your score would be X." << endl;
           }
           else if (command == "DIAGNOSE" || command == "diagnose" || command == "Diagnose")
           {
                 cout << "#Health" << endl;
           }
           else 
           {
                cout << "That is not a valid option." << endl;
           }
        }
        else
        {
            cout << "That is not a valid option." << endl;
        }
        
    }    */
        
        
        
        
    int currentRoom;
    vector<Room> rooms;
};








/*class overClock
{
 private: 
   string rifle;
   int monsters; 
   int players;

    
public:
    void infiltrate();
    cout << "WOOF!" << endl;
    
   void setMonsters (int quantity) {monsters = quantity ;}
   void setRifle(string ak) {rifle = ak;}
    
    int getMonsters(){ return monsters};
    string getRifle(){ return rifle };
    


int main()
{
    
    overClock map ;
    
    map.setMonsters(5);
    map.setRifle(1);
    
    
    cout <<"This location has "<< map.getRifle() << " Rifles" << endl; 
    
    map.infiltrate();
    
    return 0;
};*/
int main()
{
    
    Room room1;
    room1.createRoom();
    Room room2;
    room2.createSecondRoom();
    Dungeon myDungeon;
    myDungeon.rooms.push_back(room1);
    myDungeon.rooms.push_back(room2);
    myDungeon.currentRoom = 0;    
    myDungeon.update("North");
    
    return 0;
}