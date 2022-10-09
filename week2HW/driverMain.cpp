#include <iostream>

#include "./headers/employee.h"
#include "./headers/project.h"
#include "./headers/person.h"

int main()
{
    Person person("tony");
    Employee employee("unknown", 'a', 11);
    Project project('b');

    std::cout //<< person << "\n"
              << employee << "\n";
              //<< project << std::endl;

    return 0;
}