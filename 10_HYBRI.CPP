//multilevel inheitance

#include<iostream.h>
#include<conio.h>
class A
{
public:
void disp1()
{
 cout<<" \n This is class A" ;
}
};

class B:virtual  public A
{
public:
void disp2()
{
 cout<<" \n This is class B " ;
}

} ;


class D:virtual public A
{
public:
void disp3()
{
cout<<" \n This is class D";
}

};
class C:public B,public D
{

};


void main()
{
clrscr();
C c;
c.disp1();
c.disp2();
c.disp3();

getch();
}