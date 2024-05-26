#include<iostream>
#include<string>
using namespace std;

struct per{
string name;
int age;
float weight;
float height;
double salary;
};
int main(){

per var1;
var1.age = 50;
var1.name = "Aayush gupta";
cout<<"Age = "<<var1.age<<endl;
cout<<"Name = "<<var1.name;
return 0;

}