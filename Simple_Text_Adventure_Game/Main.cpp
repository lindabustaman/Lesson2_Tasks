#include <iostream>
#include <fstream>
#include <string>
using namespace std;


enum dating_partner
{
	alien, 
	satan, 
	human, 
	narrator
};

enum alien_choices
{
	alien_confess,
	betrayal,
	return_home
};

enum satan_choices
{
	satan_confess, 
	sell_soul,
	fanfiction
};

enum human_choices
{
	human_confess,
	hard_to_get,
	reveal_yourself
};

enum narrator_choices
{
	rejection
};

void load_txt_file(string filename) 
{
	fstream myFile;
	myFile.open(filename, ios::in);
	if (myFile.is_open()) {
		string line;
		while (getline(myFile, line))
		{
			cout << line << endl;
		}
		myFile.close();
	}

	system("pause>0");
}

int main()
{
	//load_txt_file("AI_choices.txt");
	
}