/*
ex) first = {"fishing", "gardening", "swimming", "fishing"}
    second = {"hunting", "fishing", "fishing", "biting"}
    Returns: 4 (fishing)
*/

#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

class InterestingParty
{
public:
    int bestInvitation(vector <string> first, vector<string> second)
    {
        // Use a map -> No multiple keys! All unique
        map <string, int> dic;


        // count how many people have each hobby (check-all)
        for (int i = 0; i < first.size(); i++)
        {
            dic[first[i]] = 0;
            dic[second[i]] = 0;
        }

        // increase int value in the map
        for (int i = 0; i < first.size(); i++)
        {
            dic[first[i]]++;
            dic[second[i]]++;
        }

        int ans = 0;
        map <string, int>::iterator it;     // map iteration

        for (it = dic.begin(); it != dic.end(); it++)
        {
            ans = max(ans, it->second);     // it->second: map value
        }

        return ans;
    }
};

int main(){
    vector<string> vf, vs;
    
    vf.push_back("fishing");
    vf.push_back("gardening");
    vf.push_back("swimming");
    vf.push_back("fishing");

    vs.push_back("hunting");
    vs.push_back("fishing");
    vs.push_back("fishing");
    vs.push_back("biting");

    InterestingParty p1;
    int result = p1.bestInvitation(vf, vs);

    cout << result << endl;

    return 0;
}