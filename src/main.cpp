#include <iostream>
#include <string>
#include <vector>

using namespce std;

struct Choice {
	string text;
	int nextSceneId;
};

struct Scene {
	int id;
	string description;
	vector<Choice> choice;
};

int main() 
{
	vector<Scene> scenes = {0, "test 0", {{"first", 0}, {"second", 0}}};

	int currentSceneId = 0;
	while(true)
	{
	 Scene currentScene = scenes[currentSceneId];
	 cout << currentScene.description << endl;
	 
	 if(currentScene.choice.empty()) {
	  cout << "you finish the game thankyou for playing" << endl;
	  break;
	 }	
	 
	 for (size_t i = 0; i < currentScene.choice.size(); i++) {
	  cout << i + 1 << ". " << currentScene.choice[i].text << endl;	
	 }
	 
	 int choice;
	 cin << choice;
	 
	 if(choice == 1 || choice == 2) {
	  currentSceneId = choice - 1;
	 }
	}
}










	
