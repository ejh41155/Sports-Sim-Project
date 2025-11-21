#ifndef PLAYERCLASS_H
#define PLAYERCLASS_H

#include <iostream>
#include <string>

class Player {
public:
    Player();   
    Player(int i, std::string n, std::string s, std::string p,
        int a, int o, int e, long sa, int c);  

    void print() const;

    friend void comparePlayers(const Player& playerA, const Player& playerB);
    friend struct CO;

    friend std::ostream& operator<<(std::ostream& os, const Player& player);

    int getID() const;

private:
    int ID{};
    std::string name{};
    std::string sport{};
    std::string position{};
    int age{};
    int overall{};
    int ex{};
    long salary{};
    int contract_years{};
};


struct CO {

    static void comparePosition(const Player& playerA, const Player& playerB);
    static void compareAge(const Player& playerA, const Player& playerB);
    static void compareOverall(const Player& playerA, const Player& playerB);
    static void compareExperience(const Player& playerA, const Player& playerB);
    static void compareSalary(const Player& playerA, const Player& playerB);
    static void compareYears(const Player& playerA, const Player& playerB);
};

#endif




