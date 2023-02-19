#include <iostream>
using namespace std;
int main()
{
   int Num;
   cout<<"Enter your Numbers=";
   cin>>Num;
   if( Num < 50 )
   {
      cout<<"Your Number is less than 50";      //This would run if above condition is true
}
else
   {
      cout<<"Your Number is greater than or equal 50";   	//This would run if above condition is false
   }
   return 0;
}   
