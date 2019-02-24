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
<<<<<<< HEAD
{

    Game game = Game("sisters.txt");

=======
{   
    
    Game game = Game("sisters.txt");
    
>>>>>>> dev
//    game.getCharacters();
//    
//    game.getCharactersByRace();
//    
//    game.getCharactersBySpeed();
//
//    game.getCharactersByHair();
//    
//    game.getCharacters();

//    Small s("small 1", 23.5,"44",6,"sanic",true);
//    Medium m("med1",65.33333,"33",66,"chub","shaft");
//    Big b("big1",6969.420,"44",62,"chonk","crush");
    
//    c.print();
//    s.print();
//    m.print();
//    b.print();
    
    //game.addSister(c);
<<<<<<< HEAD
=======
    game.addSister(s);
    game.addSister(m);
    game.addSister(b);
    
    game.getCharacters();
   
    game.getCharactersByRace();
    
    game.getCharactersBySpeed();

//    game.getCharacters();
//    
//    game.getCharactersByRace();
//    
//    game.getCharactersBySpeed();
//
//    game.getCharactersByHair();
//    
//    game.getCharacters();
//    
//    Character c = Character("character1", 239.99, "13", 4, "nord");
//    Small s = Small("small 1", 23.5,"44",6,"sanic",true);
//    Medium m = Medium("med1",65.33333,"33",6,"chub","shaft");
//    Big b = Big("big1",6969.420,"44",6,"chonk","crush");
//    
////    c.print();
////    s.print();
////    m.print();
////    b.print();
//    
//    game.addSister(c);
>>>>>>> dev
//    game.addSister(s);
//    game.addSister(m);
//    game.addSister(b);
//    
//    game.getCharacters();
//   
//    game.getCharactersByRace();
//    
//    game.getCharactersBySpeed();
//
//    game.getCharactersByHair();
    
    return 0;
}
