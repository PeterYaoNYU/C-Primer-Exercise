#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ifstream in ("phone.txt");
    if (!in){
        cerr << "cannot open the file!"<<endl;
        return -1;
    }

    string line;
    vector<string> words;
    while (getline(in, line)){
        words.push_back(line);

    }
    in.close();

    cout<<"success"<<endl;

    vector<string>::const_iterator it=words.begin();
    while (it!=words.end()){
        cout<<*it<<endl;
        ++it;
    }
    return 0;
}