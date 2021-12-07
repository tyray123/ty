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
			cout << " your going north to get your board and grip  ." << endl;
			cin >> input;
			if (input == 's')
				room = 1;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 3:
			cout << "if you go west you can get your wheels and chucks." << endl;
			cin >> input;
			if (input == 'w')
				room = 3;
			else
				cout << "sorry, not an option." << endl;
			break;


		case 4:
			cout << "if you go east you can get the beanring ." << endl;
			cin >> input;
			if (input == 'e')
				room = 4;
			else
				cout << "sorry, not an option." << endl;
			break;



		case 5:
			cout << " now you have 7 min to have every pieces before the timer runs out ." << endl;
			cin >> input;
			if (input == 'e ')
				room = 5;
			else
				cout << "sorry, not an option." << endl;
			break;


		case 6:
			cout << "Make sure you get all the tools you'll need to get to build the skateboard has well." << endl;
			cin >> input;
			if (input == 'e ')
				room = 6;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 7:
			cout << "you'll have 1400 to have every tool and the skateboard parts to the together ." << endl;
			cin >> input;
			if (input == 'e')
				room = 7;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 8:
			cout << " now your ready to start building the skateboard ." << endl;
			cin >> input;
			if (input == 'e')
				room = 8;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 9:
			cout << "first you get the board and the grip stape ." << endl;
			cin >> input;
			if (input == 'e')
				room = 9;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 10:
			cout << "measure the grip stape the cut it to match the board ." << endl;
			cin >> input;
			if (input == 'e')
				room = 10;
			else if (input == 'b')
				room = 9;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 11:
			cout << "then you start putting and scurrying the chucks on the board." << endl;
			cin >> input;
			if (input == 'e')
				room = 11;
			else if (input == 'b')
				room = 13;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 12:
			cout << "Now you can start putting the wheels on the board." << endl;
			cin >> input;
			if (input == 'e')
				room = 12;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 13:
			cout << "now you can put the bearings on the board ." << endl;
			cin >> input;
			if (input == 'e')
				room = 13;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 14:
			cout << "now you are done with building the board and now you can buy the board to win the game ." << endl;
			cin >> input;
			if (input == 'e')
				room = 6;
			else if (input == 'b')
				room = 13;
			else
				cout << "sorry, not an option." << endl;
			break;

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
