#include <iostream>

using namespace std;

int main()
{
	int h, m, s;

	cout << "�� : ";
	cin >> h;
	cout << "�� : ";
	cin >> m;
	cout << "�� : ";
	cin >> s;
	cout << "��ü �� : " << (h * 3600) + (m * 60) + s;

	return 0;
}