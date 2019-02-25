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
#include <iomanip>

using std::cout;
using std::endl;
using std::left;
using std::setw;

Small::Small(string name, double weight, string speed, int hair_length, string race, bool gun_equipped){//:Character(name,weight,speed,hair_length,race){
    m_gunEquipped = gun_equipped;
    
    m_name = name;
    m_weight = weight;
    m_speed = speed;
    m_hair_length = hair_length;
    m_race = race;
}

Small::~Small() {
}

void Small::print(){
    cout << "Name: " << setw(15) << left << m_name  
            << "Weight: " << setw(10) << left << m_weight 
            << "Size: " << setw(8) << left << m_size
            << "Speed: " << setw(5) << left <<  m_speed 
            << "HairLen: " << setw(5) << left << m_hair_length 
            << "Race: " << setw(12) << left << m_race
            << "IsEquipped: " << setw(10) << left << m_gunEquipped
            << endl;
}

void Small::equipGun(){
    m_gunEquipped = true;
}

void Small::unEquipGun(){
    m_gunEquipped = false;
}