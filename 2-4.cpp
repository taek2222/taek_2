// �������� 2-4
#include <iostream>

using namespace std;

int main()
{
	int i, number;

	cout << "������ 5�� �Է��Ͻÿ�." << endl;
	for (i = 0; i < 5; i++)
	{
		cout << "������ �Է��Ͻÿ�. : ";
		cin >> number;

		if (number == 5) {
			cout << "5�� �Է��Ͽ�����! ��ǻ�� ��" << endl;
			return 0;
		}
	}
	cout << "�γ����� ���մϴ�. ����� ��" << endl;
	return 0;
}