#include "score.h"

Score::Score()
{
	Chinese = 60;
	English = 60;
	Mathematics = 60;
}

Score::Score(float ch,float en,float ma)
{
	Chinese = ch;
	English = en;
	Mathematics = ma;
}

float Score:: sum()
{
	return Chinese + English + Mathematics;
}
void Score::print()
{
	cout << "语文成绩：" << Chinese << endl;
	cout << "英语成绩：" << English << endl;
	cout << "数学成绩：" << Mathematics << endl;
	cout << "总成绩：" << sum() << endl;
}
void Score::modify(float chinese, float english, float mathematics)
{
	Chinese = chinese;
	English = english;
	Mathematics = mathematics;
}

Student::Student():MyScore()
{
	Num = '\0';
	Name = '\0';
}
Student::Student(string a, string b) : MyScore()
{
	Num = a;
	Name = b;
}
void Student::print()
{	    
	    cout << "学号：" << Num << endl;
		cout << "姓名：" << Name << endl;
		MyScore.print();
}
void Student::modify(string a, string b, float c, float d, float e)
{
	Num = a;
	Name = b;
	MyScore.modify(c, d,e);
}
