#include <iostream>
#include "Slime.h"

using namespace std;

void Slime::attack(Enemy& enemy)
{
	enemy.damage(1);
}

void Slime::playBase(Enemy& enemy)
{
	// A -> Bへ攻撃
	cout << "スライムの体当たり！" << endl;
	attack(enemy);
}
