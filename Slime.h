#pragma once
#include "Enemy.h"
class Slime :
    public Enemy
{
public:
    void attack(Enemy& enemy);
    void playBase(Enemy& enemy);

};

