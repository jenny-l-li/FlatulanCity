//
//  City.hpp
//  gas2
//
//  Created by Jenny Li on 1/10/18.
//  Copyright © 2018 Jenny Li. All rights reserved.
//
#include "globals.h"
#include "History.h"

#ifndef City_h
#define City_h
class Player;
class Flatulan;

class City
{
public:
    // Constructor/destructor
    City(int nRows, int nCols);
    ~City();

    // Accessors
    int     rows() const;
    int     cols() const;
    Player* player() const;
    History& history();
    int     flatulanCount() const;
    int     nFlatulansAt(int r, int c) const;
    bool    determineNewPosition(int& r, int& c, int dir) const;
    void    display() const;

    // Mutators
    bool  addFlatulan(int r, int c);
    bool  addPlayer(int r, int c);
    void  preachToFlatulansAroundPlayer();
    void  moveFlatulans();

private:
    int       m_rows;
    int       m_cols;
    Player*   m_player;
    Flatulan* m_flatulans[MAXFLATULANS];
    History   m_history;
    int       m_nFlatulans;

    // Helper functions
    bool isInBounds(int r, int c) const;
};

#endif
