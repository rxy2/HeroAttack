//
//  weapon.h
//  QQChong
//
//  Created by 任欣禹 on 2021/2/11.
//

#ifndef weapon_h
#define weapon_h

class weapon
{
protected:
    std::string weaponName;
    int minAD;
    int maxAD;
public:
    weapon();
    weapon(std::string weaponName,int minAd,int maxAd);
    virtual int GetAttackValue();
    std::string getWeaponName();
};



#endif /* weapon_h */
