/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Character.h
 * Author: tonys
 *
 * Created on February 17, 2019, 11:14 PM
 */

#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

using std::string;

class Character {
protected:
    string m_name;
    double m_weight;
    string m_speed;
    int m_hair_length;
    string m_race;
public:
    Character();//string name, double weight, string speed, int hair_length, string race);
    Character(const Character& orig);
    virtual ~Character();
    
    void print();
//    int getHair(){return m_hair_length;}
//    string getSpeed(){return m_speed;}
//    string getRace(){return m_race;}
    
private:

};

#endif /* CHARACTER_H */

