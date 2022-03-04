#include <iostream>
using namespace std;
class calculator
{

public:
 int a;
 int b;


private:
string name;

public:
void setName( string newname){

name=newname;
}
public:
string getName(){
    return name;
}


calculator(){
    a=0;
    b=0;
}  //constructor
 
calculator(int num1,int num2){
    a=num1;
    b=num2;

}
 
 
void display(){
    cout<<"the two values are"<<a<<","<<b<<"\n";
}
calculator(calculator&object){
    a=object.a;
    b=object.b;
}
  
int Addition(){
    return a+b;
}
};
int main(){
    calculator calname;
    calname.setName("casio");
    cout<<"name of calculator is :"<<"\n";
    cout<<calname.getName()<<"\n";
    calculator c1;
    c1.display();
    c1.Addition();
    calculator c2(5,6);
    c2.display();
    c2.Addition();
    calculator c3=c2;
    c3.display();
    c3.Addition();
    
    cout<<"addition of a in both objects"<<c2.a+c3.a<<"\n";
    cout<<"addition of b in both objects"<<c2.b+c3.b<<"\n";




}
