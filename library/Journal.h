/**
 * @file    Journal.h
 * @brief   Journal class derived from LibraryItem
 * @author  Ahmad Habib (25-cs-042), Ali Hammad (---029)
 * @course  CS-104L: Object-Oriented Programming
 * @inst    HITEC University Taxila
 * @date    2026-06-05
 *
 * OOP Concepts: Inheritance, Runtime Polymorphism
 */

#ifndef JOURNAL_H
#define JOURNAL_H

#include "LibraryItem.h"
#include <string>
using namespace std;

class Journal : public LibraryItem {
private:
    string issn;
    int volume;
    int issueNumber;

public:
    Journal();
    Journal(string id, string t, string a, int year, string issnNo, int vol, int issue);

    bool isAvailable() const;
    void checkout();
    void checkin();
    void displayItem() const;
    string getSaveLine() const;
};

#endif
