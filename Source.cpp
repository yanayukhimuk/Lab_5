#include <iostream> 
#include <Windows.h> 
#include <string.h>

using namespace std; 

// Юхимук = 6 букв. Остаток от деления на 5 = 1. Вариант 2.

class education_facility
{ 
public: 
	virtual double get_average_grade() = 0; 
	virtual int get_student_amount() = 0;
};

class secondary_school : public education_facility
{
public: 
	virtual double get_average_grade() = 0; 
	int average_grade; 
	secondary_school() {
	}
};

class school : private secondary_school
{
private: 
	int average_grade_x;
	double grade_1 = 8.9; 
	double grade_2 = 9.2; 
public: 
	school(double x, double z) : grade_1(x), grade_2(z)
	{
	}
	double get_average_grade_x() 
	{
		return (grade_1 + grade_2) / 2;
	}
	void show_secondary_type()
	{
		cout << "Школа "  << endl; 
	}
};

class gymnasium : private secondary_school
{
private:
	int average_grade_z;
	double grade_1 = 6.9;
	double grade_2 = 9.0;
public:
	gymnasium(double x, double z) : grade_1(x), grade_2(z)
	{
	}
	double get_average_grade_z() 
	{
		return (grade_1 + grade_2) / 2; 
	}
	void show_secondary_type()
	{
		cout << "Гимназия "  << endl;
	}
};

class high_school : public education_facility
{
public: 
	virtual int get_student_amount() = 0; 
private: 
	int total_amount;
};

class university : private high_school
{
private:
	int total_amount_x;
	int amount_1 = 40;
	int amount_2 = 50;
public:
	university (int x, int z) : amount_1(x), amount_2(z)
	{
	}
	int get_total_amount_x() 
	{
		return amount_1 + amount_2;
	}
	void show_high_type()
	{
		cout << "Университет " << endl;
	}
};

class institute : private high_school
{
private:
	int total_amount_z;
	int amount_1 = 60;
	int amount_2 = 80;
public:
	institute (int x, int z) : amount_1(x), amount_2(z)
	{
	}
	int get_total_amount_z() 
	{
		return amount_1 + amount_2;
	}
	void show_high_type()
	{
		cout << "Институт " << endl;
	}
};

int main ()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	return 0;
}