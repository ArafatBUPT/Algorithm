#include <iostream>
#include "string.h"

using namespace std;
class Solution {
public:
    void replaceSpace(char *str,int length) {
        string s(str);
        int i=0;
        while ((i=s.find(' ',i))!=string::npos)){
            s.erase(i,1);
            s.insert(i,"%20");
        }
        const char* res=s.c_str();
        strcpy(str,res);
    }
};

int main() {
/*    string s("we are happy.");
    int i = 0;
    while ((i = s.find(' ', i))!=string::npos) {
        cout<<i<<endl;
        s.erase(i,1);
        s.insert(i, "%20");

    }

    cout<<s<<endl;*/

}