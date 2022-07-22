# include <iostream>
# include <fstream>
#include<sstream>
#include <string>
# include <vector>

using namespace std;

struct PersonInfo
{
    /* data */
    string name;
    vector<string> phones;
};

string format (const string &s){
    return s;
}

bool valid(const string &s){
    return true;
}

int main(int argc, char * argv[]){
    string line, word;
    vector<PersonInfo> people;
    istringstream record;

    if (argc!=2){
        cerr<<"please give the file name."<<endl;
        return -1;
    }

    ifstream in(argv[1]);
    if (!in){
        cerr<< "cannot open the file"<<endl;
        return -1;
    }

    while (getline(in, line)){
        PersonInfo info;
        record.clear();
        record.str(line);
        record>>info.name;
        while (record>>word){
            info.phones.push_back(word);
        }
        people.push_back(info);
    }
    ostringstream os;
    for (const auto &entry : people){
        ostringstream formatted, badnums;
        for (const auto &nums : entry.phones){
            if (!valid(nums)){
                badnums<<" "<<nums;
            }
            else{
                formatted<<" "<<format(nums);
            }}

            if (badnums.str().empty()){
                os<<entry.name<<" "<<formatted.str()<<endl;
            }
            else {
                cerr << "input error: " << entry.name << " invalid numebers" << badnums.str() << endl;

            }

    }
    cout<<os.str()<< endl;
    return 0;
}