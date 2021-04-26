//
// Created by nikno on 25.04.2021.
//

#ifndef PSS_HOMEWORK5_NOSKOVN_ADMIN_H
#define PSS_HOMEWORK5_NOSKOVN_ADMIN_H


#include "string"
using namespace std;


class Admin {

public:
    Admin(string adminLogin, string adminPassword);

    int id;
    string login,password;
};


#endif //PSS_HOMEWORK5_NOSKOVN_ADMIN_H
