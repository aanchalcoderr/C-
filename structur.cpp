//structures
//unions
// /enum

//*****************************structures************************************************************** */


// #include<iostream>
// using namespace std;
//      //struct emp{
//      typedef struct emp{
//         int id;
//         char favchar;
//         float salary;

//     } ep;   // provide the nick name
// int main(){
// //struct emp e1;
// ep e1;

// e1.id=2;
// e1.favchar='c';
// e1.salary=5000;
// cout<<e1.id<<endl;
// cout<<e1.favchar<<endl;
// cout<<e1.salary<<endl;

// }
//typedef gives like nick name and we can use it in place of struct emp;

//*********************************************unions****************************************************/
//  stores largest  datatype so that it can accumulate all.


#include<iostream>
using namespace std;
union money {
    int rice ;
    char car;
    float pounds;
};
int main(){
    union money m1;
    m1.rice=34;
    m1.car= 'm';
    m1.pounds=234567;
    cout<<m1.rice;
    cout<<m1.pounds<<endl;
}






