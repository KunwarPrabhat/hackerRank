#include<vector>
#include <iostream>

std::vector<int> reverseArray(std::vector<int> a) {
    std::vector<int> array;
    for(int i = a.size()-1; i >= 0; i--)
    {
        array.push_back(a[i]);
    }   
    return array;
}
int main() 
{
    int n;
    std::cout<<"Enter the array length"<<std::endl;
    std::cin>>n;
    std::vector<int> a(n);


    std::cout<<"Enter the array elemets"<<std::endl;
    for(int i = 0; i < n; i++)
    {
        std::cin>>a[i];
    }
    std::vector<int> result = reverseArray(a);

    std::cout<<"the reversed array is - "<<std::endl;
    for(int i = 0; i < result.size(); i++)
    {
        std::cout<<result[i]<<", ";
        // std::cout<<a[i]<<", ";

    }
}