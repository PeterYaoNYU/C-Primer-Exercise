#include <iostream>
#include <sstream>
#include <string>
#include <stdexcept>

using namespace std;

istream & f (istream & in)
{
    string v;
    while (in >> v && !in.eof()){
        if (in.bad()){
            throw runtime_error("the io stream is bad!");
        }
        if (in.fail()){
            cerr<<"the data is incorrect!"<<endl;
            in.clear();
            in.ignore(100, '\n');
            continue;
        }

        cout<<v<<endl;
    }
    in.clear();
    return in;

}

int main()
{
    ostringstream msg;
    msg<<"c++ primer 5th edition "<<endl;
    istringstream in(msg.str());
    f(in);
    return 0;
}