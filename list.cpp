/*
Белоушко Елизавета ПИ 1 курс
3.1	Задача Иосифа. Вокруг считающего стоит N человек, из которых выделен первый,
а остальные  занумерованы по часовой стрелке числами от 2 до N.
Считающий, начиная с кого-то, ведет счет до M. Человек, на котором остановился счет, выходит из круга.
Счет продолжается со следующего человека и так до тех пор, пока не останется один человек.
Определить номер оставшегося человека, если известно M и то, что счет начинался с первого человека.
Результат записать в текстовый  файл.
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
		cout << "Ошибка";
	}

	int N, M;
	cout << "Введите количество людей: " << endl;
	cin >> N;
	cout << "Введите шаг: " << endl;
	cin >> M;

	int lastPerson = josefFunc(N, M);
	cout << "Последний человек: " << lastPerson << endl;
	out << "Последний человек: " << lastPerson;

	out.close();
	system("pause");
	return 0;
}