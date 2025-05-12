//To return the sum of all individual hourGlass in an array.
#include <iostream>
#include <vector>
using namespace std;

vector<int> hourglassSum(vector<vector<int>> arr)
{
    vector<int> array;
    for (int i = 1; i < arr.size() - 1; i++)
    {
        cout<<"The code enters the hourGlass function"<<endl;

        for (int j = 1; j < arr[i].size() - 1; j++)
        {
            int sum = 0;
            sum = arr[i - 1][j - 1] + arr[i - 1][j] + arr[i - 1][j + 1] +  arr[i][j] + arr[i + 1][j - 1] + arr[i + 1][j] + arr[i + 1][j + 1];
            cout<<"sum is : = "<<sum<<endl;
            array.push_back(sum);
        }
    }
    return array;
}
int maxSumArray(vector<int> array)
{
    int maxSum = array[0];
    for(int i = 1; i < array.size(); i++)
    {
        if(maxSum < array[i]){ maxSum = array[i]; }
    }
    return maxSum;
}
int main()
{
    vector<vector<int>> v = {
        {-9, -9, -9, 1, 1, 1},
        {0, -9, 0, 4, 3, 2},
        {-9, -9, -9, 1, 2, 3},
        {0, 0, 8, 6, 6, 0},
        {0, 0, 0, -2, 0, 0},
        {0, 0, 1, 2, 4, 0}};

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    vector<int> resultArray = hourglassSum(v);

    for (int i = 0; i < resultArray.size(); i++)
    {
        // cout<<"The code enters the final loop"<<endl;
        cout << resultArray[i] << ", ";
    }
    cout<<endl;
    int ResultMaxSum = maxSumArray(resultArray);
    cout<<"The max sum is : "<<ResultMaxSum<<endl;
    return 0;
}