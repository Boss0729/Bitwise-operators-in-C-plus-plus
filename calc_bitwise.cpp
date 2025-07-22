//5e
//Prajwal
//24070123073
//A3
#include <iostream>
using namespace std;

int main() {
    float n1, n2;
    int choice;
    cout<<"Enter 1st number: "<<endl;
    cin>>n1;
    cout<<"Enter 2nd number: "<<endl;
    cin>>n2;
    cout<<"1. Additon"<<endl<<"2. Subtraction"<<endl<<"3. Multiplication"<<endl<<"4. Division"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        cout<<n1<<"+"<<n2<<"="<<n1+n2<<endl;
        break;
        case 2:
        cout<<n1<<"-"<<n2<<"="<<n1-n2<<endl;
        break;
        case 3:
        cout<<n1<<"*"<<n2<<"="<<n1*n2<<endl;
        break;
        case 4:
        cout<<n1<<"/"<<n2<<"="<<n1/n2<<endl;
        break;
        default:
        cout<<"Incorrect option! Plz select correct option! "<<endl;
    }
    return 0;
}
/*Output
Enter 1st number: 
12
Enter 2nd number: 
23
1. Additon
2. Subtraction
3. Multiplication
4. Division
1
12+23=35*/