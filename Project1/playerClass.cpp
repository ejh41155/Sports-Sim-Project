#include <iostream>
#include "playerClass.h"



Player::Player()
{
    name = "na";
    sport = "na";
    position = "na";
    age = 0;
    overall = 0;
    ex = 0;
    salary = 0;
    contract_years = 0;
}

Player::Player(int i, std::string n, std::string s, std::string p,
    int a, int o, int e, long sa, int c)
{
    ID = i;
    name = n;
    sport = s;
    position = p;
    age = a;
    overall = o;
    ex = e;
    salary = sa;
    contract_years = c;
}


void Player::print() const
{
    std::cout << ID << '\n';
    std::cout << name << '\n';
    std::cout << sport << '\n';
    std::cout << position << '\n';
    std::cout << age << '\n';
    std::cout << overall << '\n';
    std::cout << ex << '\n';
    std::cout << salary << '\n';
    std::cout << contract_years << '\n';
    std::cout << '\n';
}

int Player::getID() const {
    return ID;
}



std::ostream& operator<<(std::ostream& os, const Player& player) {
    os << "Name: " << player.name
        << ", Sport: " << player.sport
        << ", Position: " << player.position
        << ", Age: " << player.age
        << ", Overall: " << player.overall
        << ", Experience: " << player.ex
        << ", Salary: " << player.salary
        << ", Contract years: " << player.contract_years;
    return os;
}


void CO::comparePosition(const Player& playerA, const Player& playerB)
{
    if (playerA.position == playerB.position)
        std::cout << "The two players both play " << playerA.position << '\n';
    else
        std::cout << "These two players play different positions\n";
}

void CO::compareAge(const Player& playerA, const Player& playerB)
{
    if (playerA.age == playerB.age)
        std::cout << "Both players are " << playerA.age << " years old.\n";
    else if (playerA.age > playerB.age)
        std::cout << playerA.name << " (" << playerA.age << ") is older than "
        << playerB.name << " (" << playerB.age << ").\n";
    else
        std::cout << playerB.name << " (" << playerB.age << ") is older than "
        << playerA.name << " (" << playerA.age << ").\n";
}

void CO::compareOverall(const Player& playerA, const Player& playerB)
{
    if (playerA.overall == playerB.overall)
        std::cout << "Both players are " << playerA.overall << " overall.\n";
    else if (playerA.overall > playerB.overall)
        std::cout << playerA.name << " (" << playerA.overall
        << ") is " << playerA.overall - playerB.overall
        << " points higher than " << playerB.name
        << " (" << playerB.overall << ").\n";
    else
        std::cout << playerB.name << " (" << playerB.overall
        << ") is " << playerB.overall - playerA.overall
        << " points higher than " << playerA.name
        << " (" << playerA.overall << ").\n";
}

void CO::compareExperience(const Player& playerA, const Player& playerB)
{
    if (playerA.ex == playerB.ex)
        std::cout << "Both players have " << playerA.ex << " years of experience.\n";
    else if (playerA.ex > playerB.ex)
        std::cout << playerA.name << " has " << playerA.ex - playerB.ex
        << " more years of experience than " << playerB.name << ".\n";
    else
        std::cout << playerB.name << " has " << playerB.ex - playerA.ex
        << " more years of experience than " << playerA.name << ".\n";
}

void CO::compareSalary(const Player& playerA, const Player& playerB)
{
    if (playerA.salary == playerB.salary)
        std::cout << "Both players earn " << playerA.salary << " per year.\n";
    else if (playerA.salary > playerB.salary)
        std::cout << playerA.name << " earns " << playerA.salary - playerB.salary
        << " more than " << playerB.name << ".\n";
    else
        std::cout << playerB.name << " earns " << playerB.salary - playerA.salary
        << " more than " << playerA.name << ".\n";
}

void CO::compareYears(const Player& playerA, const Player& playerB)
{
    if (playerA.contract_years == playerB.contract_years)
        std::cout << "Both players have " << playerA.contract_years
        << (playerA.contract_years == 1 ? " year.\n" : " years.\n");
    else if (playerA.contract_years > playerB.contract_years)
        std::cout << playerA.name << " has " << playerA.contract_years - playerB.contract_years
        << " more years on his contract than " << playerB.name << ".\n";
    else
        std::cout << playerB.name << " has " << playerB.contract_years - playerA.contract_years
        << " more years on his contract than " << playerA.name << ".\n";
}
