#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class student{
public:
char name[80];
int id;
};

class cors:public student{
public:
int cor;
float mark;

void setstudent(){
cout<<"\n\nEnter name: ";
gets(name);
cout<<"Enter id:";
cin>>id;
}

void setcor(){
cout<<"Enter cor: ";
cin>>cor;
cout<<"Enter mark: ";
cin>>mark;
cout<<"\n\nStudent add succesfully";
}
/*
void getcor(){
return cor;
}
*/
};


void main(){
clrscr();
int i=0;
int t=0;
char a;
int ch=0;
cors s[100];
do{
cout<<"\n\n============= Student =============\n";
cout<<"\n1. add new student.";
cout<<"\n2. show all student.";
cout<<"\n3. b";
cout<<"\n4. c";
cout<<"\n5. d";
cout<<"\n6. e";
cout<<"\n7. f";
cout<<"\n8. exit.\n\n";
cout<<"\n\nEnter your choice : ";
cin>>ch;
switch(ch){
case 1:
s[i].setstudent();
s[i].setcor();
i++;
break;
case 2:
cout<<"\n\nA. show all student in all courses. ";
cout<<"\nb. show name student in course. ";
cout<<"\n\nEnter your choice..";
cin>>a;
switch(a){
case 'a':

cout<<"\n\nName \tID \tCor \tMark\n==================================\n";
for (int w=0 ; w<i ; w++){
cout<<s[w].name<<"\t"<<s[w].id<<"\t"<<s[w].cor<<"\t"<<s[w].mark<<endl;
}

break;
case 'b':
cout<<"Enter course name :";
cin>>t;
cout<<"\n\nName \tID \tCor \tMark\n==================================\n";
/*
for (int h=0 ; h<i ; h++){
switch (t){
if (t == ){
cout<<s[h].name<<"\t"<<s[h].cor<<"\t"<<endl;
}
}
}
*/
break;
default:
cout<<"\nEror choise, Try again\a";
}



break;


case 7:

break;

case 8:
cout<<"\nEnd program ";
break;
default:
cout<<"\nEror choise, Try again\a";
}
getch();
clrscr();
}while (ch!=8);
}
