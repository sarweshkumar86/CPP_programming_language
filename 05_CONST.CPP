#include<iostream.h>
#include<conio.h>
class cons
{
int a,b,c;
public:

cons(int x)
{
a=x;

cons(int x,int y)
{
b=x;
c=y;

}


void display1()
{
cout<<" \n constructor value passing at the time of object creation is " <<a;
}

cout<<"\n square of first constructo is " <<a*a;
}
void display2()
{
cout<<" \n constructor value passing at the time of object creation is "<<b <<" and " <<c;
cout<<"\n sum of second constructor value  is " <<(b+c);
}


};

void main()
{
clrscr();
cons c(5);
cons c1(10,10);
c.display1();
c1.display2();
getch();
}