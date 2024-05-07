// Белоушко Елизавета ПИ 1 курс
/*
Анкета для опроса населения содержит две группы вопросов.
Первая группа содержит сведения о респонденте:
- возраст;
- пол;
- образование (начальное, среднее, высшее).
Вторая группа содержит собственно вопрос анкеты, ответ на
который может быть ДА или НЕТ.
Программа должна обеспечивать:
- начальный ввод анкет и формирование из них линейного списка;
- ответы на следующие вопросы на основе анализа анкет:
а) сколько мужчин старше 40 лет, имеющих высшее
образование, ответили ДА на вопрос анкеты;
б) сколько женщин моложе 30 лет, имеющих среднее
образование, ответили НЕТ на вопрос анкеты;
в) сколько мужчин моложе 25 лет, имеющих начальное
образование, ответили ДА на вопрос анкеты;
г) вывод всех анкет и ответов на вопросы в консоль.
*/
#include <iostream>
#include <list>
#include <algorithm>
#include <string>
using namespace std;

struct Respondent
{
	int age;
	string gender;
	string education;
	string answer;
};

bool q1(Respondent r) {
	return r.gender == "мужчина" && r.age >= 40 && r.education == "высшее" && r.answer == "ДА";
}
bool q2(Respondent r) {
	return r.gender == "женщина" && r.age <= 30 && r.education == "среднее" && r.answer == "НЕТ";
}
bool q3(Respondent r) {
	return r.gender == "мужчина" && r.age <= 25 && r.education == "начальное" && r.answer == "ДА";
}

int main() {
	setlocale(LC_ALL, "rus");

	list<Respondent> respondents;

	respondents.push_back({ 50, "мужчина", "высшее", "ДА" });
	respondents.push_back({ 22, "женщина", "среднее", "НЕТ" });
	respondents.push_back({ 17, "мужчина", "начальное", "ДА" });
	respondents.push_back({ 55, "мужчина", "высшее", "НЕТ" });
	respondents.push_back({ 25, "женщина", "среднее", "ДА" });
	respondents.push_back({ 15, "мужчина", "начальное", "НЕТ" });
	respondents.push_back({ 60, "мужчина", "высшее", "ДА" });
	respondents.push_back({ 30, "женщина", "среднее", "НЕТ" });
	respondents.push_back({ 16, "мужчина", "начальное", "ДА" });
	respondents.push_back({ 65, "мужчина", "высшее", "ДА" });

	int count1 = count_if(respondents.begin(), respondents.end(), q1);
	int count2 = count_if(respondents.begin(), respondents.end(), q2);
	int count3 = count_if(respondents.begin(), respondents.end(), q3);

	for (const auto& r : respondents) {
		cout << "Возраст: " << r.age << ", Пол: " << r.gender << ", Образование: " << r.education << ", Ответ: " << r.answer << endl;
	}

	cout << endl;

	cout << "Количество мужчин старше 40 лет, имеющих высшее образование, которые ответили ДА на вопрос анкеты: " << count1 << endl;
	cout << "Количество женщин моложе 30 лет, имеющих среднее образование, которые ответили НЕТ на вопрос анкеты: " << count2 << endl;
	cout << "Количество мужчин моложе 25 лет, имеющих начальное образование, которые ответили ДА на вопрос анкеты: " << count3 << endl;

	system("pause");
	return 0;
}