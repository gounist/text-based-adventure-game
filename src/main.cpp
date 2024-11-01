#include <iostream>
#include <string>
#include "nlohmann/json.hpp"

using namespace std;

int Text_Manager();
int Text();

class Player {
    public:
        string name;
        string age;

        Player(string name) : name(name) {}

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

int Text_Manager()
{
    cout << "test" << endl;
    return 0;
}

int Text()
{
    return 0;
}

