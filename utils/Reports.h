
#ifndef REPORTS_H
#define REPORTS_H

#include "../person/Student.h"
#include "../person/PersonManager.h"
#include "../course/CourseManager.h"
#include "../library/Library.h"
#include "../finance/FinanceManager.h"
#include "../hostel/HostelManager.h"
#include <string>
using namespace std;

namespace Reports {
    void sortStudentsByGPA(Student* students[], int count);
    void showStudents(Student* students[], int count);
    Student* findStudentByRollNo(Student* students[], int count, string rollNo);
    void showTopStudent(Student* students[], int count);
    void showCampusSummary(PersonManager& personManager, CourseManager& courseManager,
                           Library& library, FinanceManager& financeManager,
                           HostelManager& hostelManager);
    void showUtilityInfo();
    void generateCampusTextReport(PersonManager& personManager, CourseManager& courseManager,
                                  Library& library, FinanceManager& financeManager,
                                  HostelManager& hostelManager, string fileName);
    void generatePdfStyleTextReport(PersonManager& personManager, CourseManager& courseManager,
                                    Library& library, FinanceManager& financeManager,
                                    HostelManager& hostelManager, string fileName);
}

#endif
