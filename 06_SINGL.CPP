#include<iostream.h>
#include<conio.h>
class A
{
int a,b;
public:
void add()
{
 cout<<"please enter two number \n" ;
 cin>>a>>b;
 cout<<"sum of two number is " <<(a+b);
}
};

class B:public A
{

};

void main()
{
clrscr();
B x;
x.add();
getch();
}