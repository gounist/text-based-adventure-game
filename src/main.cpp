#include <iostream>
#include <string>
#include "../include/nlohmann/json.hpp"

using namespace std;

void Text_Manager();
void Text();

class Place {
	public:
	 string: name;
		
	Place(const string name) : name(name) {}

};

class Player {
    public:
        string name;
        
        Player(const string name) : name(name) {}

};

int main() 
{
    //Getting the Player name
    string Player_name;

    cout << "Please, Enter your name: ";
    cin >> Player_name;
    Player player(Player_name);

    cout << "Welcome " << player.name << endl; 

    while(true) 
    {


    }

    return 0;
}

void Text_Manager()
{
    cout << "test" << endl;

}

void Text()
{
    
}

