#include <iostream>
#include "vector"

using namespace std;
class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        int minIndex=0;
        for (int i = 0; i <rotateArray.size();i++) {
            if(rotateArray[i]>rotateArray[i+1]) {
                minIndex = i + 1;
                break;
            }
        }
        return rotateArray[minIndex];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}