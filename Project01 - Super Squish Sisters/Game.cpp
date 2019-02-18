/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Game.cpp
 * Author: tonys
 * 
 * Created on February 10, 2019, 6:26 PM
 */

#include "Game.h"
#include "Character.h"

#include <iostream>
#include <vector>

using std::cout;
using std::endl;

// TODO: remove this
using namespace std;

Game::Game(string fileName) {
    // read in data
    cout << fileName << endl;
}

Game::Game(const Game& orig) {
}

Game::~Game() {
}

// initialize sister objects
void Game::ceateSisters(){
    //open file and read in data
}

// print out all sisters
void Game::printSisters(){
}


// sort sisters
void Game::sort(){

}

// get all characters
vector<Character> Game::getCharacters(){
    return m_sisters;
}

// get by race
vector<Character> Game::getCharactersByRace(){
    vector<Character> byRace;
    return byRace;
}

// get by speed
vector<Character> Game::getCharactersBySpeed(){
    vector<Character> bySpeed;
    return bySpeed;
}

// get by hair
vector<Character> Game::getCharactersByHair(){
    vector<Character> byHair;
    return byHair;
}

