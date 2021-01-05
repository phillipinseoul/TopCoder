// N bottles, capacities[i] (L), bottles[i] (L)
// M operations: i-th -> pour from fromId[i] to toId[i]
// Stop when: i) fromId[i] = empty ii) toId[i] = full
// Return: int[] -> i-th: amount of juice in i-th bottle'

# include <algorithm>
# include <vector>

using namespace std;

class KiwiJuiceEasy
{
public:

    // function 'thePouring'
    // input: capabilties, bottles, fromId, toId 
    // output: final amount of juice in each bottle
    vector<int> thePouring(vector<int> capacities,
                            vector<int> bottles, vector<int> fromId,
                            vector<int> toId)
    {
        for (int i=0; i < fromId.size(); i++)
        {
            int fromL = fromId[i];
            int toL = toId[i];

            // Simplify code by using 'min' instead of if-else
            int vol = min(bottles[fromL], capacities[toL] - bottles[toL]);

            bottles[fromL] -= vol;
            bottles[toL] += vol;
        }
        return bottles;
    }
};








