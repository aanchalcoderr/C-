//POINTERS:---->>>>>data type which hold the address of other data types  
//&------>> address operator
//*------->> dereference operator


// #include<iostream>
// using namespace std;
// int main(){
//     int a=3;
//     int *ptr=&a;
//     cout<<"see both give same value that is "<<endl<<a<<endl<<*ptr<<endl;
//     cout<<"they give same value that is address "<<endl<<&a<<endl<<ptr<<endl;;
    
// }

//**********pointer to pointer*************************/

#include<iostream>
using namespace std;
int main(){
    int a=3;
    int *ptr=&a;
    int **b=&ptr;   /// address of pointer
    cout<<b;
}
