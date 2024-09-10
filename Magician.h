#pragma once
#include<iostream>
#include<ctime>
#include<random>
#include<string>

class Magician {
public:
	const std::string HERO_MAGICIAN_D = "Hero_Magician";
	int number{ 0 };
	std::string name;
	std::mt19937 r;
	int hp;
	int maxHp;
	int mana{ 0 };
	int maxMana{ 0 };
public:
	void initialize() {
		std::random_device rd;
		r = std::mt19937(rd());
	}

	Magician(std::string name,int hp,int mana) 
		: name(name),hp(hp),maxHp(hp),mana(mana),maxMana(mana) {}

	Magician() : Magician(
		HERO_MAGICIAN_D+std::to_string(++number),
		std::uniform_int_distribution<int>(100, 200)(Magician::r),
		std::uniform_int_distribution<int>(50, 150)(Magician::r)
	){ }

	int Attack();
	std::string getInfo() const;
	void healed(int Hp);
	void GetDamage(int damage);
};


