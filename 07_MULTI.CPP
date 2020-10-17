//Hierachical  inheitance

#include<iostream.h>
#include<conio.h>
class A
{
int a,b;
public:
void add()
{
 cout<<"\n  please enter two number \n" ;
 cin>>a>>b;
 cout<<"\n sum of two number is " <<(a+b);
}
};

class B:public A
{

};
class C:public A
{
};


void main()
{
clrscr();
B x;
C y;
x.add();
y.add();
getch();
}