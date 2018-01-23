//
//  Game.hpp
//  gas2
//
//  Created by Jenny Li on 1/10/18.
//  Copyright © 2018 Jenny Li. All rights reserved.
//

#ifndef Game_h
#define Game_h
class City;

class Game
{
public:
    // Constructor/destructor
    Game(int rows, int cols, int nFlatulans);
    ~Game();
    
    // Mutators
    void play();
    
private:
    City* m_city;
};

#endif

