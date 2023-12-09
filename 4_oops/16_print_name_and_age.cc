#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class Person {

    string name;
    int age;

    public:
    void setValues(string name, int age) {
        this->name = name;
        this->age = age;
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

};

int main() {

    Person p;

    string name;
    int age;
    getline(cin,name);
    cin>>age;

    p.setValues(name,age);
    cout<<"The name of the person is "<<p.getName()<<" and the age is "<<p.getAge()<<"."<<endl;
    return 0;
}