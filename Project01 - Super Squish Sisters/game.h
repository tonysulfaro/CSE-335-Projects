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

// TODO: remove this
using namespace std;

class Game {
private:
protected:
    vector <Character> m_sisters;
public:
    Game(string fileName);
    Game(const Game& orig);
    virtual ~Game();
    
    void ceateSisters();
    void printSisters();
    void sort();

    vector<Character> getCharacters();
    vector<Character> getCharactersByRace();
    vector<Character> getCharactersBySpeed();
    vector<Character> getCharactersByHair();
    
};

#endif /* GAME_H */
