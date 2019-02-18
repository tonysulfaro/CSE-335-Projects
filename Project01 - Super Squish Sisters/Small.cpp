/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Small.cpp
 * Author: tonys
 * 
 * Created on February 17, 2019, 11:18 PM
 */

#include "Character.h"
#include "Small.h"

#include <iostream>

using namespace std;

Small::Small(string name, double weight, string speed, int hair_length, string race, bool gun_equipped):Character(name,weight,speed,hair_length,race){
    m_gunEquipped = gun_equipped;
}

Small::~Small() {
}

void Small::print(){
    cout << m_name << m_weight << m_speed << m_hair_length << m_race << m_gunEquipped << endl;
}

void Small::equipGun(){
    m_gunEquipped = true;
}

void Small::unEquipGun(){
    m_gunEquipped = false;
}