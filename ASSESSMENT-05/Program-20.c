// Write a program to print a total number of single digit prime number.
#include <stdio.h>
int main (){
    int i,j,digits=0;

     for(i=2; i<=9; i++){
          for(j=2; j<i; j++){
            if(i%j==0){
                digits++;
                break;
            }
        }
    }
    printf("\n%d",8-digits);
}