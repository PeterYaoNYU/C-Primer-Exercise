#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ifstream in("phone.txt");
    string line;
    vector<string> v;
    if (!in){
        throw runtime_error("cannot open the file!");
        return -1;
    }

    while(getline(in, line)){
        v.push_back(line);
    }
    in.close();

    auto it=v.cbegin();
    while (it!=v.end()){
        istringstream iss(*it);
        string word;
        while (iss>>word){
            cout<<word;
        }
        cout<<endl;
        ++it;
    }
    return 0;



}