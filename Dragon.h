#pragma once
#include "Enemy.h"
class Dragon :
    public Enemy
{
public:
    void playBase(Enemy& enemy) override;
    void attack(Enemy& enemy) override;
    void setHp(Enemy& enemy)override;

};


