// 연습문제 2-15
#include <iostream>

using namespace std;

int main()
{
	int check, computer;
	srand(time(NULL));
	cout << "가위, 바위, 보 중에 하나를 선택하시오(1, 2, 3) : ";
	cin >> check;
	computer = rand() % 3 + 1;
	cout << "컴퓨터 : " << computer << endl ;

	if (check == computer)
		cout << "비겼습니다!";
	else if (check > computer)
		cout << "사용자가 이겼습니다!";
	else cout << "컴퓨터가 이겼습니다!";

	return 0;
}