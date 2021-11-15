#include<iostream>
using namespace std;
int main() {
	// game variables
	int room = 1;
	char input;

	cout << "you wake up to find yourself in a spoopy dungeon.can you escape?good luck!" << endl;

	do { //beginning of the game loop---------------------------------------------------
		switch (room) {
		case 1:
			cout << "you are in the room 1. you can go north." << endl;
			cin >> input;
			if (input == 'n')
				room = 2;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 2:
			cout << "you are in the room 2. you can go south." << endl;
			cin >> input;
			if (input == 's ')
				room = 1;
			else
				cout << "sorry, not an option." << endl;
			break;
		}

	} while (input != 'q');
}
