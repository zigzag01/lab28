/*
�������� ��������� �� 1 ����
3.1	������ ������. ������ ���������� ����� N �������, �� ������� ������� ������,
� ���������  ������������ �� ������� ������� ������� �� 2 �� N.
���������, ������� � ����-��, ����� ���� �� M. �������, �� ������� ����������� ����, ������� �� �����.
���� ������������ �� ���������� �������� � ��� �� ��� ���, ���� �� ��������� ���� �������.
���������� ����� ����������� ��������, ���� �������� M � ��, ��� ���� ��������� � ������� ��������.
��������� �������� � ���������  ����.
*/

#include <iostream>
#include <fstream>
#include <list>
#include <algorithm>
#include <string>
using namespace std;

int josefFunc(int n, int m) {
	list<int> people;
	for (int i = 1; i <= n; i++) {
		people.push_back(i);
	}

	auto it = people.begin();
	while (people.size() > 1) {
		for (int count = 1; count < m; ++count) {
			++it;
			if (it == people.end()) {
				it = people.begin();
			}
		}
		it = people.erase(it);
		if (it == people.end()) {
			it = people.begin();
		}
	}
	return people.front();
}

int main() {
	setlocale(LC_ALL, "rus");

	ofstream out("Output.txt");
	out.open("Output.txt");
	if (!out.is_open()) {
		cout << "������";
	}

	int N, M;
	cout << "������� ���������� �����: " << endl;
	cin >> N;
	cout << "������� ���: " << endl;
	cin >> M;

	int lastPerson = josefFunc(N, M);
	cout << "��������� �������: " << lastPerson << endl;
	out << "��������� �������: " << lastPerson;

	out.close();
	system("pause");
	return 0;
}