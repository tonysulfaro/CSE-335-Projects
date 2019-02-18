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

using namespace std;

Character::Character(string name, double weight, string speed, int hair_length, string race) {
    m_name = name;
    m_weight = weight;
    m_speed = speed;
    m_hair_length = hair_length;
    m_race = race;
}

Character::Character(const Character& orig) {
}

Character::~Character() {
}

void Character::print(){
    cout << m_name << m_weight << m_speed << m_hair_length << m_race << endl;
}