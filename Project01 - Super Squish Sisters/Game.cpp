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
#include "SmallCreate.h"
#include "MediumCreate.h"
#include "BigCreate.h"

#include <iostream>
#include <vector>

using std::cout;
using std::endl;

// TODO: remove this
using namespace std;

Game::Game(string fileName) {
    // read in data
    ifstream inFile(fileName);
    string line;
    string skip;
    string size;

    //Checked out
    while(getline(inFile,line)){
        istringstream iss (line);
        iss >> skip >> size;
        
        if (size == "small"){
            SmallCreate(line, &m_sisters);
        }
        else if (size == "med"){
            MediumCreate(line, &m_sisters);
        }
        else if(size == "big"){
            BigCreate(line, &m_sisters);
        }
    }
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
void Game::getCharacters(){
    cout << "**************************** Printing Sisters ********************************************************************" << endl;
    for(int i = 0; i < m_sisters.size(); ++i){
        m_sisters.at(i).print();
    }
    cout << "******************************************************************************************************************" << endl;
}

// sort sisters
void Game::sort(){

}

// get by race
void Game::getCharactersByRace(){
    cout << "******************** Printing Sisters: Order by Race *************************************************************" << endl;
    
//    vector<Character*> byRace;
//    vector<Character*> temp;
//    
//    std::copy(std::begin(m_sisters), std::end(m_sisters),std::back_inserter(temp));
//    
//    while(temp.size() > 0){
//        
//        Character *min_sister = temp[0];
//        int index = 0;
//        for(int i = 1; i < temp.size(); ++i){
//            Character *sister = temp[i];
//            if (sister->getRace() < min_sister->getRace()){
//                min_sister = sister;
//                index = i;
//            }
//
//        }
//        byRace.push_back(temp[index]);
//        min_sister->print();
//        
//        temp.erase(temp.begin() + index);
//    }
//    for(int i = 0; i < temp.size(); ++i){
//        temp[i]->print();
//    }
//    cout << "******************************************************************************************************************" << endl;
    //return byRace;
}

// get by speed
void Game::getCharactersBySpeed(){
    cout << "******************** Printing Sisters: Order by Speed ************************************************************" << endl;
    
//    vector<Character*> bySpeed;
//    vector<Character*> temp;
//    
//    std::copy(std::begin(m_sisters), std::end(m_sisters),std::back_inserter(temp));
//    
//    while(temp.size() > 0){
//        
//        Character *min_sister = temp[0];
//        int index = 0;
//        for(int i = 1; i < temp.size(); ++i){
//            Character *sister = temp[i];
//            if (sister->getSpeed() < min_sister->getSpeed()){
//                min_sister = sister;
//                index = i;
//            }
//
//        }
//        bySpeed.push_back(temp[index]);
//        min_sister->print();
//        
//        temp.erase(temp.begin() + index);
//    }
//    for(int i = 0; i < temp.size(); ++i){
//        temp[i]->print();
//    }
//    
//    cout << "******************************************************************************************************************" << endl;
    //return bySpeed;
}

// get by hair
void Game::getCharactersByHair(){
    cout << "********************* Printing Sisters: Order by Hair *************************************************************" << endl;
//    vector<Character*> byHair;
//    vector<Character*> temp;
//    
//    std::copy(std::begin(m_sisters), std::end(m_sisters),std::back_inserter(temp));
//    
//    while(temp.size() > 0){
//        
//        Character *min_sister = temp[0];
//        int index = 0;
//        for(int i = 1; i < temp.size(); ++i){
//            Character *sister = temp[i];
//            if (sister->getHair() < min_sister->getHair()){
//                min_sister = sister;
//                index = i;
//            }
//
//        }
//        byHair.push_back(temp[index]);
//        min_sister->print();
//        
//        temp.erase(temp.begin() + index);
//    }
//    for(int i = 0; i < temp.size(); ++i){
//        temp[i]->print();
//    }
//    cout << "******************************************************************************************************************" << endl;
    //return byHair;
}


//void Game::addSister(Character &character){
//    m_sisters.push_back(&character);
//}
