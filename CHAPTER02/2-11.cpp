// �������� 2-11
#include <iostream>

using namespace std;

int main()
{
	int total=0, n;

	cout << "n�� ���� �Է��Ͻÿ� : ";
	cin >> n;
	for (int i = 1; i <= n; i++)
		total = total + (i * i);

	cout << "��갪�� " << total << "�Դϴ�.";

	return 0;
}