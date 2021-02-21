//
//  hero.h
//  QQChong
//
//  Created by 任欣禹 on 2021/2/11.
//

#ifndef hero_h
#define hero_h
#include <string>
#include <vector>
#include "weapon.h"

class hero
{
private:
    std::string heroName;
    int HP;
    int attackValue;    //攻击值
    std::vector<weapon *> weapons;
public:
    //属性尽可能少些，掌握基础用法
    hero(std::string name ,int hp ,int ad);
    void attack(hero &another);
    int getHP();
    std::string getHeroName();
    void getWeapon(weapon *weapon);  
};

#endif /* hero_h */
