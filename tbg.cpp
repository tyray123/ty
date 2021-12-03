#include<iostream>
using namespace std;
string inventory[10];
void pay();
int money = 500;
int time = 1190;
int main() {
	// game variables
	int room = 1;
	char input;
	
	cout << "Hey,welcome to my skateboard shop! Your objective is to collect all the skateboard pieces and build the final one at the end" << endl;

	do { //beginning of the game loop---------------------------------------------------
		time += 10;
		cout << time << endl;

		switch (room) {
		case 1:
			cout << " you've entered the skateboard shop. You can go north to collect the board and the grip. You can go east collect the bearings. You can go west to collect your wheels/chucks and complete your board." << endl;
			cin >> input;
			if (input == 'n')
				room = 2;
			else if (input == 'e')
				room = 3;
			else if (input == 'w')
				room = 4;
		
			else
				cout << "sorry, not an option." << endl;
			break;
		case 2:
			cout << "   ." << endl;
			cin >> input;
			if (input == 's ')
				room = 1;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 3:
			cout << "you are in the room 3. you can go west." << endl;
			cin >> input;
			if (input == 'w ')
				room = 3;
			else
				cout << "sorry, not an option." << endl;
			break;


		case 4:
			cout << "you are in the room 4. you can go east." << endl;
			cin >> input;
			if (input == 'e ')
				room = 4;
			else
				cout << "sorry, not an option." << endl;
			break;



		case 5:
			cout << "when you enter room 5 ." << endl;
			cin >> input;
			if (input == 'e ')
				room = 5;
			else
				cout << "sorry, not an option." << endl;
			break;


		case 6:
			cout << "you are in the room 6. you can go east." << endl;
			cin >> input;
			if (input == 'e ')
				room = 6;
			else
				cout << "sorry, not an option." << endl;
			break;
		}
	} while (input != 'q');
			 
} //function defintions------------------------
void pay() {
	// remember to add "string inventory[10]"to your variables up top!
	string input; // local to shop
	do {
		cout << "Hi great job making a skateboard!" << endl;
		cout << "Enter p to pay. A skateboard is $500" << endl;
		cout << "money:" << money << endl;
		cin >> input;
		if (input == "p") {
			inventory[0] = "skateboard";
			cout << "you bought your skateboard!" << endl;
			money -= 500;
		
		}
	} while (input != "q");
}
