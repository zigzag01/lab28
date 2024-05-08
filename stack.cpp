/*
�������� ��������� �� 1 ����
1.2	�������� ���������, ������� ������������ ���������� ��������� �����,
� ������� ������ "������", ��������� ����-������.
*/

#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int equalNeibhbourCount(stack<int> s) {
	int count = 0;
	stack<int> st1 = s; // �����
	int prev, curr, next; // ����������, �������, ���������
	
	prev = st1.top();
	st1.pop();
	curr = st1.top();
	st1.pop();

	// ���������� ��-�� �����
	while (!st1.empty()) {
		next = st1.top(); // 
		st1.pop();

		// ���������� �������, ���������� � ���������
		if (prev == curr && curr == next) {
			count++;
		}
		prev = curr;
		curr = next;
	}
	return count;
}

int main() {
	setlocale(LC_ALL, "rus");

	stack<int> s;

	s.push(1);
	s.push(2);
	s.push(2);
	s.push(2);
	s.push(3);
	s.push(3);
	s.push(3);
	s.push(3);

	cout << "���������� ��-��� � ����������� ��������: " << equalNeibhbourCount(s) << endl;

	system("pause");
	return 0;
}