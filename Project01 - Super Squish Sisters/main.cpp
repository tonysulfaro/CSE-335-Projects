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
#include "Big.h"
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{

    Game game = Game("sisters.txt");
<<<<<<< HEAD

    game.getCharacters();
    
    game.getCharactersByRace();
    
    game.getCharactersBySpeed();

    game.getCharactersByHair();
=======
    
//    game.getCharacters();
//    
//    game.getCharactersByRace();
//    
//    game.getCharactersBySpeed();
//
//    game.getCharactersByHair();
//    
//    game.getCharacters();
>>>>>>> tony
    
    Small s("small 1", 23.5,"44",6,"sanic",true);
    Medium m("med1",65.33333,"33",66,"chub","shaft");
    Big b("big1",6969.420,"44",62,"chonk","crush");
    
//    c.print();
//    s.print();
//    m.print();
//    b.print();
    
    //game.addSister(c);
    game.addSister(s);
    game.addSister(m);
    game.addSister(b);
    
    game.getCharacters();
   
    game.getCharactersByRace();
    
    game.getCharactersBySpeed();

    game.getCharactersByHair();
    
    return 0;
}
