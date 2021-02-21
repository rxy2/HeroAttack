//
//  weapon.cpp
//  QQChong
//
//  Created by 任欣禹 on 2021/2/11.
//

#include <stdio.h>
#include <string>
#include "weapon.h"

weapon::weapon()
{
    
}

weapon::weapon(std::string weaponName,int minAd,int maxAd)
{
    this->weaponName = weaponName;
    this->minAD = minAd;
    this->maxAD = maxAd;
}

int weapon::GetAttackValue()
{
    int attackValue = rand() % (maxAD - minAD) + minAD + 1; //rang一个最大值最小值之间
    return attackValue;
}

std::string weapon::getWeaponName()
{
    return weaponName;
}
