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
			cout << "ERROR: Day is not valid" << endl;
		}
	}
	if (month == 4 || month == 6 || month == 9 || month == 11){
		if (day > 0 && day <= 30){
			m_day = day;
		}
		else{
			cout << "ERROR: Day is not valid" << endl;
		}
	}
	else if (month < 1){
		cout << "ERROR: Month is not valid" << endl;
	}
	else{
		if (day > 0 && day <= 31){
			m_day = day;
		}
		else{
			cout << "ERROR: Day is not valid" << endl;
		}
	}
}

void DateTime::setMonth(int month){
	if (month > 0 && month < 30){
		m_month = month;
	}
	else{
		cout << "ERROR: Month is not valid" << endl;
	}
}

void DateTime::setYear(int year){
	if (year >= 1969 && year <= 2015){
		m_year = year;
	}
	else{
		cout << "ERROR: Year is not valid" << endl;
	}
}

void DateTime::setHour(int hour){
	if (hour >= 0 && hour <= 24){
		m_hour = hour;
	}else{
		cout << "ERROR: Hour is not valid" << endl;
	}
}

void DateTime::setMinute(int minute){
	if (minute >= 0 && minute < 60){
		m_minute = minute;
	}
	else{
		cout << "ERROR: Minute is not valid" << endl;
	}
}

void DateTime::setSecond(int second){
	if (second >= 0 && second < 60){
		m_second = second;
	}
	else{
		cout << "ERROR: Second is not valid" << endl;
	}
}

void DateTime::printDate() const {}// TODO