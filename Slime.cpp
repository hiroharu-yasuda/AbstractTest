#include <iostream>
#include "Slime.h"

using namespace std;

void Slime::attack(Enemy& enemy)
{
	enemy.damage(1);
}

void Slime::playBase(Enemy& enemy)
{
	// A -> B�֍U��
	cout << "�X���C���̑̓�����I" << endl;
	attack(enemy);
}
