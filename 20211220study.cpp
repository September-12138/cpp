#include <iostream>
using namespace std;

struct Smartphone {
    string name;
    int storageSpace;
    string color;
    float price;
};

struct person {
    string name;
    int age;
    Smartphone smartphone;
};

void printSmartphoneInfo(Smartphone smartphone){
    cout<<"name: "<<smartphone.name<<endl;
    cout<<"storageSpace: "<<smartphone.storageSpace<<endl;
    cout<<"color: "<<smartphone.color<<endl;
    cout<<"price: "<<smartphone.price<<endl;
}

void printPersonIofo(person person){
    cout<<"name: "<<person.name<<endl;
    cout<<"age: "<<person.age<<endl;
    printSmartphoneInfo(person.smartphone);
}

int main()
{
    
    Smartphone smartphone;
    smartphone.name="iphone 12";
    smartphone.storageSpace = 32;
    smartphone.color = "black";
    smartphone.price = 999.99;

    Smartphone smartphone2;
    smartphone2.name="Smasung Galaxy s21 Ultra";
    smartphone2.storageSpace = 64;
    smartphone2.color = "gray";
    smartphone2.price = 888.88;
法沙发沙发
    person p;
    p.name = "wangheng";
    p.age = 22;
    p.smartphone =smartphone2;
    printPersonIofo(p);

    system("pause>0");
}
