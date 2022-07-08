#pragma once
#include <iostream>
#include <string>
using namespace std;

class Score
{
private:
	float   Chinese;       // ���Ŀγɼ�
	float	English;       // Ӣ��γɼ� 
	float	Mathematics;   // ��ѧ�γɼ�

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
	string Num;        // ѧ��
	string Name;       // ����
	Score MyScore;     //�ɼ�����

public:
	Student();
	//���ι��캯��
	Student(string nu, string na);
	void print();
	void modify(string num, string name, float chinese, float english, float mathematics);
};
