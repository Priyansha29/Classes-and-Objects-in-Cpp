//Priyansha 
//24070123079
//ENTC-A3
#include <iostream>
using namespace std;

int main() {
    class Cube{
    public:
    int dimension;
    
    int volume(){
        int volume = dimension*dimension*dimension;
        return volume;
    }
    
};
    Cube v1;
    cout<<" Enter dimension: "<<endl;
    cin>>v1.dimension;

 
    
    cout<<"\n Given dimension of cube : "<<v1.dimension<<endl;
    cout<<"\n Volume :  "<<v1.volume()<<endl;
    
    

    return 0;
}

OUTPUT: 

/*
Enter dimension: 
3

 Given dimension of cube : 3

 Volume :  27*/
