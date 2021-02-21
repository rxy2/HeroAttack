//
//  hero.cpp
//  QQChong
//
//  Created by 任欣禹 on 2021/2/11.
//

#include "hero.h"
#include <iostream>

hero::hero(std::string name,int hp,int ad)
{
    heroName = name;
    HP = hp;
    attackValue = ad;
}

void hero::attack(hero &another)
{
//随机获取一把武器
    int size = weapons.size();
    int index = rand() % size;
    weapon *w = weapons[index];
//获取武器的攻击值
    int attack = w->GetAttackValue();
//计算被攻击者的血量
    another.HP -= attack + attackValue;
    std::cout <<this->heroName<<"使用了"<<w->getWeaponName()<<"对"<<another.heroName<<"造成了"<<attack + attackValue<<"伤害"<<std::endl;
    std::cout<<another.heroName<<"当前血量"<<another.HP<<std::endl;
}

int hero::getHP()
{
    return HP;
}

std::string hero::getHeroName()
{
    return heroName;  //C++类中的公有函数可以返回类中的私有成员变量
}

void hero::getWeapon(weapon *weapon)
{
    weapons.push_back(weapon);
}
