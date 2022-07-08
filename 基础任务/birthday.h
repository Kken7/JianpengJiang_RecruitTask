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
        cout << year << "年" << month << "月" << day << "日" << endl;
    };
};

class Person
{
private:
    int id;						// ID号
    Date birthDate; 				// 出生年月日
    static int numberOfObjects;  // 静态变量，表示Person类的对象数量

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
        cout << "ID:" << id << ' ' << "生日: ";
        birthDate.show();
    }
    static int getNumberOfObjects()
    {
        return numberOfObjects;
    }
};