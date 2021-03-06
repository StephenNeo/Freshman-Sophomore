#include "stdafx.h"
#include "string"
#include <iostream>
#include <iomanip>
using namespace std;

class student
{
public:
	string name;
	float score1;
	float score2;
	float score3;

	student(string s, float s1, float s2, float s3)
	{
		name = s;
		score1 = s1;
		score2 = s2;
		score3 = s3;
	}
	float average()
	{
		return (score1 + score2 + score3) / 3;
	}
};

int main()
{
	student s1("K.Weng", 5, 5, 5);
	student s2("T.Dixon", 4, 3, 2);
	student s3("V.Chu", 3, 4, 5);
	student s4("L.Tson", 4, 3, 4);
	student s5("L.Lee", 3, 4, 3);
	student s6("I.Young", 4, 2, 5);
	student s7("K.Hiro", 4, 2, 1);
	student s8("G.Ping", 4, 4, 4);
	student s9("H.Gu", 2, 3, 4);
	student s10("J.Jon", 5, 4, 3);

	float a1 = (s1.score1 + s2.score1 + s3.score1 + s4.score1 + s5.score1 + s6.score1 
		+ s7.score1 + s8.score1 + s9.score1 + s10.score1) / 10;

	float a2 = (s1.score2 + s2.score2 + s3.score2 + s4.score2 + s5.score2 + s6.score2
		+ s7.score2 + s8.score2 + s9.score2 + s10.score2) / 10;

	float a3 = (s1.score3 + s2.score3 + s3.score3 + s4.score3 + s5.score3 + s6.score3
		+ s7.score3 + s8.score3 + s9.score3 + s10.score3) / 10;

	cout <<"no      name    score1  score2  score3  average"<<endl;

	cout << std::left << setw(8) << "1" << std::left << setw(8) << s1.name
		<< std::left << setw(8) << s1.score1 << std::left << setw(8) << s1.score2
		<< std::left << setw(8) << s1.score3 << std::left << s1.average() << endl;

	cout << std::left << setw(8) << "2" << std::left << setw(8) << s2.name
		<< std::left << setw(8) << s2.score1 << std::left << setw(8) << s2.score2
		<< std::left << setw(8) << s2.score3 << std::left << s2.average() << endl;

	cout << std::left << setw(8) << "3" << std::left << setw(8) << s3.name
		<< std::left << setw(8) << s3.score1 << std::left << setw(8) << s3.score2
		<< std::left << setw(8) << s3.score3 << std::left << s3.average() << endl;

	cout << std::left << setw(8) << "4" << std::left << setw(8) << s4.name
		<< std::left << setw(8) << s4.score1 << std::left << setw(8) << s4.score2
		<< std::left << setw(8) << s4.score3 << std::left << s4.average() << endl;

	cout << std::left << setw(8) << "5" << std::left << setw(8) << s5.name
		<< std::left << setw(8) << s5.score1 << std::left << setw(8) << s5.score2
		<< std::left << setw(8) << s5.score3 << std::left << s5.average() << endl;

	cout << std::left << setw(8) << "6" << std::left << setw(8) << s6.name
		<< std::left << setw(8) << s6.score1 << std::left << setw(8) << s6.score2
		<< std::left << setw(8) << s6.score3 << std::left << s6.average() << endl;

	cout << std::left << setw(8) << "7" << std::left << setw(8) << s7.name
		<< std::left << setw(8) << s7.score1 << std::left << setw(8) << s7.score2
		<< std::left << setw(8) << s7.score3 << std::left << s7.average() << endl;

	cout << std::left << setw(8) << "8" << std::left << setw(8) << s8.name
		<< std::left << setw(8) << s8.score1 << std::left << setw(8) << s8.score2
		<< std::left << setw(8) << s8.score3 << std::left << s8.average() << endl;

	cout << std::left << setw(8) << "9" << std::left << setw(8) << s9.name
		<< std::left << setw(8) << s9.score1 << std::left << setw(8) << s9.score2
		<< std::left << setw(8) << s9.score3 << std::left << s9.average() << endl;

	cout << std::left << setw(8) << "10" << std::left << setw(8) << s10.name
		<< std::left << setw(8) << s10.score1 << std::left << setw(8) << s10.score2
		<< std::left << setw(8) << s10.score3 << std::left << s10.average() << endl;

	cout << std::left << setw(8) << "" << std::left << setw(8) << "average"
		<< std::left << setw(8) << a1 << std::left << setw(8) << a2
		<< std::left << setw(8) << a3 << endl;

	cout << std::left << setw(8) << "" << std::left << setw(8) << "min"
		<< std::left << setw(8) << "2" << std::left << setw(8) << "2"
		<< std::left << setw(8) << "1" << endl;

	cout << std::left << setw(8) << "" << std::left << setw(8) << "max"
		<< std::left << setw(8) << "5" << std::left << setw(8) << "5"
		<< std::left << setw(8) << "5" << endl;

    return 0;
}