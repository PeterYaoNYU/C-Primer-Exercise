#include <vector>
#include <iostream>

using namespace std;

bool my_find(vector<int>::const_iterator begin, vector<int>::const_iterator end, int target)
{
    while (begin!=end){
        if (*begin ==target){
            cout<<"found"<<endl;
            return true;
        }
        ++begin;
    }
    cout<<"target not found!"<<endl;
    return false;
}

int main()
{
    vector<int> v {1, 2, 4, 8, 14, 32};
    my_find(v.cbegin(), v.cend(), 8);
    my_find(v.cbegin(), v.cend(), 15);
    my_find(v.cbegin(), v.cend(), 33);



}