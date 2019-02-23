/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CharacterFactory.h
 * Author: baile
 *
 * Created on February 23, 2019, 1:53 PM
 */

#ifndef CHARACTERFACTORY_H
#define CHARACTERFACTORY_H

#include "game.h"

#include <string>
using std::string;


class CharacterFactory {
protected:
    string name = "bai";
    double weight = 1.0;
    string speed = "fast";
    int hair_length = 3;
    string race = "human";
public:
//    CharacterFactory();
//    CharacterFactory(const CharacterFactory& orig);
//    virtual ~CharacterFactory();
    
    virtual void SetAttributes(string, vector<Character>*) const=0;
    
};

#endif /* CHARACTERFACTORY_H */

