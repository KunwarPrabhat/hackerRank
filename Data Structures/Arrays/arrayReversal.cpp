#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int>& arr, int start, int end) 
{
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}
int main (){
    vector<int> arr = {1,2,3,4,5,6};
    reverseArray(arr, 0, arr.size() - 1);
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<", ";
    }
    return 0;
}