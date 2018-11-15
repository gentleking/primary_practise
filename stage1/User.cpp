#include <string>
#include "User.h"

using namespace std;

User::User() {
    name_ = "000";
    password_ = "000";
    email_ = "000";
    phone_ = "000";
}

User::User(std::string userName, std::string userPassword,
       std::string userEmail, std::string userPhone) {
    name_ = userName;
    password_ = userPassword;
    email_ = userEmail;
    phone_ = userPhone;
}

std::string User::getName(void) {
    return name_;
}

void User::setName(std::string name) {
    name_ = name;
}
std::string User::getPassword(void) {
    return password_;
}

void User::setPassword(std::string password) {
    password_ = password;
}

std::string User::getEmail(void) {
    return email_;
}

void User::setEmail(std::string email) {
    email_ = email;
}

std::string User::getPhone(void) {
    return phone_;
}

void User::setPhone(std::string phone) {
    phone_ = phone;
}

/* private:
  std::string name_;
  std::string password_;
  std::string email_;
  std::string phone_;
*/
