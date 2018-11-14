#include<iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include "Date.h"
using namespace std;

int MONTH[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isLeapYear(year) {
	if((year%4==0 && year%100!=0) || year%400==0) {
		return true;
	}
	return false;
}

Date::Date(){
	year_ = 1000;
	month_ = 1;
	day_ = 1;
	hour_ = 0;
	minute_ = 0;
}

Date::Date(int year, int month, int day, int hour, int minute) {
	year_ = year;
	month_ = month;
	day_ = day;
	hour_ = hour;
	minute_ = minute;
}

int Date::getYear(void) const {
	return year_;
}

void Date::setYear(int year) {
	year_ = year;
}

int Date::getMonth(void) const {
	return month_;
}

void Date::setMonth(int month) {
	month_ = month;
}

int Date::getDay(void) const {
	return day_;
}

void Date::setDay(int day) {
	day_ = day;
}

int Date::getHour(void) const {
	return hour_;
}

void Date::setHour(int hour) {
	hour_ = hour;
}

int Date::getMinute(void) const {
	return minute_;
}

void Date::setMinute(int minute) {
	minute_ = minute;
}

bool Date::isValid(Date date) {
//	bool flag = true;
	if(year_ < 1000 || year_ > 9999) {
		return false;
	}	
	if(month_ < 1 || month_ > 12) {
		return false;
	}
	//if(isLeapYear(year_)) {
		//MONTH[1] += 1;
	//}
	if(month_ == 2 && isLeapYear(year_)) {
		if(day_ < 0 || day_ > MONTH[month_-1]+1) {
			return false;
		}
	}
	else {
		if(day_ < 0 || day_ > MONTH[month_-1]) {
			return false;
		}
	}
	if(hour_ < 0 || hour_ > 23) {
		return false;
	}
	if(minute_ < 0 || hour_ > 59) {
		return false;
	}
	return true;
}

Date Date::stringToDate(std::string dateString) {

}

std::string Date::dateToString(Date date) {

}

Date &Date::operator=(const Date& date) {

}

bool Date::operator==(const Date& date) const {

}

bool Date::operator>(const Date& date) const {

}

bool Date::operator<(const Date& date) const {

}

bool Date::operator>=(const Date& date) const {

}

bool Date::operator<=(const Date& date) const {

}

/*
 private:
  int year_;
  int month_;
  int day_;
  int hour_;
  int minute_;
};
*/
