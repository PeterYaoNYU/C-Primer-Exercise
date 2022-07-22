#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    vector<string> vec;
    vector<string>::const_iterator it=vec.begin();
    while (cin>>word){
        it=vec.insert(it, word);
    }
    cout<<endl;
    for (; it!=vec.cend(); ++it){
        cout<<*it<<' ';
    }
    return 0;
}