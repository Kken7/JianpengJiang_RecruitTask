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
	cout << "���ĳɼ���" << Chinese << endl;
	cout << "Ӣ��ɼ���" << English << endl;
	cout << "��ѧ�ɼ���" << Mathematics << endl;
	cout << "�ܳɼ���" << sum() << endl;
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
	    cout << "ѧ�ţ�" << Num << endl;
		cout << "������" << Name << endl;
		MyScore.print();
}
void Student::modify(string a, string b, float c, float d, float e)
{
	Num = a;
	Name = b;
	MyScore.modify(c, d,e);
}
