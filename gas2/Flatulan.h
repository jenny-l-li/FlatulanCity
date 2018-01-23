//
//  Flatulan.hpp
//  gas2
//
//  Created by Jenny Li on 1/10/18.
//  Copyright © 2018 Jenny Li. All rights reserved.
//

#ifndef Flatulan_h
#define Flatulan_h

class City; 

class Flatulan
{
public:
    // Constructor
    Flatulan(City* cp, int r, int c);
    
    // Accessors
    int  row() const;
    int  col() const;
    
    // Mutators
    void move();
    bool possiblyGetConverted();
    
private:
    City* m_city;
    int   m_row;
    int   m_col;
};

#endif 
