#include "console interface.cpp"

int main() {
	ConsoleInterface consInt = ConsoleInterface();

	consInt.askForNumberOfRolls();
	consInt.outputResultFromDie();
	system("Pause");
}