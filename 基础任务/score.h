#pragma once
#include <iostream>
#include <string>
using namespace std;

class Score
{
private:
	float   Chinese;       // 语文课成绩
	float	English;       // 英语课成绩 
	float	Mathematics;   // 数学课成绩

public:
	Score();
	Score(float ch, float en , float ma);
	float sum();
	void print();
	void modify(float chinese, float english, float mathematics);


	//////////////////////////////////////////////////////
};

class Student
{
private:
	string Num;        // 学号
	string Name;       // 姓名
	Score MyScore;     //成绩对象

public:
	Student();
	//带参构造函数
	Student(string nu, string na);
	void print();
	void modify(string num, string name, float chinese, float english, float mathematics);
};
