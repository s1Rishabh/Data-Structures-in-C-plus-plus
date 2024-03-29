#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > solve(int A)
{
    vector<vector<int>> res;
    
    vector<int> first = {1};
    res.push_back(first);
    
    for(int i = 1; i < A; i++){
        vector<int> temp;
        for(int j = 0; j <= i; j++){
            int val = ((j-1 >= 0) ? res[i-1][j-1] : 0) + ((j >= 0) ? res[i-1][j] : 0);
            temp.push_back(val);
        }

        cout << temp.size() << endl;
        res.push_back(temp);
    }

    return res;
}

int main(int agrc, char** argv)
{
    vector<vector<int> >  A = solve(5);
    for(int i = 0; i < A.size(); i++){
        for(int j = 0; j < A[0].size(); j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}