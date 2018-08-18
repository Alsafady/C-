#include<iostream.h>
#include<conio.h>

int sum (int x , int y ){
return x+y;
}

void main(){

clrscr();

int a,b,c;

cout<<"Enter 1 NO. ";
cin>>a;

cout<<"Enter 2 NO. ";
cin>>b;

c = sum (a,b);

cout<<"total= "<<c;

getch();

}
