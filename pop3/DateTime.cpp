#include <iostream>
#include "DateTime.h"

using namespace std;

//getters
int DateTime::getDay() const{
	return m_day;
}
int DateTime::getMonth() const{
	return m_month;
}
int DateTime::getYear() const{
	return m_year;
}
int DateTime::getHour() const{
	return m_hour;
}
int DateTime::getMinute() const{
	return m_minute;
}
int DateTime::getSecond() const{
	return m_second;
}

//setters
void DateTime::setDay(int day, int month){
	if (month == 2){
		if (day > 0 && day <= 28){
			m_day = day;
		}else{
			cout << "error reading day - out of range" << endl;
		}
	}
	if (month == 4 || month == 6 || month == 9 || month == 11){
		if (day > 0 && day <= 30){
			m_day = day;
		}
		else{
			cout << "error reading day - out of range" << endl;
		}
	}
	else if (month < 1){
		cout << "error reading month - out of range" << endl;
	}
	else{
		if (day > 0 && day <= 31){
			m_day = day;
		}
		else{
			cout << "error reading day - out of range" << endl;
		}
	}

}
void DateTime::setMonth(int month){
	m_month = month;
}
void DateTime::setYear(int year){
	m_year = year;
}
void DateTime::setHour(int hour){
	m_hour = hour;
}
void DateTime::setMinute(int minute){
	m_minute = minute;
}
void DateTime::setSecond(int second){
	m_second = second;
}

void DateTime::printDate() const {}// TODO