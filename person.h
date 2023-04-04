/**
 * ID:403634/10/1
 * Name:royd
 * Last Name:simusokwe
 * Course:secure programming 2
 * Program:computer science
 * Term:1
 * Year:3
 * Issued: 1/April/2023
 * filename: main.cpp
 */
#ifndef PERSON_H
#define PERSON_H
#include <iostream>

class Person
{
    std::string firstName;
    std::string lastName;
    int age;
    std::string occupationName;
    std::string maritalStatus;

public:
    Person() = default;
    Person(std::string firstName,std::string lastName,
    int age,
    std::string occupationName,
    std::string maritalStatus);

    
    void get_firstName();
    void get_lastName();
    void get_age();
    void get_occupationNname();
    void get_maritalStatus();

    
    void set_firstName(std::string firstName);
    void set_lastName(std::string lastName);
    void set_age(int age);
    void set_occupationNname(std::string occupationName);
    void set_maritalStatus(std::string maritalStatus);
};
#endif 
#endif