/*
    Input: base (ex) 2, 10
    Output: number of which the sum of each digit of a multiple is a multiple of itself
    (ex) 3 -> sum of every digit in a multiple of 3 is ALSO a multiple of 3 (base=10)
*/

// Condition: number < 1000
// Total Search
#include <vector>
#include <iostream>

using namespace std;

class InterestingDigits
{
public:
    vector<int> digits(int base)
    {
        vector<int> ans;

        for (int i = 2; i < base; i++)
        {
            if ((base - 1) % i == 0) ans.push_back(i);
        }

        return ans;
    }
};



int main(){
    int base = 40;

    InterestingDigits id;
    vector<int> result = id.digits(base);

    for (vector<int>::const_iterator i = result.begin(); i != result.end(); i++)
    {
        cout << *i << endl;
    }

    return 0;
}






