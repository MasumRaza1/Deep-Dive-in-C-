#include<iostream>
using namespace std;

int main()
{
    int a = 10;    
    int *p= &a;

    //    int *p       Declaration
    //    p = & x;     initialization
    //    cout<<*p;    defrefrencing

    cout<<a<<endl;          
    cout<<&a<<endl;
    cout<<p<<endl;     // p is pointing address of a
    cout<<&p<<endl;
    cout<<*p<<endl;   // *p derenference 

return 0;
}
