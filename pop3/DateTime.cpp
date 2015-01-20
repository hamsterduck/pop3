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
void DateTime::setDay(int day){
	m_day = day;
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