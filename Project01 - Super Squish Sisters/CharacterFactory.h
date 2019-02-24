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

#include "Game.h"

#include <iostream>
using std::cout;
using std::endl;

class CharacterFactory {
public:   
    CharacterFactory();
    CharacterFactory(const CharacterFactory& orig);
    virtual ~CharacterFactory();
    
    
    virtual void SetAttributes(string line, vector<Character>* characters) const=0;
//    virtual void SetVaringVar(string line, vector<Character>* characters) const=0;
//    void SetAttributes(string line);
};

#endif /* CHARACTERFACTORY_H */

