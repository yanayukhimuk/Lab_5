#include "Education_facilities.h"

//school::school(double grade_1, double grade_2);
double school::get_average_grade()
{
	return (grade_1 + grade_2) / 2.;
}
void school::show_facility_type()
{
	cout << "Школа " << endl;
}
int school::get_student_amount()
{
	return 10;
}
// Gymnasium
double gymnasium::get_average_grade()
{
	return (grade_1 + grade_2) / 2;
}
void gymnasium::show_facility_type()
{
	cout << "Гимназия " << endl;
}
int gymnasium::get_student_amount(){
	return 78;
}
// Univ
int university::get_student_amount()
{
	return amount_1 + amount_2;
}
void university::show_facility_type()
{
	cout << "Университет " << endl;
}
double university::get_average_grade() {
	return 7.7;
}
// Inst
int institute::get_student_amount()
{
	return amount_1 + amount_2;
}
void institute::show_facility_type()
{
	cout << "Институт " << endl;
}
double institute::get_average_grade() {
	return 8.8;
}