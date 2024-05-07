// �������� ��������� �� 1 ����
/*
������ ��� ������ ��������� �������� ��� ������ ��������.
������ ������ �������� �������� � �����������:
- �������;
- ���;
- ����������� (���������, �������, ������).
������ ������ �������� ���������� ������ ������, ����� ��
������� ����� ���� �� ��� ���.
��������� ������ ������������:
- ��������� ���� ����� � ������������ �� ��� ��������� ������;
- ������ �� ��������� ������� �� ������ ������� �����:
�) ������� ������ ������ 40 ���, ������� ������
�����������, �������� �� �� ������ ������;
�) ������� ������ ������ 30 ���, ������� �������
�����������, �������� ��� �� ������ ������;
�) ������� ������ ������ 25 ���, ������� ���������
�����������, �������� �� �� ������ ������;
�) ����� ���� ����� � ������� �� ������� � �������.
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
	return r.gender == "�������" && r.age >= 40 && r.education == "������" && r.answer == "��";
}
bool q2(Respondent r) {
	return r.gender == "�������" && r.age <= 30 && r.education == "�������" && r.answer == "���";
}
bool q3(Respondent r) {
	return r.gender == "�������" && r.age <= 25 && r.education == "���������" && r.answer == "��";
}

int main() {
	setlocale(LC_ALL, "rus");

	list<Respondent> respondents;

	respondents.push_back({ 50, "�������", "������", "��" });
	respondents.push_back({ 22, "�������", "�������", "���" });
	respondents.push_back({ 17, "�������", "���������", "��" });
	respondents.push_back({ 55, "�������", "������", "���" });
	respondents.push_back({ 25, "�������", "�������", "��" });
	respondents.push_back({ 15, "�������", "���������", "���" });
	respondents.push_back({ 60, "�������", "������", "��" });
	respondents.push_back({ 30, "�������", "�������", "���" });
	respondents.push_back({ 16, "�������", "���������", "��" });
	respondents.push_back({ 65, "�������", "������", "��" });

	int count1 = count_if(respondents.begin(), respondents.end(), q1);
	int count2 = count_if(respondents.begin(), respondents.end(), q2);
	int count3 = count_if(respondents.begin(), respondents.end(), q3);

	for (const auto& r : respondents) {
		cout << "�������: " << r.age << ", ���: " << r.gender << ", �����������: " << r.education << ", �����: " << r.answer << endl;
	}

	cout << endl;

	cout << "���������� ������ ������ 40 ���, ������� ������ �����������, ������� �������� �� �� ������ ������: " << count1 << endl;
	cout << "���������� ������ ������ 30 ���, ������� ������� �����������, ������� �������� ��� �� ������ ������: " << count2 << endl;
	cout << "���������� ������ ������ 25 ���, ������� ��������� �����������, ������� �������� �� �� ������ ������: " << count3 << endl;

	system("pause");
	return 0;
}