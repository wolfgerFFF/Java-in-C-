#include "Priest.h"
#include<iostream>


int Priest::Attack() {
    int damage = std::uniform_int_distribution<int>(20,30)(Priest::r);
    elixir -= static_cast<int>(damage * 0.8);
    if (elixir < 0) return 0;
    else return damage;
}

std::string Priest::getInfo() const {
    return "Name: " + name + "  Hp: " + std::to_string(hp) +
        " Elixir:  " + std::to_string(elixir) +
        " Type: " + typeid(*this).name();
}

void Priest::healed(int Hp) {
    hp = (Hp + hp > maxHp) ? maxHp : Hp + hp;
}

void Priest::GetDamage(int damage) {
    if (hp - damage > 0) {
        hp -= damage;
    }
}
