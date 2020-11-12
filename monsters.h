/*



#ifndef MONSTER_H_
#define MONSTER_H_
#include <iostream>

class Monster
{
private:
	std::int health_; //Current health
    //int dps;

protected:
	Monster();

public:
	virtual ~Monster();
	virtual void attack();
};


class Pigeons : public Monster{
public:
    Pigeons(){
        this->health_ = 10;
        //this->dps = 6;       
        this->damage_min_ = 5;
        this->damage_max_ = 10;
    }
    
class Wolf : public Monster{
public:
    Wolf(){
        this->health_ = 20;
        //this->dps = 10;  
        this->damage_min_ = 5;
        this->damage_max_ = 10;
    }
        
class Dog : public Monster{
public:
    Dog(){
        this->health_ = 15;
        //this->dps = 8;   
        this->damage_min_ = 5;
        this->damage_max_ = 10;
    }
        
class BearTrap : public Monster{
public:
    BearTrap(){
        this->health_ = 0;
        //this->dps = 6; 
        this->damage_min_ = 5;
        this->damage_max_ = 10;
    }     
        
class Troll : public Monster{
public:
    Troll(){
        this->health_ = 15;
        //this->dps = 9;  
        this->damage_min_ = 5;
        this->damage_max_ = 10;
    }        
       

    void attack(Object &target) const{
        target->do_damage(random(this->damage_min_, this->damage_max_));
    }
};

#endif 













#include <iostream>

//A class for monsters encountered in the game.
class Monster
{
public:
    std::string name;
    int health;
    int dps;
    
    Monster()
    {
        name =
        
        std::cout << "You have just encountered with " << name << ". " <<std::endl;
        std::cout << "Health: " << health << "        Damage/sec: " << dps << std::endl;
    }    
    
    
    void Enemies() const
    {   if (name == "flock of pigeons" )
        {
            Monster::health = 10;
            Monster::dps = 6;
        }   
        
        if (name == "wolf" )
        {
            Monster::health = 20;
            Monster::dps = 10;
        }
        
        if (name == "dog" )
        {
            Monster::health = 15;
            Monster::dps = 8;
        }
        
        if (name == "bear trap" )
        {
            Monster::health = 0;
            Monster::dps = 6;
        }
        
        if (name == "troll" )
        {
            Monster::health = 15;
            Monster::dps = 9;
        }
        
        else 
        {
            std::cout<<std::endl;
        }
     }
};


    */



    
    
 

