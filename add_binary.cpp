
#include <iostream>
using namespace std;

// solution 08/06/21

class Solution {
public:
    string addBinary(string a, string b) {
        string ret = "";
        int carry = 0;
        for (int i = a.size() - 1, j = b.size() - 1; i >= 0 || j >= 0; i--, j--) {
            int m = (i >= 0 && a[i] == '1');
            int n = (j >= 0 && b[j] == '1');
            ret = to_string((m + n + carry) & 1) + ret;
            carry = (m + n + carry) >> 1;         
        }
        return carry ? '1' + ret : ret;
    }
};

int main(){
    string a = "1110001";
    string b = "10001";
    
    Solution testf;
    string result = testf.addBinary(a, b);
    cout << result << " binary added.";
}
