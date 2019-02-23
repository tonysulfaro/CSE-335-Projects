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
protected:
    string melee_weapon = "sword";
public:
    MediumCreate();
    MediumCreate(const MediumCreate& orig);
    virtual ~MediumCreate();
    
//    virtual Medium SetAttributes(){
//        return Medium("bai", 0.0, "fast", 2, "human", "sword");
//    }
    virtual void SetAttributes(string, vector<Character>*) const=0;
};

#endif /* MEDIUMCREATE_H */

