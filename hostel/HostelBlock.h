/**
 * @file    HostelBlock.h
 * @brief   Hostel block made of room objects
 * @author  Ahmed Habib (042) Ali Hammad (029)
 * @course  CS-104L: Object-Oriented Programming
 * @inst    HITEC University Taxila
 * @date    2026-06-05
 *
 * OOP Concepts: Composition, Arrays of Objects
 */

#ifndef HOSTELBLOCK_H
#define HOSTELBLOCK_H

#include "Room.h"
#include <string>
using namespace std;

const int MAX_BLOCK_ROOMS = 20;

class HostelBlock {
private:
    string blockName;
    Room rooms[MAX_BLOCK_ROOMS];
    int roomCount;

public:
    HostelBlock();
    HostelBlock(string name);

    bool addRoom(Room room);
    bool removeRoom(int roomNumber);
    void clearRooms();
    Room* getRoom(int index);
    const Room* getRoom(int index) const;
    int getRoomCount() const;
    int getTotalOccupants() const;
    Room* findRoomByStudent(string rollNo);
    Room* findRoomByNumber(int roomNumber);
    string getBlockName() const;
    void displayBlock() const;
};

#endif
