//
//  History.hpp
//  gas2
//
//  Created by Jenny Li on 1/10/18.
//  Copyright © 2018 Jenny Li. All rights reserved.
//
#include "globals.h"

#ifndef History_h
#define History_h

class History
{
public:
    History(int nRows, int nCols);
    bool record(int r, int c);
    void display() const;
private:
    int m_rows;
    int m_cols;
    int m_history[MAXROWS][MAXCOLS];
    
};

#endif
