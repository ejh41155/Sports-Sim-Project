#include "playerClass.h"
#include "hashmap.h"
#include "addplayersfunction.h"
#include <iostream>
#include <string>
#include <limits>

using std::getline;
using namespace std; 

int getIntOrDefault(const string& prompt, int defaultValue) {
    cout << prompt;

    string input;
    getline(cin, input);

    if (input == "")
        return defaultValue;

    return stoi(input);  
}


long getLongOrDefault(const string& prompt, long defaultValue) {
    cout << prompt;

    string input;
    getline(cin, input);

    if (input == "")
        return defaultValue;

    return stol(input);  
}


Player CreatePlayerFromInput() 
{
   

    cout << "Creating a new player...\n";


    string name, sport, position;

    cout << "Enter name (or leave blank): ";
    getline(cin, name);
    if (name == "") name = "na";

    cout << "Enter sport (or leave blank): ";
    getline(cin, sport);
    if (sport == "") sport = "na";

    cout << "Enter position (or leave blank): ";
    getline(cin, position);
    if (position == "") position = "na";


    int ID = getIntOrDefault("Enter ID (or blank for 0): ", 0);
    int age = getIntOrDefault("Enter age (or blank for 0): ", 0);
    int overall = getIntOrDefault("Enter overall (or blank for 0): ", 0);
    int ex = getIntOrDefault("Enter experience (or blank for 0): ", 0);
    int contract = getIntOrDefault("Enter contract years (or blank for 0): ", 0);

    long salary = getLongOrDefault("Enter salary (or blank for 0): ", 0);


    return Player(ID, name, sport, position, age, overall, ex, salary, contract);
}

    void CreatePlayerAndInsert(Hashmap & table)
    {
        Player p = CreatePlayerFromInput();
        table.insert(p.getID(), p);   
        cout << "\nPlayer inserted into hash table!\n\n";
    }
