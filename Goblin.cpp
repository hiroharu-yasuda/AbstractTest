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
		cout << "�S�u�����U���I" << endl;
		attack(enemy);
	}
	else {
		// �����_����5��U��
		cout << "�S�u�����̂����̂ڂ���傭�I" << endl;
		attack(enemy);
		attack(enemy);
		attack(enemy);
		attack(enemy);
		attack(enemy);
	}
}
