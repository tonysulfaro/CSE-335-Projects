/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MediumCreate.h
 * Author: baile
 *
 * Created on February 23, 2019, 1:54 PM
 */

#ifndef MEDIUMCREATE_H
#define MEDIUMCREATE_H

#include "CharacterFactory.h"
#include "Medium.h"


class MediumCreate : public CharacterFactory{
public:
    MediumCreate(string s, vector<Character>* c);
//    MediumCreate(const MediumCreate& orig);
//    virtual ~MediumCreate();
    void SetAttributes(string line, vector<Character>* characters) const;
};

#endif /* MEDIUMCREATE_H */

