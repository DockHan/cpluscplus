#include <iostream>
#include "include/Person.h"

// don't use chinese comments in main function
int main() {
    std::string name("hanzhiyuan");

//    Person person(15, name);
//    std::cout << person.get_age() << person.get_name() << std::endl;

    auto *pPtr = new Person(20, "Json");
    std::cout << pPtr->get_age() << pPtr->get_name() << std::endl;
    delete pPtr;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}