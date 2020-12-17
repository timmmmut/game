#include "Header.h"
#include <iostream>

Warrior::Warrior() {
	name = "";
	armor = 0;
	hp = 0;
	damage = 0;
	pts = 0;
}
Warrior::Warrior(std::string fname, float fhp, float fdamage,
	float fpts, float farmor): name(fname), hp(fhp), damage(fdamage), pts(fpts),
armor(farmor) {}
std::string Warrior::getName() { return name; }
float Warrior::getHP() { return hp; }
float Warrior::getDamage() { return damage; }
float Warrior::getPts() { return pts; }
float Warrior::getArmor() { return armor; }
void Warrior::setName(std::string fname) { name = fname; }
void Warrior::setHP(float fhp) { hp = fhp; }
void Warrior::setDamage(float fdamage) { damage = fdamage; }
void Warrior::setPts(float fpts) { pts = fpts; }
void Warrior::setArmor(float farmor) { armor = armor; }
void Warrior::showStatus() {
	std::cout << "Health: " << hp << ' ' << "Armor: " << armor << ' '<<  "Pts: " << pts << ' ' << "Damage: " << damage << ' ' << std::endl;
}