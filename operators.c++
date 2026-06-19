#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"value of a is"<<endl;
    cin>>a;
    cout<<"value of b is"<<endl;
    cin>>b;
    cout<<"the sum is"<<a+b<<endl;
    cout<<"the difference is"<<a-b<<endl;
    cout<<"the divisor is"<<a%b<<endl;
    cout<<"the product is"<<a*b<<endl;
    cout<<"the post increment  is"<<a++<<endl;
    cout<<"the preincrement is  is"<<++a<<endl;
    cout<<"the pre increment is"<<++b<<endl;  // yaha pe value b ki 2 ho gyi phr wapis se 1 ho jaegi
    cout<<"the post increment is"<<b++<<endl;// isliye yaha pr  2 hoga
    return 0;
}
