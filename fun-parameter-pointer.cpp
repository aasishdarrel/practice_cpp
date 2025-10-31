#include<iostream>
using namespace std;
    int fun1(int *x) {
         *x = *x + 10 ;

        return *x;
    }

    int main() {

    int a = 10;
    fun1(&a);
        cout<<a<<endl;
        return 0;


}