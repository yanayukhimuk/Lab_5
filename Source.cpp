#include "Education_facilities.h"

// Юхимук = 6 букв. Остаток от деления на 5 = 1. Вариант 2.

int main ()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	school school13;
	cout << "School13 avg grade: " << school13.get_average_grade() << endl;
	gymnasium gymnasium21;
	cout << "Gymnasium 21 avg grade: " << gymnasium21.get_average_grade() << endl; 
	university BrSU;
	cout << "BrSU student amount: " << BrSU.get_student_amount() << endl;
	institute inst56; 
	cout << "Inst56 student amount: " << inst56.get_average_grade() << endl;

	return 0;
}