#include <iostream>
#include <fstream>
#include <string>
using namespace std;


enum dating_partner
{
	alien, 
	satan, 
	human, 
	AI
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


}

int main()
{
	load_txt_file("first_choice.txt");
	
	int first_choice;
	cin >> first_choice;

	switch (first_choice)
	{
	case alien:
	{
		load_txt_file("alien_choices.txt");

		int alien_choice_selection;
		cin >> alien_choice_selection;

		switch (alien_choice_selection)
		{
		case alien_confess:
		{
			load_txt_file("alien_confess.txt");
			break;
		}
		case betrayal:
		{
			load_txt_file("alien_betrayal.txt");
			break;
		}
		case return_home:
		{
			load_txt_file("alien_return_home.txt");
			break;
		}
		default:
		{
			cout << "Invalid option" << endl;
		}
		}
		break;
	}
	case satan:
	{
		load_txt_file("satan_choices.txt");

		int satan_choice_selection;
		cin >> satan_choice_selection;

		switch (satan_choice_selection)
		{
		case satan_confess:
		{
			load_txt_file("satan_confess.txt");
			break;
		}
		case sell_soul:
		{
			load_txt_file("satan_sell_soul.txt");
			break;
		}
		case fanfiction:
		{
			load_txt_file("satan_fanfiction.txt");
			break;
		}
		default:
		{
			cout << "Invalid option" << endl;
		}
		}
		break;
	}
	case human:
	{
		load_txt_file("human_choices.txt");
		int human_choice_selection;
		cin >> human_choice_selection;

		switch (human_choice_selection)
		{
		case human_confess:
		{
			load_txt_file("human_confess.txt");
			break;
		}
		case hard_to_get:
		{
			load_txt_file("human_hard_to_get.txt");
			break;
		}
		case reveal_yourself:
		{
			load_txt_file("human_reveal_yourself.txt");
			break;
		}
		default:
		{
			cout << "Invalid option" << endl;
		}
		}
		break;
	}
	case AI:
	{
		load_txt_file("AI_choices.txt");
		break;
	}
	default: 
	{
		cout << "Invalid option" << endl;
	
	}
	}

}