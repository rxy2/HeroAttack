//
//  main.cpp
//  QQChong
//
//  Created by 任欣禹 on 2021/2/11.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "hero.h"
#include "weapon.h"
#include "jgb.h"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    weapon fswyj("fswyj",10,40);
    jgb Jgb("jgb",10,30,40);
    hero wwj("wwj",200,5);
    hero nageshui("nageshui",250,4);
    
    wwj.getWeapon(&fswyj);
    wwj.getWeapon(&Jgb);
    nageshui.getWeapon(&Jgb);
    
    
    srand(time(NULL));
    
    int firstorlast = rand()%2;
    cout << "first or last "<<firstorlast<<endl;
    
    while (1) {
        
        if(firstorlast == 0)
        {
            nageshui.attack(wwj);
            if(wwj.getHP() <= 0)
            {
                cout<<wwj.getHeroName()<<"game over"<<endl;
                cout<<nageshui.getHeroName()<<"wwj win"<<endl;
                break;
            }
            cout <<endl;
            sleep(2);
            firstorlast = 1;
        }
        wwj.attack(nageshui);
        
        if(nageshui.getHP() <= 0)
        {
            cout<<nageshui.getHeroName()<<"game over"<<endl;
            cout<<wwj.getHeroName()<<"wwj win"<<endl;
            break;
        }
        cout<<endl;
        sleep(2);
        
        nageshui.attack(wwj);
        if(wwj.getHP() <= 0)
        {
            cout<<wwj.getHeroName()<<"game over"<<endl;
            cout<<nageshui.getHeroName()<<"wwj win"<<endl;
            break;
        }
        cout <<endl;
        sleep(2);
    }
    return 0;
}
