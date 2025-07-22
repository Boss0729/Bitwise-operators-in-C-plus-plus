//5c
//Prajwal
//24070123073
//A3
#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    cout << "Enter 1st number: ";
    cin>>n1;
    cout << "Enter 2nd number: ";
    cin>>n2;
    cout << "Enter 3rd number: ";
    cin>>n3;
    if(n1>n2){
        if(n1>n3){
            cout<<n1<<" is the largetest"<<endl;
        }
        else{
            cout<<n3<<" is the largest"<<endl;
        }
    }
    else if(n2>n1){
        if(n2>n3){
            cout<<n2<<" is the largeest"<<endl;
        }
        else{
            cout<<n3<<" is the largest"<<endl;
        }
    }
    else{
        cout<<"All numbers are same"<<endl;
    }
    return 0;
}
/*Output
Enter 1st number: 11
Enter 2nd number: 56
Enter 3rd number: 23
56 is the largeest*/