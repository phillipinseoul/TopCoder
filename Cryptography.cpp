#include <vector>
#include <iostream>

using namespace std;

class Cryptography
{
public:
    long long encrypt(vector<int> numbers)
    {
        long long ans = 0;

        // nested for-loop: check all cases!
        for (int i = 0; i < numbers.size(); i++)
        {
            long long temp = 1;
            for (int j = 0; j < numbers.size(); j++)
            {
                if (i == j){
                    temp *= (numbers[j] + 1);       // increase numbers[j] by 1
                } else {
                    temp *= numbers[j];
                }
            }
            ans = max(ans, temp);
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