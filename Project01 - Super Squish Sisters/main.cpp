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
    
    return 0;
}
