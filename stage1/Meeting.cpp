#include <iostream>
#include "Meeting.h"

using namespace std;

Meeting::Meeting() {
    sponsor_ = "zhang";
    participator_ = "li";
    startDate_ = Date(2018, 1, 1, 0, 0);
    endDate_ = Date(2018, 12, 31, 0, 0);
    title_ = "xxxxxxxx";
}

Meeting::Meeting(std::string sponsor, std::string participator,
          Date startTime, Date endTime, std::string title) {
    sponsor_ = sponsor;
    participator_ = participator;
    startDate_ = startTime;
    endDate_ = endTime;
    title_ = title;
}

std::string Meeting::getSponsor(void) {
    return sponsor_;
}

void Meeting::setSponsor(std::string sponsor) {
    sponsor_ = sponsor;
}

std::string Meeting::getParticipator(void) {
    return participator_;
}

void Meeting::setParticipator(std::string participator) {
    participator_ = participator;
}

Date Meeting::getStartDate(void) {
    return startDate_;
}

void Meeting::setStartDate(Date startTime) {
    startDate_ = startTime;
}

Date Meeting::getEndDate(void) {
    return endDate_;
}

void Meeting::setEndDate(Date endTime) {
    endDate_ = endTime;
}

std::string Meeting::getTitle(void) {
    return title_;
}

void Meeting::setTitle(std::string title) {
    title_ = title;
}

/*
 private:
  std::string sponsor_;
  std::string participator_;
  Date startDate_;
  Date endDate_;
  std::string title_;
*/
