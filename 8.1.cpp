#include <iostream>
#include <stdexcept>
using namespace std;

istream & f(istream & in)
{
    int v;
    while (in >> v, !in.eof()){
        if (in.bad()){
            throw runtime_error("io stream is bad!");
        }
        if (in.fail()){
            cerr<<"the data is bad, please try again"<<endl;
            in.clear();
            in.ignore(100l, '\n');
            continue;

        }
        cout<<v<<endl;

    }
    in.clear();
    return in;
}

int main()
{
    cout<<"please enter some number, end with ctrl z"<<endl;
    f(cin);
    return 0;
}