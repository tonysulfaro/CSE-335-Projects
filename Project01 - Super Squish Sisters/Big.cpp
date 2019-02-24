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

using std::cout;
using std::endl;

Big::Big(string name, double weight, string speed, int hair_length, string race, string skill):Character(name,weight,speed,hair_length,race) {
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

void Big::print(){
    cout << m_name << m_weight << m_speed << m_hair_length << m_race << m_special_skill << endl;
}
