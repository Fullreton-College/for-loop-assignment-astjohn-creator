#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    int sales; 
   int store [5];
   for (int number = 0; number < 5; number++){
      cout << "Enter today's sales for store"<< (number + 1)<< ": ";
      cin >> store[number];
   }
   cout << " SALES BAR CHART" <<endl;
   cout << "(Each * = $100)" <<endl;

   for(int number = 0; number < 5; number++){
      cout <<"Store " << (number + 1 )<< ": ";
      int stars = store[number] / 100;
      for (int i = 0; i < stars; i++){
         cout<< "*";
      }
      cout<<endl;
   }
   

   return 0;
}
