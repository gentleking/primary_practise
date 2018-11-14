#include <iostream>
#include "User.h"

int main() {
	User u1;
	User u2("zhangsan", "123", "123@qq.com0", "321");
	cout << u1.getName() << " " << u1.getPassword() << " " << u1.getEmail() << " " << u1.getPthone() << endl;
	cout << u2.getName() << " " << u2.getPassword() << " " << u2.getEmail() << " " << u2.getPthone() << endl;	
	return 0;
}
