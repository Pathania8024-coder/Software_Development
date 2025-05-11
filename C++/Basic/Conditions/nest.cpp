// nested if statement

#include<iostream>
using namespace std;

int main(){

              int a, b, c;

              cout<<"enter a = ";
              cin>>a;
              cout<<"enter b = ";
              cin>>b;
              cout<<"enter c = ";
              cin>>c;

              if (a>b){
                            if (a>c){
                            /* code */
                            cout<<"a is greater than b & c"<<endl;
              }}if (b>c){
                            /* code */
                            cout<<"b is greater than c";
              }else{
                            /* code */
                            cout<<"invalid input";
              }

              return 0;
              
}