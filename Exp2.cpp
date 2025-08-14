// Priyansha 
// 24070123079
//ENTC  -A3
#include <iostream>
using namespace std;

class Food{
    public:
        string name;
        int price;
        int rating;
    };
    
class Drink{
    public:
    string name;
    int price;
    int rating;
};

int main() {
    Food f1;
    Drink f2;
    cout<<"Enter name of food : "<<endl;
    cin>>f1.name;
    cout<<"Enter price of food : "<<endl;
    cin>>f1.price;
    cout<<"Enter rating of food out of 10: "<<endl;
    cin>>f1.rating;
    
    cout<<"Enter name of Beverage: "<<endl;
    cin>>f2.name;
    cout<<"Enter price of Beverage : "<<endl;
    cin>>f2.price;
    cout<<"Enter rating of Beverage out of 10: "<<endl;
    cin>>f2.rating;
    
    cout<<f1.name<<endl;
    cout<<f1.price<<endl;
    cout<<f1.rating<<endl;
    
    cout<<f2.name<<endl;
    cout<<f2.price<<endl;
    cout<<f2.rating<<endl;
    
    
    return 0;
}

OUTPUT:
/*
Enter name of food : 
samosa
Enter price of food : 
25
Enter rating of food out of 10: 
9
Enter name of Beverage: 
lemonade
Enter price of Beverage : 
45
Enter rating of Beverage out of 10: 
7
samosa
25
9
lemonade
45
7*/
