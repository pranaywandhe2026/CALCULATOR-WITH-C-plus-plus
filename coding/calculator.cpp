#include<iostream.h>
using namespace std;
void add()
{   

    cout<<"how many numbers you want to add"<<endl;

    int press;

    cout<<"press 1 for two number"<<endl;

    cout<<"press 2 for three numbers"<<endl;
    
    cout<<"press="<<endl;

    cin>>press;

    switch(press)
    {
        case 1: int a,b,c;

        cout<<"enter your two numbers"<<endl;

        cin>>a>>b;

        c=a+b;

        cout<<"your result="<<c;

        break;

        case 2: int x,y,z,h;

         cout<<"enter your three numbers"<<endl;

         cin>>x>>y>>h;

         z=x+y+h;

         cout<<"your result="<<z<<endl;
         
         break;

          default: cout<<"INVALID CHOICE"<<endl;
        break;

    }
}
void sub()
{   

    cout<<"how many numbers you want to substract"<<endl;

    int press;

    cout<<"press 1 for two number"<<endl;

    cout<<"press 2 for three numbers"<<endl;
    
    cout<<"press="<<endl;

    cin>>press;

    switch(press)
    {
        case 1: int a,b,c;

        cout<<"enter your two numbers"<<endl;

        cin>>a>>b;

        c=a-b;

        cout<<"your result="<<c;

        break;

        case 2: int x,y,z,h;

         cout<<"enter your three numbers"<<endl;

         cin>>x>>y>>h;

         z=x-y-h;

         cout<<"your result="<<z<<endl;

         break;

          default: cout<<"INVALID CHOICE"<<endl;
        break;

    }

}
void mul()
{   

    cout<<"how many numbers you want to multiply"<<endl;

    int press;

    cout<<"press 1 for two number"<<endl;

    cout<<"press 2 for three numbers"<<endl;
    
    cout<<"press="<<endl;

    cin>>press;

    switch(press)
    {
        case 1: int a,b,c;

        cout<<"enter your two numbers"<<endl;

        cin>>a>>b;

        c=a*b;

        cout<<"your result="<<c;

        break;

        case 2: int x,y,z,h;
         cout<<"enter your three numbers"<<endl;

         cin>>x>>y>>h;

         z=x*y*h;

         cout<<"your result="<<z<<endl;

         break;

          default: cout<<"INVALID CHOICE"<<endl;
        break;

    }

}
void div()
{   

    cout<<"how many numbers you want to add"<<endl;

    int press;

    cout<<"press 1 for two number"<<endl;
    
    cout<<"press 2 for three numbers"<<endl;
    
    cout<<"press="<<endl;

    cin>>press;

    switch(press)
    {
        case 1: float a,b,c;

        cout<<"enter your two numbers"<<endl;

        cin>>a>>b;

        c=a/b;

        cout<<"your result="<<c;

        break;

        case 2: float x,y,z,h;

         cout<<"enter your three numbers"<<endl;

         cin>>x>>y>>h;

         z=x/y/h;

         cout<<"your result="<<z<<endl;

         break;

          default: cout<<"INVALID CHOICE"<<endl;
        break;

    }

}


int main()
{
    cout<<"WELCOME TO DIGITAL CALCULATOR"<<endl;
   
    
    cout<<"WHICH OPERATION WOULD YOU LIKE TO PERFORM ?"<<endl;
    
    cout<<"ADDITTION"<<endl;

    cout<<"SUBSTRACTION"<<endl;

    cout<<"MULTIPLICATION"<<endl;

    cout<<"DIVISION"<<endl;

    int option;

    cout<<"option 1 for addition"<<endl;

    cout<<"option 2 for substraction"<<endl;

    cout<<"option 3 for multiplication"<<endl;

    cout<<"option 4 for division"<<endl;
   

    cout<<"enter your option=";

    cin>>option;

     

    switch(option)
    {
        case 1: add();
       
        break;

        case 2: sub();
        break;

        case 3: mul();
        break;

        case 4: div();
        break;

        default: cout<<"INVALID CHOICE"<<endl;
        break;
    }

    return 0;
}