#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    int *p; // *p will print value of x and x also print value of x. that means *p , x perform same things
    p = &x; // &x and p will print address of x variable. that means p , &x perform same things.
    cout <<"Value of x="<< x <<endl; //output will be 5
    cout <<"Value of x=*p="<< *p <<endl; //output will be 5
    cout <<"Address of x="<< &x <<endl; //output will be address of x
    cout <<"Address of x=p="<< p <<endl; //output will be address of x



return 0;
}
