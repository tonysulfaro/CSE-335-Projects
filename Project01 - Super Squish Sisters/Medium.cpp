/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Medium.cpp
 * Author: tonys
 * 
 * Created on February 17, 2019, 11:36 PM
 */

#include "Medium.h"

#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::left;
using std::setw;

Medium::Medium(string name, double weight, string speed, int hair_length, string race, string melee_weapon):Character(name,weight,speed,hair_length,race) {
    m_meleeWeapon = melee_weapon;
}

//Medium::Medium(const Medium& orig) {
//}

Medium::~Medium() {
}

void Medium::print() const{
    cout << "Name: " << setw(15) << left << m_name  
            << "Weight: " << setw(10) << left << m_weight 
            << "Size: " << setw(8) << left << m_size
            << "Speed: " << setw(5) << left <<  m_speed 
            << "HairLen: " << setw(5) << left << m_hair_length 
            << "Race: " << setw(12) << left << m_race
            << "Weapon: " << setw(10) << left << m_meleeWeapon
            << endl;
}
