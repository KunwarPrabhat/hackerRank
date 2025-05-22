#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>

using namespace std; 

vector<int> resulted_string(vector<string> &string_queries, vector<string> &string_inputs) {
    vector<int> array;
    unordered_map<string, int> inputs;

    for(const string &s : string_inputs){
        inputs[s]++;
    }
    for(string str: string_queries){
        if (inputs.count(str)) {
            array.push_back(inputs[str]);
        }else{
            array.push_back(0);
        }
    }

    return array;
}
int main () {
    vector<string> string_querries = {"abc", "bca", "xyz",};
    vector<string> String_inputs = {"abc", "abc", "bca", "yyy"};
    vector<int> result = resulted_string(string_querries, String_inputs);
    
    cout<<"Occurances are : ";
    for(int num: result){
        cout<<num<<", ";
    }

}