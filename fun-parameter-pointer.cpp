#include<iostream>
#include<string>
using namespace std;
    int fun1(int *x,string *s) {
         *x = *x + 10 ;
        cout<<*s<<endl;

        return *x;
    }

    int main() {

    int a = 10;
        string s = "darrel";

    fun1(&a,&s);
        cout<<a<<endl;
        return 0;


}