#include <iostream>
#include <list>
#include <vector>
#include <deque>

using namespace std;

int my_copy(const list<int>& l, vector<int> & vec1, vector<int> & vec2)
{
    int count=0;
    auto end=l.cend();
    for (auto beg=l.cbegin(); beg!=end; beg++, count++){
        // if (count/2==(int)(count/2)){vec1.push_back(*beg);}
        if (*beg & 1){vec1.push_back(*beg);}

        else{vec2.push_back(*beg);}
    }
    return 0;
    
}

int main()
{
    list<int> l {1,2,3,4,5,6,7, 8};
    vector<int> vec1 {};
    vector<int> vec2 {};

    my_copy(l, vec1, vec2);
    for (auto it1=vec1.cbegin(); it1!=vec1.cend(); it1++){
        cout<<*it1<<' ';
    }
    cout<<endl;

    for (auto it3=vec2.cbegin(); it3!=vec2.cend(); it3++){
        cout<<*it3<<' ';
    }
    cout<<endl;


}