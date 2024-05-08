/*
Белоушко Елизавета ПИ 1 курс
2.1	Задан текстовый файл Input.txt, в котором есть некоторые числа.
Создать очередь, в которой будут числа-палиндромы.
Построить новую очередь, продублировав четные числа.
Результат записать в текстовый  файл result.txt. Используя очередь-шаблон.
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
		cout << "Ошибка";
	}
	if (!out.is_open()) {
		cout << "Ошибка";
	}

	queue<int> palindrome;
	queue<int> result;



	system("pause");
	return 0;
}