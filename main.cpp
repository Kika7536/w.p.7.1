#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");

	cout << "������� 1. ����������� ���������." << endl;
	cout << "------------------------------------------" << endl << endl;

	float F, m, t;

	cout << "������� ����� �������: ";
	cin >> m;

	cout << "������� ���� ���� ���������: ";
	cin >> F;
 
	cout << "������� �����: ";
	cin >> t;

	cout << "����� " << t << " ������ ������� ������������ �� " << (F / m) * (t * t) / 2 << " ������." << endl;
	

}