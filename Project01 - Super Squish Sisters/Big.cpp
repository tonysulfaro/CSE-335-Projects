/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Big.cpp
 * Author: tonys
 * 
 * Created on February 23, 2019, 12:27 PM
 */

#include "Big.h"

#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::left;
using std::setw;

Big::Big(string name, double weight, string speed, double hair_length, string race, string skill):Character(name,weight,speed,hair_length,race) {
    m_special_skill = skill;
}

Big::~Big() {
}

void Big::setSpecialSkill(string skill){
    m_special_skill = skill;
}

string Big::getSpecialSkill(){
    return m_special_skill;
}

void Big::print() const{
    cout << "Name: " << setw(15) << left << m_name  
            << "Weight: " << setw(10) << left << m_weight 
            << "Size: " << setw(8) << left << m_size
            << "Speed: " << setw(5) << left <<  m_speed 
            << "HairLen: " << setw(5) << left << m_hair_length 
            << "Race: " << setw(12) << left << m_race
            << "Skill: " << setw(10) << left << m_special_skill
            << endl;
}
