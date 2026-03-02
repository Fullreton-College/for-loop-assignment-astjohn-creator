#include <iostream>
using namespace std;

int main() {

   double num1;
   double num2;

   cin >> num1;
   cin >> num2;

   if(num2 < num1){
      cout<< "Second integer can't be less than the first." << endl;
   }
   else{
      for(int i = num1; i <= num2; i+= 5){
         cout<< i << " ";
      }
      cout<<endl;
   }
   

   return 0;
}
