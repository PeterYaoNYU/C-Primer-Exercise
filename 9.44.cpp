#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

void replace_string (string &s, const string & oldval, const string & newval)
{
    int p=0;
    while ((p=s.find(oldval, p)) != string::npos){
        s.replace(p, oldval.size(), newval);
        p+=newval.size();
    }
}

int main ()
{
    string s = "tho thru tho!";
    replace_string(s, "tho", "through");
    cout<<s<<endl;
}