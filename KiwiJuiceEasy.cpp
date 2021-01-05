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
            int space = capacities[toL] - bottles[toL];    // Left space in destination bottle

            if (space >= bottles[i]) {          // case 1: Enough space
                int vol = bottles[fromL];
                bottles[toL] += vol;
                bottles[fromL] = 0;
            } else {                            // case 2: Space exceeded!
                int vol = space;
                bottles[toL] += vol;
                bottles[fromL] -= vol;
            }
        }
        return bottles;
    }
};








