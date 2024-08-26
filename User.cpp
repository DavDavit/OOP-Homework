#include "User.h"
#include <iostream>

bool User::isPasswordValid(const std::string& pwd) const {
    return pwd.length() >= 8;
}

User::User(const std::string& email, const std::string& password, const std::string& fullname) { 
        if(!email.empty()) {
        this->email = email;
    } else {
        std::cerr << "Invalid email provided..." << std::endl;
        this->email = "defaulemail";
    }
    
    if(isPasswordValid(password)) {
        this->password = password;
    } else {
        std::cerr << "Invalid password criteria..." << std::endl;
        this->password = "Defaulpassword";
    }
    
    if(!fullname.empty()) {
        this->fullname = fullname;
    } else {
        std::cerr << "Full name can NOT be empty!" << std::endl;
        this->fullname = "Unknown";
    }
}

std::string User::getEmail() const {
    return email;
}

std::string User::getPassword() const {
    return password;
}

std::string User::getFullName() const {
    return fullname;
}

bool User::setEmail(const std::string& email) {
    if (!email.empty()) {
        this->email = email;
        return true;
    } else {
        std::cerr << "Invalid email provided..." << std::endl;
        return false;
    }
}

bool User::setPassword(const std::string& password) {
    if (isPasswordValid(password)) {
        this->password = password;
        return true;
    } else {
        std::cerr << "Password does not meet criteria..." << std::endl;
        return false;
    }
}

bool User::setFullName(const std::string& fullname) {
    if (!fullname.empty()) {
        this->fullname = fullname;
        return true;
    } else {
        std::cerr << "Full name can NOT be empty!" << std::endl;
        return false;
    }
}

bool User::changePassword(const std::string& oldPassword, const std::string& newPassword) {
    if (oldPassword == password && isPasswordValid(newPassword)) {
        password = newPassword;
        return true;
    } else {
        return false;
    }
}

bool User::updateEmail(const std::string& currentPassword, const std::string& newEmail) {
    if (currentPassword == password && !newEmail.empty()) {
        email = newEmail;
        return true;
    } else {
        return false;
    }
}