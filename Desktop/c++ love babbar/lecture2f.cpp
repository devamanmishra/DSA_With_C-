 /*#include <iostream>
using namespace std;
int main(){
{

    // outer loop
 for(int row=0; row<5; row=row+1) {
    for(int col=0; col<row+1; col=col+1){
        cout<<"*";
    }
    cout<<endl;
 }

    return 0;
}*/

// for generic
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
    // outer loop
 for(int row=0; row<n; row=row+1) {
    for(int col=0; col<row+1; col=col+1){
        cout<<"*";
    }
    cout<<endl;
 }

    return 0;
}