/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Character.cpp
 * Author: tonys
 * 
 * Created on February 17, 2019, 11:14 PM
 */

#include "Character.h"

#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::left;
using std::setw;

Character::Character(){}

//Character::Character(string name, double weight, string speed, int hair_length, string race) {
//    m_name = name;
//    m_weight = weight;
//    m_speed = speed;
//    m_hair_length = hair_length;
//    m_race = race;
//}

Character::Character(const Character& orig) {
}

Character::~Character() {
}

void Character::print(){
    cout << "Name: " << setw(15) << left << m_name  
            << "Weight: " << setw(10) << left << m_weight 
            << "Size: " << setw(8) << left << "TEMP"
            << "Speed: " << setw(5) << left <<  m_speed 
            << "HairLen: " << setw(5) << left << m_hair_length 
            << "Race: " << setw(12) << left << m_race
            << "SPECIAL: " << setw(10) << left << "TEMP"
            << endl;
}