#include<iostream>
#include<vector>
#include<algorithm> //for swap functinon.
using namespace std;

// vector<int> rotateLeft(int d, vector<int> arr) {
//     int start = 0;
//     int end = d-1;
//     int startArr = d;
//     int endArr = arr.size()-1;
//     int mainst = 0;
//     int mainend = arr.size() - 1;
//     while(start < end){
            
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;

//         start++;
//         end--;
//     }
//     while(startArr < endArr){
                    
//         int temp = arr[startArr];
//         arr[startArr] = arr[endArr];
//         arr[endArr] = temp;

//         startArr++;
//         endArr--;
//     }
//     while(mainst < mainend){
                    
//         int temp = arr[mainst];
//         arr[mainst] = arr[mainend];
//         arr[mainend] = temp;

//         mainst++;
//         mainend--;
//     }
//     return arr;
// }

//less repetitive version - to make a function for reversing.
void reverse(vector<int>& arr, int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

vector<int> rotateLeft(int d, vector<int> arr) {
    int n = arr.size();
    reverse(arr, 0, d - 1);     // Reverse first d elements
    reverse(arr, d, n - 1);     // Reverse remaining n-d elements
    reverse(arr, 0, n - 1);     // Reverse the whole array
    return arr;
}
//hi there