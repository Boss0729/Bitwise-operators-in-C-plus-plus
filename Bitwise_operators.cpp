//Prajwal
//24070123073
//A3
#include <iostream>
using namespace std;

int main() {
    
    int a,b;
    a=4;//100
    b=2;//10
    
    int bitwise_and=a&b;
    int bitwise_or=a|b;
    int bitwise_not=~a;
    int bitwise_xor=a^b;
    int left_shift=a<<2;//10000
    int right_shift=a>>1;
    int left_shiftb=b<<2;
    int right_shiftb=b>>1;
    
    cout<<"AND: "<<bitwise_and<<endl;
    cout<<"OR: "<<bitwise_or<<endl;
    cout<<"Xor: "<<bitwise_xor<<endl;
    cout<<"NOT: "<<bitwise_not<<endl;
    cout<<"LEFT SHIFT: "<<left_shift<<endl;
    cout<<"RIGHT SHIFT: "<<right_shift<<endl;
    cout<<"LEFT SHIFT for b: "<<left_shiftb<<endl;
    cout<<"RIGHT SHIFT for b: "<<right_shiftb<<endl;
    
    return 0;
}
/*Output
AND: 0
OR: 6
Xor: 6
NOT: -5
LEFT SHIFT: 16
RIGHT SHIFT: 2
LEFT SHIFT for b: 8
RIGHT SHIFT for b: 1
*/