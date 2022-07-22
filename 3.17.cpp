# include <iostream>
# include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> v;
    string s;
    char cont = 'y';
    while (cin>>s){
        v.push_back(s);
        cout<< "do u want to continue (y/n)?"<<endl;
        cin >> cont;
        if (cont != 'y'){
            break;
        }
        cout<<"please enter the next word! "<<endl;
    }

    for (auto & w : v){
        for (auto & c :w){
            c=toupper(c);
        }
        cout<<w<<endl;
    }

    return 0;
    
}