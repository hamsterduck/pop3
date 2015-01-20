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
	std::string m_data;
	int m_size;

public:

};


#endif