#include <iostream>
using namespace std;


//tried to created a saving menu
//only could set a minimal setting menu using switch statements

int main()
{
       int choice = 0;
       string Error= "Invalid choice";
        
        do
        {
            cout << endl;
            cout << "—*—*—*—*—*—*—*—*—*—*—*—*—*—*—*—*—*—*—*—*—*—*—*—*—" << endl;
            cout << "                     MENU" << endl;
            cout << "—*—*—*—*—*—*—*—*—*—*—*—*—*—*—*—*—*—*—*—*—*—*—*—*—" << endl;
            cout << endl;
            cout << "1. Pause" << endl;
            cout << "2. Save" << endl;
            cout << "3. Exit" << endl;
            cout << endl;
            cout << "Enter choice: ";
            cin >> choice;
            
            switch (choice)
            {
                case 1: 
                    int choice2;
                    cout << "Paused" << endl;  
                    cout << endl;
                    cout << "Resume?: " << endl;
                    cout << "1. Yes" << endl;
                    cout << "2. No" << endl;
                    cout << endl;
                    cin >> choice2;
                    
                    switch (choice2)
                    {
                        case 1:
                            //return game;                   
                            continue;
                        case 2:
                            cout << endl;                   
                            return 0;
                        default:  
                            cout << Error << endl;                                            
                            cout << endl;
                    }                        
                break;
                    
                case 2:
                    int choice3;
                    cout << "The game is saved" << endl;
                    cout << endl;
                    cout << "Do you want to keep playing?: " << endl;
                    cout << "1. Yes" << endl;
                    cout << "2. No" << endl;
                    cout << endl;
                    cin >> choice3;
                    
                    switch (choice3)
                    {
                        case 1:
                            //return game;                   
                            continue;
                        case 2:
                            cout << endl;                   
                            return 0;
                        default:  
                            cout << Error << endl;                                            
                            cout << endl;
                    }                            
                break;
                    
                case 3:
                    cout << endl;                                 
                    break;
                default:  
                    cout << Error << endl;                                      
                    cout << endl;
            }
        }while ( choice != 3);
    
        return 0;
}