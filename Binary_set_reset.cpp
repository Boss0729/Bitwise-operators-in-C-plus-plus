//Prajwal
//24070123073
//A3
#include <iostream>
using namespace std;

int main() {
    int a=160, bit_to_reset, set,reset,bit_to_set;
    
    cout << "Enter the bit to be set: ";
    cin>>bit_to_set;
    set=a|(1<<bit_to_set);
    
    
    cout << "Enter the bit to be reset: ";
    cin>>bit_to_reset;
    
    reset=a&(~(1<<bit_to_reset));
    
    cout<<"set bit "<<set<<endl;
    cout<<"rest bit "<<reset<<endl;
    return 0;
}
/*Output
Enter the bit to be set: 3
Enter the bit to be reset: 7
set bit 168
rest bit 32
*/