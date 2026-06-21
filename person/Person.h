/**
 * @file    Person.h
 * @brief   Abstract base class for people in SCMS
 * @author  Ahmad Habib (25-cs-042), Ali Hammad (---029)
 * @course  CS-104L: Object-Oriented Programming
 * @inst    HITEC University Taxila
 * @date    2026-06-05
 *
 * OOP Concepts: Abstract Class, Encapsulation, Runtime Polymorphism
 */

#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
protected:
    string name;
    string cnic;
    int age;
    string contact;

public:
    Person();
    Person(string n, string c, int a, string con);
    Person(const Person& other);
    virtual ~Person();

    void setName(string n);
    void setCNIC(string c);
    void setAge(int a);
    void setContact(string con);

    string getName() const;
    string getCNIC() const;
    int getAge() const;
    string getContact() const;

    virtual void displayInfo() const = 0;
    virtual string getPersonType() const = 0;
    virtual string getUniqueID() const = 0;
};

#endif
