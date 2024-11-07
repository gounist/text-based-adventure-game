#include <iostream>
#include <csignal>
#include <string>
#include <vector>
#include <chrono>
#include <thread>

using namespace std;

bool interrupted(false);


void signalHandler(int signum) {
	interrupted = true;
}

struct Choice {
	string text;
	int nextSceneId;
};

struct Scene {
	int id;
	string description;
	vector<Choice> choice;
};

void choiceManager(Scene& currentScene, int& currentSceneId) {
	 int choice;

	 while (true) {
        if (cin >> choice) {
            if (choice == 1 || choice == 2) {
                choice -= 1;
                currentSceneId = currentScene.choice[choice].nextSceneId;
                break; 
            }
	    else if (choice == 0) {
		    interrupted = true;
		    break;
	    }
	    else {
                cout << "Invalid choice. Please enter 1 or 2." << endl;
            }
        }else { 
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        }
    }
}

int main() 
{
	signal(SIGINT, signalHandler);
 
	vector<Scene> scenes = {
	 {0, "1 and 2 for choosing and 0 if you want to quit", {{"i understand", 1}, {"i understand", 1}}}

	 {1, "", {{"i understand", 1}, {"i understand", 1}}}



	};

	int currentSceneId = 0;
	while(!interrupted)
	{
	 Scene currentScene = scenes[currentSceneId];
	 for(int i = 0;i < currentScene.description.length(); i++) {
	  cout << currentScene.description[i];
	  std::cout.flush();
          std::this_thread::sleep_for(std::chrono::milliseconds(100)); 
	 }
	 cout << endl;

	 if(currentScene.choice.empty()) {
	  cout << "you finish the game thankyou for playing" << endl;
	  break;
	 }	
	 
	 for (size_t i = 0; i < currentScene.choice.size(); i++) {
	  cout << i + 1 << ". " << currentScene.choice[i].text << endl;	
	 }

	 choiceManager(currentScene, currentSceneId);

	}
}









	
