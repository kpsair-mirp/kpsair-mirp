#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
   cout<<endl;
        for (int j = 1;j <= n; ++j){
        cout << " " << i * j;
   }
 }
    return 0;
}

 
