#include <iostream>
#include <vector>

using namespace std;
#include <list>


int main()
{
    list<int> ilist ={1,2,3,4,5,6,7};
    vector<int> ivec ={7,6,5,4,3,2,1};

    vector<double> dvec(ilist.begin(), ilist.end());
    vector<double> dcvec2(ivec.begin(), ivec.end());

    auto it1=dvec.begin();
    auto it2=dvec.begin();
    cout<<"dvec1  "<<dvec.capacity()<<dvec.size()<<endl;
    while (it1!=dvec.end()){
        cout<<*it1<<endl;
        it1++;
    }

    // auto it2=dvec.begin();
    cout<<"dvec2  "<<dcvec2.capacity()<<dcvec2.size()<<endl;
    while (it2!=dcvec2.end()){
        cout<<*it2<<endl;
        it2++;
    }

}