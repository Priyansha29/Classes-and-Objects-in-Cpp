//Priyansha 
//24070123079
//ENTC-A3
#include <iostream>
using namespace std;

int main() {
    class Rectangle{
    public:
    int length;
    int width;
    
};
    Rectangle r1;
    cout<<" Enter length: "<<endl;
    cin>>r1.length;
    cout<<"Enter width: "<<endl;
    cin>>r1.width;
    
    if(r1.length==r1.width){
        cout<<"DImensions of square";
    }
    else{
        cout<<"Dimensions of rectangle \n";
    }
    cout<<"\n Given Length : "<<r1.length<<endl;
    cout<<"\n Given width : "<<r1.width<<endl;
    cout<<"\n Area :  "<<r1.length*r1.width<<endl;

    return 0;
}

OUTPUT:
/*
Enter length: 
20
Enter width: 
40
Dimensions of rectangle 

 Given Length : 20

 Given width : 40

 Area :  800*/

/*
Enter length: 
20
Enter width: 
20

DImensions of square
 Given Length : 20

 Given width : 20

 Area :  400*/
