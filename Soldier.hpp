#pragma once
#include <iostream>
#include <stdlib.h>

class Soldier{
    public:
    int damage;
    int nop;
    int hp;

    Soldier(){
       this->damage = 0; 
       this->nop = -1; 
       this->hp = 0; 
    }
        Soldier(int damage, int nop,int hp){
       this->damage = damage; 
       this->nop = nop; 
       this->hp = hp; 
    }
};