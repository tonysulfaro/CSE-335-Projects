/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MediumCreate.cpp
 * Author: baile
 * 
 * Created on February 23, 2019, 1:54 PM
 */

#include "MediumCreate.h"

MediumCreate::MediumCreate(string s, vector<Character>* v) {
    SetInformation(s);
    string temp;
    istringstream iss (s);
    iss >> temp >> temp >> temp >> temp >> temp >> temp >> melee_weapon;
    MediumCreate::SetAttributes(s, v);
}

MediumCreate::MediumCreate(const MediumCreate& orig) {
}

MediumCreate::~MediumCreate() {
}

void MediumCreate::SetAttributes(string values, vector<Character>* store) const{
    store->push_back(Medium(name,weight,speed,hair_length,race,melee_weapon));
}