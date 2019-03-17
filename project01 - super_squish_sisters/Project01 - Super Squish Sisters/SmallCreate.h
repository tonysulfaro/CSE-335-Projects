/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SmallCreate.h
 * Author: baile
 *
 * Created on February 23, 2019, 1:54 PM
 */

#ifndef SMALLCREATE_H
#define SMALLCREATE_H

#include "CharacterFactory.h"
#include "Small.h"

class SmallCreate : public CharacterFactory{
public:
    SmallCreate(string s, vector<Character*>* c);
//    SmallCreate(const SmallCreate& orig);
//    virtual ~SmallCreate();
    void SetAttributes(string line, vector<Character*>* characters) const;
};

#endif /* SMALLCREATE_H */

