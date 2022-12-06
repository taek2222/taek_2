// 연습문제 2-13
#include <iostream>

using namespace std;

int main()
{
	int n, total = 0, team = 0, team2 = 1;

	cout << "몇 항까지 구할까요 : ";
	cin >> n;
	cout << total << " " << team2 << " ";

	for (int i = 2; i < 10; i++)
	{
		total = team + team2;
		cout << total << " ";
		team = team2;
		team2 = total;
	}
	return 0;
}