// EXERCISE 1-7
#include <iostream>

using namespace std;

int main() {
	int speed = 60;
	double time = 2.5;
	double distance;

	distance = speed * time;

	cout << "속력은 : " << speed  << "(km/h)" << endl;
	cout << "시간은 : " << time << "(h)" << endl;
	cout << "거리는 : " << distance << "(km)" << endl;
}