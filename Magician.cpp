#include<iostream>
#include "Magician.h"

int Magician::Attack() {
    int damage = std::uniform_int_distribution<int>(20, 30)(Magician::r);
    mana -= static_cast<int>(damage * 0.8);
    if (mana < 0) return 0;
    else return damage;
}

std::string Magician::getInfo() const {
    return "Name: " + name + "  Hp: " + std::to_string(hp) +
        " Mana:  " + std::to_string(mana) +
        " Type: " + typeid(*this).name();
}

void Magician::healed(int Hp) {
    hp = (Hp + hp > maxHp) ? maxHp : Hp + hp;
}

void Magician::GetDamage(int damage) {
    if (hp - damage > 0) {
        hp -= damage;
    }
}
