#include <iostream>

using namespace std;

int main()
{
	int Q1, Q2, Q3, midlle, last;

	cout << "퀴즈 #1 성적 : ";
	cin >> Q1;
	cout << "퀴즈 #2 성적 : ";
	cin >> Q2;
	cout << "퀴즈 #3 성적 : ";
	cin >> Q3;
	cout << "중간고사 성적 : ";
	cin >> midlle;
	cout << "기말고사 성적 : ";
	cin >> last;
	cout << "===============" << endl << "성적 총합 : " << Q1 + Q2 + Q3 + midlle + last << endl << "===============";

	return 0;
}