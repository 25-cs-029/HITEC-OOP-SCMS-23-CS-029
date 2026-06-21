/**
 * @file    Reportable.h
 * @brief   Abstract reporting interface
 * @author  Ahmad Habib 042 Ali HAmmad 029
 * @course  CS-104L: Object-Oriented Programming
 * @inst    HITEC University Taxila
 * @date    2026-06-05
 *
 * OOP Concepts: Abstract Class, Virtual Inheritance
 */

#ifndef REPORTABLE_H
#define REPORTABLE_H

#include "Accommodation.h"

class Reportable : virtual public CampusService {
public:
    virtual void generateReport() const = 0;
};

#endif
