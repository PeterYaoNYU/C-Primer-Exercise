#include <iostream>
using std::cout;
using std::endl;

int main(){
    int sum=0;
    int i =50;
    while (i<=100){
        sum+=i;
        i++;
    }
    cout<<"the sum of all integers in the range [50,100] is "<<sum<<endl;
    return 0;
}