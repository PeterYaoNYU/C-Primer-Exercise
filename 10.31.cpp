#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    istream_iterator<int> in_iter(cin);
    istream_iterator<int> end_of_file;
    vector<int> vi;
    while (in_iter!=end_of_file){
        vi.push_back(*in_iter++);
    }

    sort(vi.begin(), vi.end());
    ostream_iterator<int> out_iter(cout, " ");
    unique_copy(vi.begin(), vi.end(), out_iter);


    return 0;
}
