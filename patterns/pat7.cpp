#include <iostream>

using namespace std;
void pat7(int n){
    for(int i = 0; i<n; i++){

        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }

        //star
        for(int j =0; j<2*i+1; j++ ){
            cout<<"*";
        }

        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }

        cout<<endl;
    }
    
}
int main(){
    int n;
    cin>>n;
    pat7(n);

}

/*
    *
   ***
  *****
 *******
*********

this pattern follows 
space - star - space

space = n-i-1
    n=5, i=0, =5-0-1 =4

star = 2*i+1
    n=5, i=0, =2*0+1 =1

*/