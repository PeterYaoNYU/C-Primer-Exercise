#include <iostream>
#include <vector>
#include <list>

using namespace std;

bool my_compare(list<int> l, vector<int> vec){
    if (l.size()!=vec.size()){
        return false;
    }

    auto l_beg=l.cbegin();
    auto l_end=l.cend();
    auto v_beg=vec.cbegin();

    while (l_beg!=l_end){
        if (*l_beg != *v_beg){return false;}
        ++l_beg;
        ++v_beg;
    }
    return true;
}


int main()
{
    vector<int> vec {1,2,3,4,5,6,7};
    list<int> l {1,2,3,4,5};
    cout<<my_compare(l, vec)<<endl;

}