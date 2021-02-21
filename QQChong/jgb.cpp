//
//  jgb.cpp
//  QQChong
//
//  Created by 任欣禹 on 2021/2/11.
//

#include <stdio.h>
#include <string>
#include <iostream>
#include "jgb.h"

jgb::jgb(std::string weaponName,int minAd,int maxAd,int rate)
{
    this->weaponName = weaponName;
    this->minAD = minAd;
    this->maxAD = maxAd;
    this->rate = rate;
}

int jgb::GetAttackValue()
{
    int attackValue = weapon::GetAttackValue();
    int r = rand() % 100;
    if (r<rate)
    {
        std::cout<<"暴击!!!!!!";
        return 2 * attackValue;
    }
    else
    {
        return attackValue;
    }
}
