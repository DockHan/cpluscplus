//
// Created by hanzhiyuan on 2019/11/18.
//

#ifndef CPLUSPLUS_PERSON_H
#define CPLUSPLUS_PERSON_H

#include <vector>
#include <string>

class Person {
private:
    int age_;
    std::string name_;
public:
    Person(int age, std::string name);
    int get_age();
    void set_age(int age);
    std::string get_name();
};

Person::Person(int age, std::string name) {
    age_ = age;
    name_ = name;
}

int Person::get_age() {
    return age_;
}

void Person::set_age(int age) {
    age_ = age;
}

std::string Person::get_name()  {
    return name_;
}

#endif //CPLUSPLUS_PERSON_H
