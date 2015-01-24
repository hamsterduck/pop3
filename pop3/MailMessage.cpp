#include<iostream>

#include "MailMessage.h"

using namespace std;

//Ctor
MailMessage::MailMessage(std::string fileName){
}

//getters
int MailMessage::getId() const{
	return m_msgId;
}
std::string MailMessage::getMailFrom() const{
	return m_from;
}
std::string MailMessage::getMailTo() const{
	return m_to;
}
DateTime MailMessage::getMailTime() const{
	return m_mailTime;
}
std::string MailMessage::getMailBody() const{
	return m_mailBody;
}
int MailMessage::getMailSize() const{
	return m_size;
}

//Dtor
MailMessage::~MailMessage(){

}

bool MailMessage::validateSize(){

}
bool MailMessage::validateMailAddress(){

}
void MailMessage::printMailMessage(){

}