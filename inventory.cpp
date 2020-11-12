#include <iostream> 
#include <string>
#include <vector>
using namespace std; 


class Item
{
public:
  string name;
  int weight;
  int value;

  Item(string n, int w, int v) : name(n), value(v), weight(w) {}

  virtual void print(void) {}
};

class Weapon : public Item
{
public:
  int damage;

  Weapon(int d, string n, int w, int v) :damage(d), Item(n, w, v) {}

  void print(void) { std::cout << name << ":   damage: " << weight << "  weight: " << value << "  value: " << damage << endl; }
};

class Armor : public Item
{
public:
  int block;
  
  Armor(int b, string n, int w, int v) :block(b), Item(n,w,v) {};
  
  void print(void) { std::cout << name << ":  damage: " << weight << "  weight: " << value << "  value: " << block << endl; }
 };

class Inventory
{
public:
    int maxSize = 5;
    vector<Item*> items;
    
    void addItem(Item* newItem) {if(items.size() < maxSize)
                                 {
                                   items.push_back(newItem);
                                 }
                                 else
                                 {
                                     cout << "Bag is full" << endl;
                                 }
                                };
};

int main(void)
{
  Inventory myInventory;
  Item *myFirstWeapon = new Weapon(4, "Knife", 8, 1);
  Item *myFirstArmor = new Armor(4, "Shield", 3, 8 );
  Item *mySecondWeapon = new Weapon(9, "Grenade", 10, 3 );
  Item *myThirdWeapon = new Weapon(6,  "9mm Pistol", 4, 3 );
  Item *myFourthWeapon = new Weapon(6, "Bow & Arrow", 4, 3 ); 
  myInventory.items.push_back(myFirstWeapon);
  myInventory.items.push_back(myFirstArmor);
  myInventory.items.push_back(mySecondWeapon);
  myInventory.items.push_back(myThirdWeapon);
  myInventory.items.push_back(myFourthWeapon);
    
 
  for (int i = 0; i < myInventory.items.size(); i++)
     myInventory.items[i]->print();

  for (int i = 0; i < myInventory.items.size(); i++)
    delete myInventory.items[i];
    

    return 0;
}


