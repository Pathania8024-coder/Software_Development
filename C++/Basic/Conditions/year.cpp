// if - else condition (leap year problem)

#include<iostream>
using namespace std;

int main(){

              int year = 1700;
              
              if (year%4==0 && year%100!=0 || year%400==0){
                            /* code */
                            cout<<"leap year";
              }else{
                            /* code */
                            cout<<"not a leap year";
              }
              
              

return 0;
}