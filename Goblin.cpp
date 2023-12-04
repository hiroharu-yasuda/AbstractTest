#include <iostream>
#include "Goblin.h"
using namespace std;
void Goblin::setHp(Enemy& enemy) {
	_hp = 40;
}
void Goblin::attack(Enemy& enemy)
{
	enemy.damage(3);
}

void Goblin::playBase(Enemy& enemy)
{
	int attacktipe = rand() % 4 + 1;
	if (attacktipe <4 ) {
		cout << "ƒSƒuƒŠƒ“UŒ‚I" << endl;
		attack(enemy);
	}
	else {
		// ƒ‰ƒ“ƒ_ƒ€‚Å5‰ñUŒ‚
		cout << "ƒSƒuƒŠƒ“‚Ì‚©‚¸‚Ì‚Ú‚¤‚è‚å‚­I" << endl;
		attack(enemy);
		attack(enemy);
		attack(enemy);
		attack(enemy);
		attack(enemy);
	}
}
