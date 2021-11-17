#include<iostream>
using namespace std;
string inventory[10];
void shop();
int money = 500;
int main() {
	// game variables
	int room = 1;
	char input;
	
	cout << "you wake up to find yourself in a spoopy dungeon.can you escape?good luck!" << endl;

	do { //beginning of the game loop---------------------------------------------------
		
		
		switch (room) {
		case 1:
			shop();
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
} //function defintions------------------------
void shop() {
	// remember to add "string inventory[10]"to your variables up top!
	string input; // local to shop
	do {
		cout << "Hi,welcome to my shop!" << endl;
		cout << "Enter k for key,p for potion,1 for lamp" << endl;
		cout << "money:" << money << endl;
		cout << "q to quit" << endl;
		cin >> input;
		if (input == "k") {
			inventory[0] = "key";
			cout << "you got a key!" << endl;
			money -= 50;
		}
		else if (input == "p") {
			inventory[1] = "potion";
			cout << "you got a potoin!" << endl;
			money -= 100;
		}
		else if (input == "1") {
			inventory[2] = "lamp!";
			cout << "you got a lamp!" << endl;
		}
	} while (input != "q");
}
#include<iostream>
using namespace std;
string inventory[10];
void shop();
int money = 500;
int main() {
	// game variables
	int room = 1;
	char input;

	cout << "you wake up to find yourself in a spoopy dungeon.can you escape?good luck!" << endl;

	do { //beginning of the game loop---------------------------------------------------


		switch (room) {
		case 1:
			shop();
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
} //function defintions------------------------
void shop() {
	// remember to add "string inventory[10]"to your variables up top!
	string input; // local to shop
	do {
		cout << "Hi,welcome to my shop!" << endl;
		cout << "Enter k for key,p for potion,1 for lamp" << endl;
		cout << "money:" << money << endl;
		cout << "q to quit" << endl;
		cin >> input;
		if (input == "k") {
			inventory[0] = "key";
			cout << "you got a key!" << endl;
			money -= 50;
		}
		else if (input == "p") {
			inventory[1] = "potion";
			cout << "you got a potoin!" << endl;
			money -= 100;
		}
		else if (input == "1") {
			inventory[2] = "lamp!";
			cout << "you got a lamp!" << endl;
		}
	} while (input != "q");
}    
		//Battle system defintion 
		void Battle (int MonsterHealth) {
			int damage;
			while (health > 0 && MonsterHealth >0) {
				//the monster attacks
				damage = rand() % 20; 
				cout << "the monster hurts you for " << damage << "damage." << endl;
				health -= damage;//take the damage
				//the human attacks 
				if (inventory[4]== "sword") {
				damage = rand() % 50 + 10;
				cout << " you use your sword against the enmey" << endl;
				else {
				cout << "you defeated the monster!" << endl << endl;
				else cout << "you died." << endl << endl;

