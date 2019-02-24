/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Medium.h
 * Author: tonys
 *
 * Created on February 17, 2019, 11:36 PM
 */

#ifndef MEDIUM_H
#define MEDIUM_H

#include "Character.h"

#include <string>

using std::string;

class Medium: public Character {
public:
    Medium(string name, double weight, string speed, int hair_length, string race, string melee_weapon);
    //Medium(const Medium& orig);
    virtual ~Medium();
    
    void print();
private:
    string m_size = "medium";
    string m_meleeWeapon;
};

#endif /* MEDIUM_H */

