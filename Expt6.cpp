//Priyansha 
//24070123079
//ENTC-A3
#include <iostream>
using namespace std;
int main() {
    float area;
    class Rectangle{
        public:
        float length;
        float width;
    };
    Rectangle r1;
    cout<<"Enter the lenght of rectangle: "<<endl;
    cin>>r1.length;
    cout<<"Enter the width of rectangle: "<<endl;
    cin>>r1.width;
    if(r1.width==r1.length){
        area=r1.length*r1.length;
        cout<<"The given dimensions are of a square and its area is: "<<area<<endl;
    }
    else{
        area=r1.length*r1.width;
        cout<<"The given dimensions is of a rectangle and its area is: "<<area<<endl;
        
    }

    return 0;
}
/*Output
case1:
Enter the lenght of rectangle: 
2.4
Enter the width of rectangle: 
2.4
The given dimensions are of a square and its area is: 5.76
case2:
Enter the lenght of rectangle: 
5.4
Enter the width of rectangle: 
2.1
The given dimensions is of a rectangle and its area is: 11.34
*/
