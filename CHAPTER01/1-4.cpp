// �������� 1-4
#include <iostream>

using namespace std;

int main()
{
	int L, W, H;

	cout << "���� : ";
	cin >> L;
	cout << "�ʺ� : ";
	cin >> W;
	cout << "���� : ";
	cin >> H;

	cout << "������ ���� : " << L * W * H << endl;
	cout << "������ ǥ���� : " << 2 * ((L * W) + (L * H) + (H * W));

	return 0;
}