// �������� 2-5
#include <iostream>

using namespace std;

int main() {
	int total = 0, number;

	do
	{
		cout << "������ �Է��Ͻÿ� : ";
		cin >> number;
		total += number;
	} while (number != 0);
	
	cout << "�հ�=" << total;

	return 0;
}