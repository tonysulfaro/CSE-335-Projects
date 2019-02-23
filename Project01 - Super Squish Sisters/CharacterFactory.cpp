/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CharacterFactoryDELEETE.cpp
 * Author: baile
 * 
 * Created on February 23, 2019, 5:46 PM
 */

#include "CharacterFactory.h"

//CharacterFactory::CharacterFactory() {
//}
//
//CharacterFactory::CharacterFactory(const CharacterFactory& orig) {
//}
//
//CharacterFactory::~CharacterFactory() {
//}

void CharacterFactory::SetInformation(string line){
    string toss_size;
    istringstream iss (line);
    iss >> name >> toss_size >> weight >> speed >> hair_length >> race;
    cout << name << endl;
    
}