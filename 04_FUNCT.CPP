#include<iostream.h>
#include<conio.h>
class funoverload
{
public:
void display()
{
cout<<" \n hello this is funciton overloading program" ;
}
void display(int a)
{
 cout<<" \n parameter pass at time  of calling is " <<a;
 cout<<"  \n square of that number is  " <<a*a;
}
void display(int a,int b)
{
cout<<" \n parameter pass at time  of calling is " <<a  << " and " <<b ;
cout<<"  \n sum of that number is  " <<a+b;

}

};



void main()
{
clrscr();
funoverload f;
f.display();
f.display(5);
f.display(10,10);
getch();
}



