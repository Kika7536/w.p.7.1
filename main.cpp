#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");

	cout << "задание 1.  осмический симул€тор." << endl;
	cout << "------------------------------------------" << endl << endl;

	float F, m, t;

	cout << "¬ведите массу корабл€: ";
	cin >> m;

	cout << "¬ведите силу т€ги двигател€: ";
	cin >> F;
 
	cout << "¬ведите врем€: ";
	cin >> t;

	cout << "„ерез " << t << " секунд корабль переместитс€ на " << (F / m) * (t * t) / 2 << " метров." << endl;
	

}