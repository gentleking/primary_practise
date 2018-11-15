#include<iostream>
#include <string>
#include <string>
#include <cstdio>
#include <cstdlib>
#include "Date.h"
using namespace std;

int MONTH[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isLeapYear(int year) {
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
	if(date.year_ < 1000 || date.year_ > 9999) {
		return false;
	}
	if(date.month_ < 1 || date.month_ > 12) {
		return false;
	}
	//if(isLeapYear(year_)) {
		//MONTH[1] += 1;
	//}
	if(date.month_ == 2 && isLeapYear(date.year_)) {
		if(date.day_ < 0 || date.day_ > MONTH[date.month_-1]+1) {
			return false;
		}
	}
	else {
		if(date.day_ < 0 || date.day_ > MONTH[date.month_-1]) {
            return false;
        }
    }
    if(date.hour_ < 0 || date.hour_ > 23) {
		return false;
	}
	if(date.minute_ < 0 || date.hour_ > 59) {
		return false;
	}
	return true;
}

Date Date::stringToDate(std::string dateString) {
    int i = 0, year = 0, month = 0, day = 0, hour = 0, minute = 0;
    while(dateString[i] != '-'){
        year = year * 10 + dateString[i] - '0';
        i++;
    }
    i++;
    while(dateString[i] != '-') {
	month = month * 10 + dateString[i] - '0';
	i++;
    }
    i++;
    while(dateString[i] != '/') {
	day = day * 10 + dateString[i] - '0';
        i++;
    }
    i++;
    while(dateString[i] != ':') {
	hour = hour * 10 + dateString[i] - '0';
        i++;
    }
    i++;
    while(dateString[i] != '\0') {
	minute = minute * 10 + dateString[i] - '0';
        i++;
    }
//    cout << year << " " << month << " " << day << " " << hour << " " << minute << endl;
//    year_ = year;
//    month_ = month;
//    day_ = day;
//    hour_ = hour;
//    minute_ = minute;
    return Date(year, month, day, hour, minute);
}

std::string Date::dateToString(Date date) {
    string temp = "";
    temp = to_string(date.year_);
    if(date.month_ >= 0 && date.month_ <= 9) {
        temp = temp + "-0" + to_string(date.month_);
    }
    else {
        temp = temp + "-" + to_string(date.month_);
    }
    if(date.day_ >= 0 && date.day_ <= 9){
        temp += "-0" + to_string(date.day_);
    }
    else {
        temp += "-" + to_string(date.day_);
    }
    if(date.hour_ >= 0 && date.hour_ <= 9) {
        temp += "/0" + to_string(date.hour_);
    }
    else {
        temp += "/" + to_string(date.hour_);
    }
    if(date.minute_ >= 0 && date.minute_ <= 9) {
        temp += ":0" + to_string(date.minute_);
    }
    else {
        temp += ":" + to_string(date.minute_);
    }
//    temp = temp + "-" + to_string(month_);
//    temp = temp + "-" + to_string(day_);
//    temp = temp + "/" + to_string()
    return temp;
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
