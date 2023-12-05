#include <iostream>
#include "Goblin.h"
using namespace std;
void Goblin::setHp(Enemy& enemy) {
	_hp = 44;
}
void Goblin::attack(Enemy& enemy)
{
	enemy.damage(3);
}

void Goblin::playBase(Enemy& enemy)
{
	int attacktipe = rand() % 4 + 1;
	if (attacktipe <4 ) {
		cout << "ゴブリン攻撃！" << endl;
		attack(enemy);
		cout << "3 のダメージ！" << endl;
	}
	else {
		// ランダムで5回攻撃
		cout << "ゴブリンのかずのぼうりょく！" << endl;
		attack(enemy);
		cout << "3 のダメージ！" << endl;

		attack(enemy);
		cout << "3 のダメージ！" << endl;

		attack(enemy);
		cout << "3 のダメージ！" << endl;
		attack(enemy);
		cout << "3 のダメージ！" << endl;
		attack(enemy);
		cout << "3 のダメージ！" << endl;
	}
}
