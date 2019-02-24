/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BigCreate.cpp
 * Author: baile
 * 
 * Created on February 23, 2019, 1:54 PM
 */

#include "BigCreate.h"

BigCreate::BigCreate(string s, vector<Character*>* v) {
    BigCreate::SetAttributes(s, v);
}

//BigCreate::BigCreate(const BigCreate& orig) {
//}
//
//BigCreate::~BigCreate() {
//}

void BigCreate::SetAttributes(string line, vector<Character*>* characters) const{
    string name, toss_size, weight, speed, hair_length, race, skill;

    istringstream iss (line);
    iss >> name >> toss_size >> weight >> speed >> hair_length >> race >> skill;
//    cout << name << " | " << std::stod(weight)<< " | " << speed<< " | "<<std::stoi(hair_length)<< " | "<<race<< " | "<<skill<<endl;
//    cout << "**********" << endl;
//    characters->push_back(Big(name, std::stod(weight), speed, std::stoi(hair_length), race, skill));
}