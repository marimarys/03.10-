#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	//Case1.Дано целое число в диапазоне 1–7.Вывести строку — название дня
		//недели, соответствующее данному числу(1 — «понедельник», 2 — «вторник» и т.д.).
	/*int day;
	cin >> day;
	switch (day) {
	case 1: cout << "monday" << endl; break;
	case 2: cout << "tuesday" << endl; break;
	case 3: cout << "wednesday" << endl; break;
	case 4: cout << "thursday" << endl; break;
	case 5: cout << "friday" << endl; break;
	case 6: cout << "saturday" << endl; break;
	case 7: cout << "sunday" << endl; break;
	default: cout << "wrong day number" << endl;
	}*/
	//Case2.Дано целое число K.Вывести строку - описание оценки, соответствующей числу K(1 — «плохо», 2 — «неудовлетворительно», 3 — «удовлетворительно», 4 — «хорошо», 5 — «отлично»).Если K не лежит в диапазоне 1–5,
		//то вывести строку «ошибка».
	/*int mark;
	cin >> mark;
	switch (mark) {
	case 1: cout << "плохо" << endl; break;
	case 2: cout << "неудовлетворительно" << endl; break;
	case 3: cout << "удовлетворительно" << endl; break;
	case 4: cout << "хорошо" << endl; break;
	case 5: cout << "отлично" << endl; break;
	default: cout << "нет такой отметки" << endl;
	}*/
	//Case3.Дан номер месяца — целое число в диапазоне 1–12(1 — январь, 2 — февраль и т.д.).Вывести название соответствующего времени года(«зима»,
		//«весна», «лето», «осень»).
	/*int month;
	cin >> month;
	switch (month) {
	case 12:
	case 1:
	case 2:cout << "winter" << endl; break;
	case 3:
	case 4:
	case 5:cout << "spring" << endl; break;
	case 6:
	case 7:
	case 8:cout << "summer" << endl; break;
	case 9:
	case 10:
	case 11:cout << "autumn" << endl; break;
	}*/
	//Case4◦Дан номер месяца — целое число в диапазоне 1–12(1 — январь, 2 —
		//	февраль и т.д.).Определить количество дней в этом месяце для невисокосного года.
	/*int month;
	cin >> month;
	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:cout << "31" << endl; break;
	case 4:
	case 6:
	case 9:
	case 11:cout << "30" << endl; break;
	case 2:cout << "28" << endl; break;
	}*/
	/*Case5.Арифметические действия над числами пронумерованы следующим
		образом : 1 — сложение, 2 — вычитание, 3 — умножение, 4 — деление.Дан
		номер действия N(целое число в диапазоне 1–4) и вещественные числа A
		и B(В не равно 0).Выполнить над числами указанное действие и вывести
		результат.*/		/*1	int a;	cin >> a;	if (a == 0) {		cout << "верно" << endl;	}	else {		cout << "не верно" << endl;	}*/	/*2	int a;	cin >> a;	if (a > 0) {		cout << "верно" << endl;	}	else {		cout << "не верно" << endl;
	}*/
	/*3
	int a;
	cin >> a;	if (a < 0) {		cout << "верно" << endl;	}	else {		cout << "не верно" << endl;
	}*/
	/*4
	int a;
	cin >> a;	if (a >= 0) {		cout << "верно" << endl;	}	else {		cout << "не верно" << endl;
	}*/
/*5
int a;
cin >> a;if (a <= 0) {	cout << "верно" << endl;}else {	cout << "не верно" << endl;
}*/
/*6
int a;
cin >> a;if (a != 0) {	cout << "верно" << endl;}else {	cout << "не верно" << endl;
}*/
/*11
int a;
cin >> a;if (a > 0 && a<5) {	cout << "верно" << endl;}else {	cout << "не верно" << endl;
}*/
double a;
cin >> a;if (a == 0 || a==2 ) {	a = a + 7;	cout <<a<< endl;}else {	a = a / 10;	cout << a << endl;
}
}