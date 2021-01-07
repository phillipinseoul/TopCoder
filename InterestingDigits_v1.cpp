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

        for (int n = 2; n < base; n++)
        {
            bool ok = true;
            for (int k1 = 0; k1 < base; k1++)
            {
                for (int k2 = 0; k2 < base; k2++)
                {
                    for (int k3 = 0; k3 < base; k3++)
                    {
                        // find n that doesn't satisfy condition
                        if ((k1 + k2*base + k3*base*base) % n == 0 && (k1 + k2 + k3) % n != 0)
                        {
                            ok = false;     // remove n
                            break;
                        }
                    }
                    if (!ok) break;
                }
                if (!ok) break;
            }
            if (ok) ans.push_back(n);
        }
        return ans;
    }
};



int main(){
    int base = 30;

    InterestingDigits id;
    vector<int> result = id.digits(base);

    for (vector<int>::const_iterator i = result.begin(); i != result.end(); i++)
    {
        cout << *i << endl;
    }

    return 0;
}






