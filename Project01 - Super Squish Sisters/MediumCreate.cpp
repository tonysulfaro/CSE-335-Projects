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
    MediumCreate::SetAttributes(s, v);
}

//MediumCreate::MediumCreate(const MediumCreate& orig) {
//}
//
//MediumCreate::~MediumCreate() {
//}

void MediumCreate::SetAttributes(string line, vector<Character>* characters) const{
    string name, toss_size, weight, speed, hair_length, race, melee_weapon;

    istringstream iss (line);
    iss >> name >> toss_size >> weight >> speed >> hair_length >> race >> melee_weapon;
//    cout << name << " | " << std::stod(weight)<< " | " << speed<< " | "<<std::stoi(hair_length)<< " | "<<race<< " | "<<melee_weapon<<endl;
//    cout << "**********" << endl;

//    Medium * m = new Medium(name, std::stod(weight), speed, std::stoi(hair_length), race, melee_weapon);
//    characters->push_back(m);
    
//    Medium m(name, std::stod(weight), speed, std::stoi(hair_length), race, melee_weapon);
////    m.print();
//    characters->push_back(m);

    characters->push_back(Medium(name, std::stod(weight), speed, std::stoi(hair_length), race, melee_weapon));
    
    cout << characters->size() << endl;
}
