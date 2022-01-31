//Program to Demonstrate Pointer Arithmetic
#include <iostream>
using namespace std;
int main()
{
int A[5]={2,4,6,8,10};
int *p=A,*q=&A[4];
 cout<<*p<<endl;        //2
 cout<<endl;
 p++;                   // move forward
 cout<<*p<<endl;        //4
 cout<<endl;
 p--;                   // move backward
 cout<<*p<<endl;        //2
 cout<<endl;
 cout<<p<<endl;         // Address of p
 cout<<p+2<<endl;       // Address of move +2
 cout<<endl;
 cout<<*p<<endl;        // pointer pointing at 2;
 cout<<*(p+2)<<endl;    // pointer move forward +2 (6)
 cout<<endl;
 cout<<q-p<<endl;       //4
 cout<<p-q<<endl;       //-4
 for(int i=0;i<5;i++)
 {
   cout<<A[i];             // show all elements in array
 }
return 0;
}