#include<iostream.h>
using namespace std;
int main()
{
//     int a=5
//     // b=&a;
//     // cout<<*b;
//   int *ptr=&a;
//     cout<<*ptr;
int age=22;
 int *ptr=&age;   // "*"" matlab chor aur "&"" matlab key;
int _age=*ptr;
cout<<*ptr<<endl;
cout<<_age;
}