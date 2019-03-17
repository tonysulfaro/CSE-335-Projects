/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SmallCreate.cpp
 * Author: baile
 * 
 * Created on February 23, 2019, 1:54 PM
 */

#include "SmallCreate.h"

SmallCreate::SmallCreate(string s, vector<Character*>* v) {
    SmallCreate::SetAttributes(s, v);
}

//SmallCreate::SmallCreate(const SmallCreate& orig) {
//}
//
//SmallCreate::~SmallCreate() {
//}

void SmallCreate::SetAttributes(string line, vector<Character*>* characters) const{
    string name, toss_size, weight, speed, hair_length, race, gun_equipped;

    istringstream iss (line);
    iss >> name >> toss_size >> weight >> speed >> hair_length >> race >> gun_equipped;
//    cout << name << " | " << std::stod(weight)<< " | " << speed<< " | "<<std::stoi(hair_length)<< " | "<<race<< " | "<<gun_equipped<<endl;
//    cout << "**********" << endl;
    
    bool bool_val = (gun_equipped == "TRUE") ? true : false; 

    Small * s = new Small(name, std::stod(weight), speed, std::stod(hair_length), race, bool_val);
    characters->push_back(s);
    
//    Small s = Small(name, std::stod(weight), speed, std::stoi(hair_length), race, bool_val);
//    characters->push_back(&s);
    
//    characters->push_back(Small(name, std::stod(weight), speed, std::stoi(hair_length), race, bool_val));
}