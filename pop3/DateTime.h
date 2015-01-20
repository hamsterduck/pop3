#ifndef DATE_TIME_H
#define DATE_TIME_H

class DateTime{

private :
	int m_day;
	int m_month;
	int m_year;
	int m_minute;
	int m_second;

public:
	int getDay();
	int getMonth();
	int getYear();
	int getMinute();
	int getSecond();

	void setDay();
	void setMonth();
	void setYear();
	void setMinute();
	void setSecond();

	void printDate();
};


#endif