/*
�������� ��������� �� 1 ����
2.1	����� ��������� ���� Input.txt, � ������� ���� ��������� �����.
������� �������, � ������� ����� �����-����������.
��������� ����� �������, ������������� ������ �����.
��������� �������� � ���������  ���� result.txt. ��������� �������-������.
*/

#include <iostream>
#include <fstream>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(int number) {
	string numStr = to_string(number);
	string revStr = numStr;
	reverse(revStr.begin(), revStr.end());
	return numStr == revStr;
}

int main() {
	setlocale(LC_ALL, "rus");

	ifstream in("Input.txt");
	ifstream out("Result.txt");

	in.open("Input.txt");
	out.open("Result.txt");
	if (!in.is_open()) {
		cout << "������";
	}
	if (!out.is_open()) {
		cout << "������";
	}

	queue<int> palindrome;
	queue<int> result;



	system("pause");
	return 0;
}