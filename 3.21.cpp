#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    std::vector<string> v7 {10, "hi"};
    cout<<"the number of elements in vector 7 is "<< v7.size()<<endl;
    if (v7.cbegin()!=v7.cend()){
        for (auto it=v7.cbegin(); it!=v7.end(); it++){
            cout<<*it<<endl;
        }
    }
    return 0;   
}