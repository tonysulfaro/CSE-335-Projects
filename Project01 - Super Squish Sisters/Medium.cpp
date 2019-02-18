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

using namespace std;

Medium::Medium(string name, double weight, string speed, int hair_length, string race, string melee_weapon):Character(name,weight,speed,hair_length,race) {
    m_meleeWeapon = melee_weapon;
}

//Medium::Medium(const Medium& orig) {
//}

Medium::~Medium() {
}

void Medium::print(){
    cout << m_name << m_weight << m_speed << m_hair_length << m_race << m_meleeWeapon << endl;
}
