#include <vector>
#include <iostream>
using namespace std;

auto & myfind(vector<int>::const_iterator begin, vector<int>::const_iterator end, int target){
    for (; begin!=end; begin ++){
        if (*begin ==target){
            return begin;
        }
        begin ++;
    }
    return end;
}

int main()
{
    vector<int> v {1,2,4, 8, 16, 32,64};
    // auto begin=v.cbegin();
    // auto end=v.cbegin();
    
    // auto ans=myfind(begin, end, 65);
    // if (ans==end){
    //     cout<<"not found"<<endl;
    // }
    // else{
    //     cout<<"found"<<endl;
    // }
    // return 0;

    // cout<<myfind(v.begin(), v.end(), 65)-v.begin()<<endl;
    cout<<myfind(v.begin(), v.end(), 64)-v.begin()<<endl;
    
}