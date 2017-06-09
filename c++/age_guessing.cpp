
#include<iostream>
using namespace std;
int main(){
    int min=0 , max=120;
    int mid, response;
    while(min-max>1){
        mid=(min+max)/2;
        cout<<"is your age less than ";
        cout<<mid<<endl;
        cin>>reponse;
        if(reponse==1)
        max=mid;
        else min=mid;
     } cout<<"your age is"<<min<<". "<<endl;
return 0;
}         
