#include<iostream>
using namespace std;
int main()
{
         int n, number;
         int max = -10000, min=10001;
	 cout<<"enter number of inputs:"<<endl;
cin>> n;
for (int i=0;i<n;i++){   
  cout<<"enter next number"<<endl;
cin>> number;
if (number > max){
   max = number;
  }
if (number < min){
   min = number;
  }
}
cout <<"max is:" << max<<"and min is:"<<min<<endl;

return 0;
}         
