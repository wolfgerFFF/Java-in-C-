#pragma once
#include<iostream>
#include<string>
#include<ctime>
#include<random>


class Priest {
private:
    const std::string HERO_PRIEST_D = "Hero_Priest";
    int number{ 0 };
    std::mt19937 r;
    std::string name;

    int hp{ 0 };
    int maxHp{ 0 };

    int elixir{ 0 };
    int maxElixir{ 0 };
public:
    void initialize() {
        std::random_device rd;
        r = std::mt19937(rd());
    }

    Priest(std::string name, int hp, int elixir)
        : name(name), hp(hp), maxHp(hp), elixir(elixir), maxElixir(elixir) {}

    Priest() : Priest(
        HERO_PRIEST_D + std::to_string(++number),
        std::uniform_int_distribution<int>(100, 200)(Priest::r),
        std::uniform_int_distribution<int>(50, 150)(Priest::r)
    ) {}

    int Attack();
    std::string getInfo() const;
    void healed(int Hp);
    void GetDamage(int damage);
};
