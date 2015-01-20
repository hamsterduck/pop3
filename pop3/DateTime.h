#ifndef DATE_TIME_H
#define DATE_TIME_H

// This class is responsible for managing mailDate data

class DateTime{

private :
	int m_day; // 1-28 || 1-30 || 1-31 
	int m_month; // 1-12
	int m_year;	//this year
	int m_hour;//1-24
	int m_minute; // 0-59
	int m_second; // 0-59

public:
	//Ctor
	DateTime(int day, int month, int year, int hour, int minute, int second) :
		m_day(day),
		m_month(month),
		m_year(year),
		m_hour(hour),
		m_minute(minute),
		m_second(second){
		std::cout << "DateTime Ctor invoked" << std::endl;
	}

	//getters
	int getDay() const;
	int getMonth() const;
	int getYear() const;
	int getHour() const;
	int getMinute() const;
	int getSecond() const;

	//setters
	void setDay(int day, int month);
	void setMonth(int month);
	void setYear(int year);
	void setHour(int hour);
	void setMinute(int minute);
	void setSecond(int second);

	void printDate() const;

	//Dtor

	~DateTime(){
		std::cout << "Default Dtor of DateTime activated" << std::endl;
	}
};


#endif