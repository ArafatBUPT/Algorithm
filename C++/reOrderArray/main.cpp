#include <iostream>
#include "queue"

using namespace std;
class Solution {
public:
    void reOrderArray(vector<int> &array) {

        if (array.size()==0||array.size()==1)
            return;

        queue<int> even;
        vector<int>::iterator cur;
        for (cur=array.begin();cur!=array.end();) {
            if (!(*cur%2)){
                even.push(*cur);
                array.erase(cur);
            }
            else
                cur++;
        }

        while (!even.empty()){
            array.push_back(even.front());
            even.pop();
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}