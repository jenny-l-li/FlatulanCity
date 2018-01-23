//
//  History.cpp
//  gas2
//
//  Created by Jenny Li on 1/10/18.
//  Copyright © 2018 Jenny Li. All rights reserved.
//

#include <iostream>
#include <string>
#include <random>
#include <utility>
#include <cstdlib>
#include "globals.h"
#include "History.h"
using namespace std;

History::History(int nRows, int nCols)
: m_rows(nRows), m_cols(nCols)
{
    for (int r = 0; r < nRows; r++)
        for (int c = 0; c < nCols; c++)
            m_history[r][c] = 0;
}

bool History::record(int r, int c) //r and c grid system
{
    if (r < 1 || r > m_rows || c < 1 || c > m_cols )
        return false;
    
    if (m_history[r-1][c-1] > 0)
        m_history[r-1][c-1]++; //count how many
    else
        m_history[r-1][c-1] = 1;
    
//    cerr << "recorded: " << m_history[r-1][c-1] << endl;
    return true;
}

void History::display() const
{
    char grid[MAXROWS][MAXCOLS];
    int r, c;
    
    // Fill the grid with dots
    for (r = 0; r < m_rows; r++)
    {
        for (c = 0; c < m_cols; c++)
        {
            char& gridChar = grid[r][c]; 
            int gridNum = m_history[r][c];
//            cerr << "row " << r << "col " << c << ": " << gridNum << endl;
            if (gridNum > 0 && gridNum < 26)
                gridChar = 64 + gridNum;
            else if (gridNum > 0 && gridNum >= 26)
                gridChar = 'Z';
            else
                grid[r][c] = '.';
        }
    }
    
    // Draw the grid
    clearScreen();
    for (r = 0; r < m_rows; r++)
    {
        for (c = 0; c < m_cols; c++)
            cout << grid[r][c];
        cout << endl;
    }
    cout << endl;
}


