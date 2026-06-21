/**
 * @file    Enrollment.h
 * @brief   Enrollment record between Student and Course
 * @author  Ahmad Habib (25-cs-042), Ali Hammad (---029)
 * @course  CS-104L: Object-Oriented Programming
 * @inst    HITEC University Taxila
 * @date    2026-06-05
 *
 * OOP Concepts: Association, Encapsulation
 */

#ifndef ENROLLMENT_H
#define ENROLLMENT_H

#include "Course.h"
#include "../person/Student.h"
#include <string>
using namespace std;

class Enrollment {
private:
    Student* student;
    Course* course;
    string enrollmentDate;
    string grade;
    string status;

public:
    Enrollment();
    Enrollment(Student* st, Course* c, string date);

    void setGrade(string g);
    void setStatus(string s);
    void setStudent(Student* st);
    void setCourse(Course* c);
    void setEnrollmentDate(string date);
    string getGrade() const;
    string getStatus() const;
    Student* getStudent() const;
    Course* getCourse() const;
    string getEnrollmentDate() const;

    void displayEnrollment() const;
};

#endif
