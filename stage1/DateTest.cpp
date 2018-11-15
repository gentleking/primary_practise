#include <iostream>
#include "User.h"
#include "Date.h"
using namespace std;

void printDate(Date d) {
    cout << d.getYear() << " " << d.getMonth() << " " << d.getDay() << " " << d.getHour() << " " << d.getMinute() << endl;
}
void setDate(Date& d, int year, int month, int day, int hour, int minute) {
    d.setYear(year);
    d.setMonth(month);
    d.setDay(month);
    d.setHour(hour);
    d.setMinute(minute);
}
int main() {
	int year, month, day, hour, minute;
    year = 1995;
    month = 5;
    day = 21;
    hour = 3;
    minute = 3;
    Date d1;
    Date d2(year, month, day, hour, minute);
    printDate(d1);
    printDate(d2);
    setDate(d1, 90, 20, 32, 61, 61);
    setDate(d2, 1996, 2, 29, 23, 59);
    printDate(d1);
    printDate(d2);
    cout << "d1 is valid?" << Date::isValid(d1) << endl;
    cout << "d2 is valid?" << Date::isValid(d2) << endl;
    cout << Date::dateToString(d1) << endl;
    cout << Date::dateToString(d2) << endl;
    string str1 = "2016-5-1/6:10";
    string str2 = "1058-12-10/23:5";
    d1 = Date::stringToDate(str1);
    d2 = Date::stringToDate(str2);
    printDate(d1);
    printDate(d2);
    return 0;
}
