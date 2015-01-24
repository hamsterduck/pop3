#ifndef MAIL_MSG_H
#define MAIL_MSG_H

#include <string>
#include "DateTime.h"


class MailMessage{

private:
	int m_msgId;
	std::string m_from;
	std::string m_to;
	DateTime m_mailTime;
	std::string m_mailBody;
	int m_size;
	const int maxSize;

public:

	//Ctor
	MailMessage(std::string fileName);

	//getters
	int getId() const;
	std::string getMailFrom() const;
	std::string getMailTo() const;
	DateTime getMailTime() const;
	std::string getMailBody() const;
	int getMailSize() const;

	//Dtor
	~MailMessage();

	bool validateSize();
	bool validateMailAddress();
	void printMailMessage();

};


#endif