#include<iostream>
using namespace std;

struct camera{
int front;
int rear;

};

struct phone
{
    string name;
    string processor;
    int ram;
    int rom;
    camera camera;
    int price;

};
int main(){
camera sony;
sony.front=13;
sony.rear=64;
cout<<sony.front<<endl;
phone moto;
moto.name = "Aayush Gupta";
moto.processor = "Snapdragon";
moto.ram = 4;
moto.rom = 64;
moto.camera.front = 64;
moto.camera.rear = 13;
moto.price = 10000;
cout<<moto.name<<endl;
cout<<moto.processor<<endl;
cout<<moto.ram<<endl;
cout<<moto.rom<<endl;
cout<<moto.camera.front<<endl;
cout<<moto.camera.rear<<endl;
cout<<moto.price<<endl;
return 0;

}