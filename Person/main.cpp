//
//  main.cpp
//  Person
//
//  Created by tenzin choten on 16/12/23.
//

#include <iostream>
#include <string>
using namespace std;

class Person{
    int age;
    string name;
    string gender;
    
    void ToUpper(string &str){
        transform(str.begin(),str.end(),str.begin(),::toupper);
    }
public:
    void input(){
        cout<<"enter name \n";
        cin>>name;
        ToUpper(name);
        
        cout<<"enter age\n";
        cin>>age;
        
        cout<<"enter gender \n";
        cin>>gender;
        ToUpper(gender);
        cout<<endl;
    
    }
    void output(){
        cout<<name<<endl<<age<<endl<<gender<<endl;
    }
    
};
int main() {
    Person p;
    
    p.input();
    p.output();
   
    return 0;
}
