#include "birthday.h"
Date::Date()
{
	year = 2022;
	month = 7;
	day = 8;
}
Date::Date(int a, int b, int c)
{
	year = a;
	month = b;
	day = c;

}
Date::Date(const Date& a)
{
	year = a.year;
	month = a.month;
	day = a.day;
}
int Person::numberOfObjects = 0;
Person::Person() :birthDate()
{
	id = 0;
	numberOfObjects++;
}
Person::Person(int a,int b,int c,int d):birthDate(b,c,d)
{
	id = a;
	numberOfObjects++;
}
Person::Person(const Person& a):birthDate(a.birthDate)
{
	id = a.id;
	numberOfObjects++;
}
