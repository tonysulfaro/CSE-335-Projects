/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Small.h
 * Author: tonys
 *
 * Created on February 17, 2019, 11:18 PM
 */

#ifndef SMALL_H
#define SMALL_H

#include "Character.h"

#include <string>

using std::string;

class Small: Character{
public:
    Small(string name, double weight, string speed, int hair_length, string race, bool gun_equipped);

    virtual ~Small();
    
    void print();
    void equipGun();
    void unEquipGun();
private:
    string m_size = "small";
    bool m_gunEquipped = false;
    
};

#endif /* SMALL_H */

