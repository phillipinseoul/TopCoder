#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Cryptography
{
public:
    long long encrypt(vector<int> numbers)
    {
        long long ans = 1;

        // sort the vector -> need the minimum
        sort(numbers.begin(), numbers.end());

        // increase the minimum by 1
        numbers[0]++;


        for (int i = 0; i < numbers.size(); i++)
        {
            ans *= numbers[i];
        }
        return ans;
    }
};

/*
    numbers = {1, 3, 2, 1, 1, 3}
    Returns: 36
*/

int main(){

    vector<int> v1;

    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(3);

    Cryptography c1;
    int result = c1.encrypt(v1);

    cout << result << endl;
    return 0;
}