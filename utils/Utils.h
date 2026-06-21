/**
 * @file    Utils.h
 * @brief   Small helper functions for SCMS
 * @author  Ahmad Habib 042 Ali Hammad 029
 * @course  CS-104L: Object-Oriented Programming
 * @inst    HITEC University Taxila
 * @date    2026-06-05
 *
 * OOP Concepts: Utility Functions, Input Validation
 */

#ifndef UTILS_H
#define UTILS_H

#include <string>
using namespace std;

namespace Utils {
    string getTodayDate();
    void printLine();
    void printSmallLine();
    int checkPositiveInt(int value);
}

#endif
