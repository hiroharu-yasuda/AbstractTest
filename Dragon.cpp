#include <iostream>
#include "Dragon.h"
#include<time.h>
using namespace std;
void Dragon::setHp(Enemy& enemy) {
	_hp = 85;
}
void Dragon::attack(Enemy& enemy)
{
	enemy.damage(4);
}

void Dragon::playBase(Enemy& enemy)
{
	
		cout << "ドラゴンの攻撃！" << endl;
		attack(enemy);
		cout << "4 のダメージ！" << endl;
}