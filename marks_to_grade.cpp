//5d
//Prajwal
//24070123073
#include <iostream>
using namespace std;
int main() {
    int choice;
    cout << "1. 100-90 Marks"<<endl<<"2. 89-80 Marks"<<endl<<"3. 79-70 Marks"<<endl<<"4. 69-60 Marks"<<endl<<"5. 59-50 Marks"<<endl<<"6. 49-40 Marks"<<endl<<"7. Below 40"<<endl;
    cout<<"Enter Marks from option to get the grades: "<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"O Grade";
        break;
        case 2:
        cout<<"A Grade";
        break;
        case 3:
        cout<<"B Grade";
        break;
        case 4:
        cout<<"C Grade";
        break;
        case 5:
        cout<<"D Grade";
        break;
        case 6:
        cout<<"E Grade";
        break;
        case 7:
        cout<<"Fail!";
        break;
        default:
        cout<<"Wrong choice!";
    }
    return 0;
}
/* Output
1. 100-90 Marks
2. 89-80 Marks
3. 79-70 Marks
4. 69-60 Marks
5. 59-50 Marks
6. 49-40 Marks
7. Below 40
Enter Marks from option to get the grades:
4
C Grade*/