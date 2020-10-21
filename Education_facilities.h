#pragma once
#include <iostream> 
#include <Windows.h> 
#include <string.h>
using namespace std;

class education_facility
{
public:
	virtual double get_average_grade() = 0;
	virtual int get_student_amount() = 0;
	virtual void show_facility_type() = 0;
};
class secondary_school : public education_facility
{
public:
	virtual double get_average_grade() = 0;
	virtual void show_facility_type() = 0;
	virtual int get_student_amount() = 0;
	int average_grade;
};
class school : private secondary_school
{
	int average_grade;
	double grade_1 = 8.9;
	double grade_2 = 9.2;
public:
	//school(double grade_1, double grade_2);
	school() {}
	school(double x, double z) : grade_1(x), grade_2(z) {}
	double get_average_grade() override;
	void show_facility_type() override;
	int get_student_amount() override;
};
class gymnasium : private secondary_school
{
	int average_grade;
	double grade_1 = 6.9;
	double grade_2 = 9.0;
public:
	gymnasium(){}
	gymnasium(double x, double z) : grade_1(x), grade_2(z) {}
	double get_average_grade() override;
	void show_facility_type() override;
	int get_student_amount() override;
};
class high_school : public education_facility
{
	int total_amount;
public:
	virtual int get_student_amount() = 0;
	virtual void show_facility_type() = 0;
	virtual double get_average_grade() = 0;
};
class university : private high_school
{
	int total_amount;
	int amount_1 = 40;
	int amount_2 = 50;
public:
	university() {}
	university(int x, int z) : amount_1(x), amount_2(z) {}
	int get_student_amount()override;
	void show_facility_type() override;
	double get_average_grade() override; 
};
class institute : private high_school
{
	int total_amount;
	int amount_1 = 60;
	int amount_2 = 80;
public:
	institute () {}
	institute(int x, int z) : amount_1(x), amount_2(z) {}
	int get_student_amount() override;
	void show_facility_type() override;
	double get_average_grade() override;
};