/*
Белоушко Елизавета ПИ 1 курс
1.2	Написать программу, которая подсчитывает количество элементов стека,
у которых равные "соседи", используя стек-шаблон.
*/

#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int equalNeibhbourCount(stack<int> s) {
	int count = 0;
	stack<int> st1 = s; // копия
	int prev, curr, next; // предыдущий, текущий, следующий
	
	prev = st1.top();
	st1.pop();
	curr = st1.top();
	st1.pop();

	// перебираем эл-ты стека
	while (!st1.empty()) {
		next = st1.top(); // 
		st1.pop();

		// сравниваем текущий, предыдущий и следующий
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

	cout << "Количество эл-тов с одинаковыми соседями: " << equalNeibhbourCount(s) << endl;

	system("pause");
	return 0;
}