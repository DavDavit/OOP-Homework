#ifndef USER_H
#define USER_H

#include <string>

class User {
    private:
    std::string email;
    std::string password;
    std::string fullname;

    bool isPasswordValid(const std::string& pwd) const;

    public:
    User(const std::string& email, const std::string& password, const std::string& fullname);

    std::string getEmail() const;
    std::string getPassword() const;
    std::string getFullName() const;
    

    bool setEmail(const std::string& newEmail);
    bool setPassword(const std::string& newPassword);
    bool setFullName(const std::string& newFullName);

    bool changePassword(const std::string& oldPassword, const std::string& newPassword);
    bool updateEmail(const std::string& currentPassword, const std::string& newEmail);
};

#endif