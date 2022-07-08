#pragma once
#include <iostream>
#include <string>
using namespace std;
class Date
{
private:
    int year, month, day;

public:
    Date();
    Date(int, int, int);
    Date(const Date& );
    void show()
    {
        cout << year << "��" << month << "��" << day << "��" << endl;
    };
};

class Person
{
private:
    int id;						// ID��
    Date birthDate; 				// ����������
    static int numberOfObjects;  // ��̬��������ʾPerson��Ķ�������

public:
    Person();
    Person(int, int, int, int);
    Person(const Person& a );
    ~Person()
    {
        numberOfObjects--;
    }
    void show()
    {
        cout << "ID:" << id << ' ' << "����: ";
        birthDate.show();
    }
    static int getNumberOfObjects()
    {
        return numberOfObjects;
    }
};