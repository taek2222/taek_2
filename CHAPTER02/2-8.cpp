// �������� 2-8
#include <iostream>

using namespace std;

int main() {
	int i, number;

	cout << "������ �Է��Ͻÿ� : ";
	cin >> number;

	for (i = 1; i <= number; i++) {
		if (number % i == 0)
			cout << i << " ";
	}
	return 0;
}