// Priyansha 
//24070123079
//ENTC-A3
#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        string branch;
        string subject;
        string year;
        float result;
    };

int main() {
    Student s1;
    Student s2;
    
    s1.name="Priyansha ";
    s1.branch="ENTC ";
    s1.subject="C++ ";
    s1.year="second";
    s1.result=8.2;
    
    s2.name="\n Akshita ";
    s2.branch="AIML ";
    s2.subject="DSA ";
    s2.year="second";
    s2.result=7.9;
    
    cout<<s1.name<<endl;
    cout<<s1.branch<<endl;
    cout<<s1.subject<<endl;
    cout<<s1.year<<endl;
    cout<<s1.result<<endl;

    cout<<s2.name<<endl;
    cout<<s2.branch<<endl;
    cout<<s2.subject<<endl;
    cout<<s2.year<<endl;
    cout<<s2.result<<endl;
    return 0;
}

OUTPUT:
/*
Priyansha 
ENTC 
C++ 
second
8.2

 Akshita 
AIML 
DSA 
second
7.9
*/
