#include <iostream>
using namespace std;

int main() 
{
int x[5]={100,2,3,4,5};
for(int i=0;i<5;i++)
cout<<x[i]<<" ";

cout<<endl;
char name[50]="my_name";

for(int i=0; name[i]!='\0' ;i++)
cout<<name[i];
cout<<endl;

cout<<"enter first name"<<endl;
cin>>name;

for(int i=0;name[i]!='\0';i++)
cout<<name[i];
cout<<endl;

return 0;
}
