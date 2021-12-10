//add one more function
//upgrade chars to strings for input
//need one more item
//check if you have all the items in your shop function
//backstory
//poster map
//2 character sketches
#include<iostream>
#include<Windows.h>  
using namespace std;
string inventory[10];
void shop();
void NPC();
int turns;
int money = 500;
int time = 1190;
// game variables
int room = 1;
string input;



int main() {
	cout << "Hey,welcome to my skateboard shop! Your objective is to collect all the skateboard pieces and build the final one at the end" << endl;
	cout << " _._                                       _._" << endl;
	cout << " _.----|   |--------------------------------------|   |----._" << endl;
	cout << " . - '      |.-.|      |     ||   || | | | | | | |     |.-.|      ' - . " << endl;
	cout << ".'        __| |__     |T|O|Y|/   \|M|A|C|H|I|N|E|    __| |__        '." << endl;
	cout << "|         |o_| |_o|    |_ | _ | _|     |_ | _ | _ | _ | _ | _ | _|   |o_| |_o|         |" << endl;
	cout << "|         ||_ @ _ || _    _ ___ _  _  _  _  _  _  _ || _ @ _||         |" << endl;
	cout << "|         |o_| |_o| |_ |/| | | |_ | _|| || ||_) | \ | _ | o_| |_o|         |" << endl;
	cout << " '.          | |    __||\|-| | |_ |_||_||-||\_|_/__|    | |          .'" << endl;
	cout << " '-._     |' - '|                                      |' - '|     _.-'" << endl;
	cout << "'----|_ _|--------------------------------------|_ _|----'" << endl;
	cout << "~~" << endl; cout << " _._                                       _._" << endl;
	cout << " _.----|   |--------------------------------------|   |----._" << endl;
	cout << " . - '      |.-.|      |     ||   || | | | | | | |     |.-.|      ' - . " << endl;
	cout << ".'        __| |__     |T|O|Y|/   \|M|A|C|H|I|N|E|    __| |__        '." << endl;
	cout << "|         |o_| |_o|    |_ | _ | _|     |_ | _ | _ | _ | _ | _ | _|   |o_| |_o|         |" << endl;
	cout << "|         ||_ @ _ || _    _ ___ _  _  _  _  _  _  _ || _ @ _||         |" << endl;
	cout << "|         |o_| |_o| |_ |/| | | |_ | _|| || ||_) | \ | _ | o_| |_o|         |" << endl;
	cout << " '.          | |    __||\|-| | |_ |_||_||-||\_|_/__|    | |          .'" << endl;
	cout << " '-._     |' - '|                                      |' - '|     _.-'" << endl;
	cout << "'----|_ _|--------------------------------------|_ _|----'" << endl;
	cout << "~~" << endl;
	// PlaySoundA((LPCSTR)"skateboard.WAV", NULL, SND_FILNAME | SND_ASYNC);
	while (input != "q" && turns < 20 && HealthStatusDisabled> 0) { // Game loop -----------------------------------------
		cout << "----------------next turn------------------------------------------------------------------------------" << endl;


		time += 10;
		cout << time << endl;

		switch (room) {
		case 1:

			cout << " you've entered the skateboard shop. You can go north to collect the board and the grip. You can go east collect the bearings. You can go west to collect your wheels/chucks and complete your board." << endl;
			cin >> input;
			if (input == "n")
				room = 2;
			else if (input == "e")
				room = 3;
			else if (input == "w")
				room = 4;

			else
				cout << "sorry, not an option." << endl;
			break;
		case 2:

			cout << "You can go north 'n' to continue down the hallway or go back 'b'." << endl;
			cin >> input;
			if (input == "n")
				room = 6;
			else if (input == "b")
				room = 1;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 3:
			cout << "You can go east 'e' to continue down the hallway or go back 'b'." << endl;
			cin >> input;
			if (input == "e")
				room = 7;
			else if (input == "b")
				room = 1;
			else
				cout << "sorry, not an option." << endl;
			break;


		case 4:

			cout << "If you continue west 'w' you can collect your wheelsand chucks or you can go back 'b'." << endl;
			cin >> input;
			if (input == "w")
				room = 5;
			else if (input == "b")
				room = 1;
			else
				cout << "sorry, not an option." << endl;
			break;



		case 5:
			cout << "You can go west 'w' to continue down the hallway or go back 'b'." << endl;
			cin >> input;
			if (input == "w")
				room = 8;
			else if (input == "b")
				room = 4;
			else
				cout << "sorry, not an option." << endl;
			break;


		case 6:
			if (inventory[1] != "board and grip tape") {
				cout << "you found a skateboard whell and put it in backpack" << endl;
				inventory[1] = "board and grip tape";
			}
			cout << "If you go north 'n' you can get your board and grip tape. Or you can go back 'b'." << endl;
			cin >> input;
			if (input == "n")
				room = 9;
			else if (input == "b")
				room = 2;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 7:
			cout << "You can go east 'e' to get your bearings or go back 'b'." << endl;
			cin >> input;
			if (input == "e")
				room = 10;
			else if (input == "b")
				room = 3;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 8:
			cout << "You can go north 'n' or south 's'. North leads you to the register you need a finsihed board before going there. If you go south you can collect you wheels and chucks. Or you can go back 'b'." << endl;
			cin >> input;
			if (input == "n")
				room = 13;
			else if (input == "s")
				room = 12;
			else if (input == "b")
				room = 5;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 9:
			cout << "If you go west 'w' you can collect the board. If you east 'e' you can collect your grip tape. Or you can go back 'b'." << endl;
			cin >> input;
			if (input == "w")
				room = 14;
			else if (input == "e")
				room = 15;
			else if (input == "b")
				room = 6;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 10:

			cout << "You can go south "s" to collect your bearings. Or go back 'b'." << endl;
			cin >> input;
			if (input == "s")
				room = 11;
			else if (input == "b")
				room = 7;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 11:
			system("Color 5A");

			if (inventory[2] != "bearings") {
				cout << "you found a skateboard bearings put it in backpack" << endl;
				inventory[2] = "bearings";
			}
			cout << "You can collect your bearings. Or go back" << endl;
			cin >> input;
			if (input == "e")
				room = 11;
			else if (input == "b")
				room = 10;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 12:
			if (inventory[3] != " wheels and chucks ") {
				cout << "you found a skateboard wheels and chucks put it in backpack" << endl;
				inventory[3] = "wheels and chucks";
			}
			cout << "You can collect your wheels and chucks. Or go back 'b'." << endl;
			cin >> input;
			if (input == "b")
				room = 8;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 13:
			cout << "Now you put everything together and pay for the finished board. Or go back 'b'." << endl;
			cin >> input;
			if (input == "b")
				room = 8;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 14:
			cout << "You can collect your board or go back 'b'." << endl;
			cin >> input;
			if (input == "b")
				room = 9;
			else
				cout << "sorry, not an option." << endl;
			break;
		case 15:
			if (inventory[4] != "board and tape") {
				cout << "you found a skateboard board and girp tape put it in your backpack " << endl;
				inventory[4] = "board";
			}
			cout << "You can collect your grip tape or go back 'b'." << endl;
			//call the shop function here
			cin >> input;
			if (input == "b")
				room = 9;


		}
	} 

} //function defintions------------------------


void shop() {
	// remember to add "string inventory[10]"to your variables up top!
	string input; // local to shop
	do {
		//check IF you have all the items
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
void NPC() {
	int num = rand() % 3 + 1; // crate a num between 1-3
	switch (num) {
	case 1:
		cout << "a rad wizard appears" << endl;
		break;
	case 2:
		cout << "a skater dude appears " << endl;
		break;
	case 3:
		cout << " a happy costomer " << endl;
		break;



	}
}

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
		if (inventory[1] != "board and grip tape") {
			cout << "you found a skateboard whell and put it in backpack" << endl;
			inventory[1] = "board and grip tape";
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
			if (inventory[2] != "bearings") {
				cout << "you found a skateboard bearings put it in backpack" << endl;
				inventory[2] = "bearings";
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
			if (inventory[3] != " wheels and chucks ") {
				cout << "you found a skateboard wheels and chucks put it in backpack" << endl;
				inventory[3] = "wheels and chucks";
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
			if (inventory[4] != "board and tape") {
				cout << "you found a skateboard board and girp tape put it in your backpack " << endl;
				inventory[4] = "board";

			cout << "You can collect your grip tape or go back 'b'." << endl;
			cin >> input;
			if (input == 'b')
				room = 9;
		}
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
