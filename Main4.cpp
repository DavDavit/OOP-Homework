#include "User.h"
#include <iostream>

int main() {
    User user("anun.azganun@gmail.com", "11111111", "Tom Holland");

    std::cout << "Email: " << user.getEmail() << std::endl;
    std::cout << "Password(visible): " << user.getPassword() << std::endl;
    std::cout << "Full Name: " << user.getFullName() << std::endl;

    if (user.changePassword("11111111", "new11111")) {
        std::cout << "Password has been changed successfully!" << std::endl;
    } else {
        std::cout << "Process of changing the password failed..." << std::endl;
    }

    if (user.updateEmail("new11111", "tom.holland@newdomain.com")) {
        std::cout << "Email has been updated successfully!" << std::endl;
    } else {
        std::cout << "Email update failed..." << std::endl;
    }

    std::cout << "New email is " << user.getEmail() << std::endl;

    return 0;
}