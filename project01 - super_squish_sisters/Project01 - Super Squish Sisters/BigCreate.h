/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BigCreate.h
 * Author: baile
 *
 * Created on February 23, 2019, 1:54 PM
 */

#ifndef BIGCREATE_H
#define BIGCREATE_H

#include "CharacterFactory.h"
#include "Big.h"

class BigCreate : public CharacterFactory{
public:
    BigCreate(string s, vector<Character*>* c);
//    BigCreate(const BigCreate& orig);
//    virtual ~BigCreate();
    void SetAttributes(string line, vector<Character*>* characters) const;
};

#endif /* BIGCREATE_H */

