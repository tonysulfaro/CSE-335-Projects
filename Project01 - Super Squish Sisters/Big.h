/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Big.h
 * Author: tonys
 *
 * Created on February 23, 2019, 12:27 PM
 */

#ifndef BIG_H
#define BIG_H

#include "Character.h"

#include <string>

using std::string;

class Big: public Character {
public:
    Big(string name, double weight, string speed, int hair_length, string race, string skill);
    Big(const Big& orig);
    virtual ~Big();
    
    void setSpecialSkill(string skill);
    string getSpecialSkill();
    void print() const;
private:
    string m_special_skill;
    const string m_size = "big";
};

#endif /* BIG_H */

