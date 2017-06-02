#include<iostream>
using namespace std;

int main() {
int arr[5] = {5,2,3,5,15};
int size = sizeof(arr)/4;
bool isPalindrome=0;
for(int i = 0;i <= size/2;i++){
if(arr[i] != arr[size-i-1]){
isPalindrome=0;
   }
}
//for loops ends
if (isPalindrome){
cout<<"Palindrome\n";
}
else{
   cout<<"not Palindrome";
}
return 0;
}
