#include <cstdlib>
#include <ctime>

int RandomNumber () {
	srand(time(NULL));
	int n = rand() % 100;

	return n;
}
