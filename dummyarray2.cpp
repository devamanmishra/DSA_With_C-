#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void printVector(const vector<vector<int>>& brr) {
    for(int i = 0; i < brr.size(); i++) {
        for(int j = 0; j < brr[i].size(); j++) {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
}

int findMax(const vector<vector<int>>& brr) {
    int maxAns = INT_MIN;
    for(int i = 0; i < brr.size(); i++) {
        for(int j = 0; j < brr[i].size(); j++) {
            if(brr[i][j] > maxAns) {
                maxAns = brr[i][j];
            }
        }
    }
    return maxAns;
}

int main() {
    vector<vector<int>> brr;

    vector<int> vec1(10, 0);
    vector<int> vec2(5, 1);
    vector<int> vec3(7, 0);
    vector<int> vec4(8, 1);
    vector<int> vec5(20, 0);

      brr.push_back(vec1);
      brr.push_back(vec2);
      brr.push_back(vec3);
      brr.push_back(vec4);
      brr.push_back(vec5);

    printVector(brr);

    cout << "Maximum element: " << findMax(brr) << endl;

    return 0;
}
