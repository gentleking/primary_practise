#include <iostream>
#include "User.h"
using namespace std;

int main() {
	User u1;
	User u2("zhangsan", "123", "123@qq.com0", "321");
	cout << u1.getName() << " " << u1.getPassword() << " " << u1.getEmail() << " " << u1.getPhone() << endl;
	cout << u2.getName() << " " << u2.getPassword() << " " << u2.getEmail() << " " << u2.getPhone() << endl;	
	u1.setName("lisi");
	u1.setPassword("111");
	u1.setEmail("111@qq.com");
	u1.setPhone("111");
	cout << u1.getName() << " " << u1.getPassword() << " " << u1.getEmail() << " " << u1.getPhone() << endl;
	return 0;
}
