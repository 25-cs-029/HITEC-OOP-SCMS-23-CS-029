#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;
class Person{
protected:
    string name;
    string cnic;
    int age;
    string con;
public:
    Person(string n,string c,int a,string con);
    virtual void displayInfo() const=0;
    virtual ~Person();
};
#endif
