//
//  jgb.h
//  QQChong
//
//  Created by 任欣禹 on 2021/2/11.
//

#ifndef jgb_h
#define jgb_h

#include "weapon.h"
#include <string>

class jgb : public weapon
{
private:
    int rate;
public:
    jgb(std::string weaponName,int minAd,int maxAd,int rate);
    int GetAttackValue();
};

#endif /* jgb_h */
