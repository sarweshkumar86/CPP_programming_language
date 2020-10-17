#include<iostream.h>
#include<conio.h>
class nesting
{
public:
int a,b,c;
void get();
int greater();
void display();
};

void nesting::get()
{
cout<<"please enter two number \n";
cin>>a>>b;
}
int nesting::greater()
{
if(a>b)
{
return (a);
}
else
{
 return(b);
}
}

void nesting::display()
{
cout<< "\n greater number is"<< greater();
}

void main()
{
clrscr();
nesting n;
n.get();
n.display();
getch();
}



