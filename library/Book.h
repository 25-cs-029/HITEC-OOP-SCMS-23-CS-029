/**
 * @file    Book.h
 * @brief   Book class derived from LibraryItem
 * @author  Ahmad Habib (25-cs-042), Ali Hammad (---029)
 * @course  CS-104L: Object-Oriented Programming
 * @inst    HITEC University Taxila
 * @date    2026-06-05
 *
 * OOP Concepts: Inheritance, Runtime Polymorphism
 */

#ifndef BOOK_H
#define BOOK_H

#include "LibraryItem.h"
#include <string>
using namespace std;

class Book : public LibraryItem {
private:
    string isbn;
    string genre;
    int copiesAvailable;

public:
    Book();
    Book(string id, string t, string a, int year, string isbnNo, string g, int copies);

    int getCopiesAvailable() const;
    void setCopiesAvailable(int copies);

    bool isAvailable() const;
    void checkout();
    void checkin();
    void displayItem() const;
    string getSaveLine() const;
};

#endif
