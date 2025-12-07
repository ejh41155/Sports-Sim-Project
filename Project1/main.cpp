#include "hashmap.h"
#include "playerClass.h"
#include "addplayersfunction.h"
#include <iostream>
#include <string>
#include <list>
using namespace std; 

//Here is an example of how a user can create two players and then compare them

int main() 
{
        
   Hashmap H; 

   // Create the two Players
   Player Player1(1, "Ethan", "Basketball", "Point Guard", 27, 99, 6, 12000000, 3);
   Player Player2(2, "Jake", "Basketball", "Center", 24, 83, 3, 8500000, 2);

   // Insert into the HashMap
   H.insert(Player1.getID(), Player1);
   H.insert(Player2.getID(), Player2);

   // Compare the two players
   comparePlayers(Player1, Player2);

   
        
       
   return 0;
}

	
