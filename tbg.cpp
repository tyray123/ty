#include<iostream>
using namespace std;
string inventory[10];
void shop();
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
			cout << "You can go north 'n' to continue down the hallway or go back 'b'." << endl;
			cin >> input;
			if (input == 'n')
				room = 6;
			else if (input == 'b')
				room = 1;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 3:
			cout << "You can go east 'e' to continue down the hallway or go back 'b'." << endl;
			cin >> input;
			if (input == 'e')
				room = 7;
			else if (input == 'b')
				room = 1;
			else
				cout << "sorry, not an option." << endl;
			break;


		case 4:
			cout << "If you continue west 'w' you can collect your wheels and chucks or you can go back 'b'." << endl;
			cin >> input;
			if (input == 'w')
				room = 5;
			else if (input == 'b')
				room = 1;
			else
				cout << "sorry, not an option." << endl;
			break;



		case 5:
			cout << "You can go west 'w'to continue down the hallway or go back 'b'." << endl;
			cin >> input;
			if (input == 'w')
				room = 8;
			else if (input == 'b')
				room = 4;
			else
				cout << "sorry, not an option." << endl;
			break;


		case 6:
			cout << "If you go north 'n' you can get your board and grip tape. Or you can go back 'b'." << endl;
			cin >> input;
			if (input == 'n')
				room = 9;
			else if (input == 'b')
				room = 2;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 7:
			cout << "You can go east 'e' to get your bearings or go back 'b'." << endl;
			cin >> input;
			if (input == 'e')
				room = 10;
			else if (input == 'b')
				room = 3;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 8:
			cout << "You can go north 'n' or south 's'. North leads you to the register you need a finsihed board before going there. If you go south you can collect you wheels and chucks. Or you can go back 'b'." << endl;
			cin >> input;
			if (input == 'n')
				room = 13;
			else if (input == 's')
				room = 12;
			else if (input == 'b')
				room = 5;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 9:
			cout << "If you go west 'w' you can collect the board. If you east 'e' you can collect your grip tape. Or you can go back 'b'." << endl;
			cin >> input;
			if (input == 'w')
				room = 14;
			else if (input == 'e')
				room = 15;
			else if (input == 'b')
				room = 6;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 10:
			cout << "You can go south 's' to collect your bearings. Or go back 'b'" << endl;
			cin >> input;
			if (input == 's')
				room = 11;
			else if (input == 'b')
				room = 7;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 11:
			cout << "You can collect your bearings. Or go back" << endl;
			cin >> input;
			if (input == 'e')
				room = 11;
			else if (input == 'b')
				room = 10;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 12:
			cout << "You can collect your wheels and chucks. Or go back 'b'." << endl;
			cin >> input;
			if (input == 'b')
				room = 8;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 13:
			cout << "Now you put everything together and pay for the finished board. Or go back 'b'." << endl;
			cin >> input;
			if (input == 'b')
				room = 8;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 14:
			cout << "You can collect your board or go back 'b'." << endl;
			cin >> input;
			if (input == 'b')
				room = 9;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 15:
			cout << "You can collect your grip tape or go back 'b'." << endl;
			cin >> input;
			if (input == 'b')
				room = 9;
		} while (input != 'q');

	} //function defintions------------------------
	void shop() {
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
}
