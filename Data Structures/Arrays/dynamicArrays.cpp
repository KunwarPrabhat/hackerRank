#include <iostream>
#include <vector>
using namespace std;

vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<vector<int>> arr(n);
    vector<int> answers;
    
    int lastAnswer = 0;
    int idx;
    
       for(int i = 0; i < queries.size(); i++)
       {
        if(queries[i][0] == 1){
            //type 1
            idx = (queries[i][1] ^ lastAnswer) % n;
            arr[idx].push_back(queries[i][2]);
        }
        else if(queries[i][0] == 2)
        {
            //type 2
            idx = (queries[i][1] ^ lastAnswer) % n;
            lastAnswer = arr[idx][queries[i][2] % arr[idx].size()];
            answers.push_back(lastAnswer);
        }
       } 
    return answers;
}

int main()
{
   int n, q;
cin >> n >> q;
vector<vector<int>> queries(q, vector<int>(3));
for (int i = 0; i < q; ++i) {
    cin >> queries[i][0] >> queries[i][1] >> queries[i][2];
}
vector<int> result = dynamicArray(n, queries);
for (int ans : result) {
    cout << ans << endl;
}

}
