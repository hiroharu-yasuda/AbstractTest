#include <iostream>
#include "Dragon.h"
#include<time.h>
using namespace std;
void Dragon::setHp(Enemy& enemy) {
	_hp = 100;
}
void Dragon::attack(Enemy& enemy)
{
	enemy.damage(3);
}

void Dragon::playBase(Enemy& enemy)
{
	
		cout << "ƒhƒ‰ƒSƒ“‚ÌUŒ‚I" << endl;
		attack(enemy);
}