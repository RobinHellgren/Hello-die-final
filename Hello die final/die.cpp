#include <cstdlib>
#include <ctime>

class Die{
	int maxRange;
	int minRange;
public:
	Die(int maxRange, int minRange){
		this->maxRange = maxRange;
		this->minRange = minRange;
		srand((int)time(0));
	}
	int genNumber() {
		int result = (rand() %maxRange) + minRange;
		return result;
	}

};