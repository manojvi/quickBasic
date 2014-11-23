#include <iostream>
#include<string>


using namespace std;
#define NewL '\n'

int main() {
/* Adtran interview question with Gary Culp Group:
The main mistake was the big or little Endian questions. 
And hence typecasting mistake.*/
int a=0x123456;
char *ptr=(char*)&a;
cout<<"The contenst of A: \n"<<a<<endl;
cout<<"the contents are : \n"<<*ptr<<endl;
/*-------------------------------------------------------*/

/*
The Next bunch of code is the basics of variables.
*/

//Integer addition..

int b=4;
int c{6};
int result(0);
result = b-c;
cout<<"The result of B-C is "<<result<<endl;

//String Basics
string myString;
myString = "This is string One. \n"; 
cout<<myString;

//Conditional ternary operators

result  = c>b ? c : b;
cout <<"The greater of C and B is :"<<result<<endl;
 
/*
Basic input out to receive and send out data.
*/

int age(0);

cout<<"Enter Your Age: \n";
cin>>age;
age+=10;
cout<<"You will be "<<age<<" years old in 10 years. \n";

/*
Price , Quantity and total cost.
*/



return 0;



}
