#include <iostream>
#include<limits.h>
#include<vector>
using namespace std;

void printArray(int arr[][4], int row, int col) {
  for(int i=0; i<row; i++ ) {
    for(int j=0; j<col; j++) {

      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}
int findMax(int arr[][4], int row, int col) {
  int maxAns = INT_MIN;

  for(int i=0; i<row; i++) {
    for(int j=0; j<col; j++) {
      
      if(arr[i][j] > maxAns ) {
        maxAns = arr[i][j];
      }
      
    }
  }
  return maxAns;
}

int main() {


 

  vector< vector<int> > brr;


  vector<int> vec1(10,0);
  vector<int> vec2(5,1);
  vector<int> vec3(7,0);
  vector<int> vec4(8,1);
  vector<int> vec5(20,0);

  brr.push_back(vec1);
  brr.push_back(vec2);
  brr.push_back(vec3);
  brr.push_back(vec4);
  brr.push_back(vec5);

  for(int i=0; i<brr.size(); i++) {
    for(int j=0; j<brr[i].size(); j++) {
      cout << brr[i][j] << " ";
    }
    cout << endl;
  }
  
  
  return 0;
}