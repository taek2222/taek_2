// �������� 2-15
#include <iostream>

using namespace std;

int main()
{
	int check, computer;
	srand(time(NULL));
	cout << "����, ����, �� �߿� �ϳ��� �����Ͻÿ�(1, 2, 3) : ";
	cin >> check;
	computer = rand() % 3 + 1;
	cout << "��ǻ�� : " << computer << endl ;

	if (check == computer)
		cout << "�����ϴ�!";
	else if (check > computer)
		cout << "����ڰ� �̰���ϴ�!";
	else cout << "��ǻ�Ͱ� �̰���ϴ�!";

	return 0;
}