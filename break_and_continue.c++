//*************for loop******************************* */
// 
// // #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<20;i++){
//         if(i==18){
//             break;          // breaks the loop
//         }
//          cout<<i<<endl;
//     }
// }

//****************while loop************************** */


#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<20;i++){
        if(i==18){
            continue                 // skips the iteration
            ;
        }
         cout<<i<<endl;
    }
}