/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: tonys
 *
 * Created on February 10, 2019, 4:42 PM
 */

#include <cstdlib>
#include "Game.h"

#include "Character.h"
#include "Small.h"
#include "Medium.h"
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{   
    
    Game game = Game("sisters.txt");
    
    game.getCharacters();
    
    game.getCharactersByRace();
    
    game.getCharactersBySpeed();

    game.getCharactersByHair();
    
    game.getCharacters();
    
    Character c = Character("character1", 239.99, "13", 4, "nord");
    Small s = Small("small 1", 23.5,"44",6,"sanic",true);
    Medium m = Medium("med1",65.33333,"33",6,"chub","shaft");
    
    c.print();
    s.print();
    m.print();
    
    return 0;
}
