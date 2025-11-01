#include<iostream>
#include<string>
using namespace std;

int main() {
    string names[] {"aasish","sega","subi","kamlesh"};
    auto *ptr = names;

    cout<<*ptr<<" "<<ptr<<endl;
    *ptr++;
    cout<<*ptr<<" "<<ptr<<endl;
return 0;



}