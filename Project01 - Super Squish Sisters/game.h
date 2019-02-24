/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Game.h
 * Author: tonys
 *
 * Created on February 10, 2019, 6:26 PM
 */

#ifndef GAME_H
#define GAME_H

#include "Character.h"

#include <iostream>
#include <vector>
#include <string>


#include<fstream>
using std::ifstream;
#include <sstream>
using std::istringstream;
using std::vector;
using std::string;

class Game {
private:
protected:
    vector <Character*> m_sisters;
public:
    Game(string fileName);
    Game(const Game& orig);
    virtual ~Game();
    
    void ceateSisters();
    void sort();
    
    void addSister(Character &character);

    void getCharacters();
    void getCharactersByRace();
    void getCharactersBySpeed();
    void getCharactersByHair();
    
};

#endif /* GAME_H */

