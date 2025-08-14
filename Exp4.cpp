//Priyansha 
//24070123079
//ENTC-A3
#include <iostream>
using namespace std;

int main() {
    class Calculator{
    public:
    int num1;
    int num2;
    
};
    Calculator C1;
    cout<<"Enter num1: "<<endl;
    cin>>C1.num1;
    cout<<"Enter num2: "<<endl;
    cin>>C1.num2;
    
    cout<<"\n Given Number 1: "<<C1.num1<<endl;
    cout<<" Given Number 2 : "<<C1.num2<<endl;
    cout<<"\nAddition of numbers: "<<C1.num1+C1.num2<<endl;
    cout<<"Subtraction of numbers: "<<C1.num1-C1.num2<<endl;
    cout<<"Product of numbers: "<<C1.num1*C1.num2<<endl;
    cout<<"Division of numbers: "<<C1.num1/C1.num2<<endl;

    return 0;
}

OUTPUT:
/*
Enter num1: 
10
Enter num2: 
2

 Given Number 1: 10
 Given Number 2 : 2

Addition of numbers: 12
Subtraction of numbers: 8
Product of numbers: 20
Division of numbers: 5
*/
