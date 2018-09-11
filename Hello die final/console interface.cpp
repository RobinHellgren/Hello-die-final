#include <iostream>
#include "die.cpp"

using namespace std;

class ConsoleInterface {
	int numberOfRolls;
public:
	ConsoleInterface(){
		numberOfRolls = 0;
	}
	void askForNumberOfRolls() {

		do {
			cout << "Enter number of rolls: ";
			cin >> numberOfRolls;
			if (cin.fail()) {
				cin.clear();
				cin.ignore(80, '\n');
				cout << "Input invalid try again" << endl;

			}
			else {
				break;
			}
		} while (true);
	}
	void outputResultFromDie() {
		Die die = Die(6, 1);
		for(int i=0; i < numberOfRolls; i++){
			cout << "Result " << (i + 1) << ": " << die.genNumber() << endl;
		}
	}

};