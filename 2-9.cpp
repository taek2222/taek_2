#include <iostream>

using namespace std;

int main() {
	int temperature = 0;
	double c;

	for (; temperature <= 100; temperature += 10) {
		c = (temperature - 32.0) * 5.0 / 9.0;
		cout << temperature << "	   " << c << endl;
	}
	return 0;
}