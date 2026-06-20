// #include<iostream>
// using namespace std;
// int d =90;
// int main(){
//     int a,b,c,d;
//     cout<<"enter value of a"<<endl;
//     cin>>a;
//     cout<<"enter value of b"<<endl;
//     cin>>b;
//     cout<<"enter value of c"<<endl;
//     cin>>c;
//     d=a+b+c;
//     cout<<"the sum is . "<<d<<endl;
//     cout<<"the global value of d is "<<d<<endl; // local is given more value so it would not change
//     cout<<"the global value of d is "<<::d<<endl; //scope resolution is used to get the global value.
// }
#include<iostream>
using namespace std;
int main(){
    float  d=34.4;  // are written to differentiate
    long double e=34.4;
    cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e<<endl;
    cout <<"sizeof d is "<<sizeof(d) <<endl;
    cout <<"sizeof e is "<<sizeof(e) <<endl;
    cout <<"sizeof d is "<<sizeof(34.4F) <<endl;
    cout <<"sizeof d is "<<sizeof(34.4L) <<endl;
    cout <<"sizeof d is "<<sizeof(34.4l) <<endl;
    cout <<"sizeof d is "<<sizeof(34.4f) <<endl;
    return 0;
}