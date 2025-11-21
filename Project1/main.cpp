#include "hashmap.h"
#include "playerClass.h"
#include "addplayersfunction.h"
#include <iostream>
#include <string>
#include <list>
using namespace std; 


int main() 
{
        
   Hashmap H; 

   CreatePlayerAndInsert(H);

   H.print(); 
        
       
   return 0;
}

	
