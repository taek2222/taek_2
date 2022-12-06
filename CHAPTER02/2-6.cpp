// 연습문제 2-6
#include <iostream>

using namespace std;

int main()
{
	int i, j, m;

	for (i = 1; i <= 7; i++) {
		for (j = 0; j < i; j++)
			cout << j+1;
		for (m = 7; m > i; m--)
			cout << "*";
		cout << endl;
	}
	return 0;
}