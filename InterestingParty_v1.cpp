/*
ex) first = {"fishing", "gardening", "swimming", "fishing"}
    second = {"hunting", "fishing", "fishing", "biting"}
    Returns: 4 (fishing)
*/

#include <vector>
#include <string>
#include <iostream>

using namespace std;

class InterestingParty
{
public:
    int bestInvitation(vector <string> first, vector<string> second)
    {
        int i, j;
        int ans = 0;

        // count how many people have each hobby (check-all)
        for (i = 0; i < first.size(); i++)
        {
            int f = 0;
            int s = 0;
            for (j = 0; j < first.size(); j++)
            {
                // count how many people have first[i] as hobby
                if (first[i] == first[j]) f++;
                if (first[i] == second[j]) f++;

                // count how many people have second[i] as hobby
                if (second[i] == first[j]) s++;
                if (second[i] == second[j]) s++;
            }
            ans = max(f, ans);
            ans = max(s, ans);
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