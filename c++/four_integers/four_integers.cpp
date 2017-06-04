
#include<iostream>
using namespace std;
int main(){

     int a, b, c, max = -100000;

    
     cout<<"enter three number: ";
cin>> a >> b >>c;
if (a > max)
   max = a;
if (b > max)
   max = b;
if (c > max)
   max = c;
cout << max << endl;

return 0;
}         
