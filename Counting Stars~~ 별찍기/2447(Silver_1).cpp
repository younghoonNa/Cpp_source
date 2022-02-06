건물 모양 찍기.
  
if (input_num == 3)
 
출력 :
***
* *
***

if (input_num == 9)
 
출력 :
*********
* ** ** *
*********
***   ***
* *   * *
***   ***
*********
* ** ** *
*********

if (input_num == 27)
 
출력 :
***************************
* ** ** ** ** ** ** ** ** *
***************************
***   ******   ******   ***
* *   * ** *   * ** *   * *
***   ******   ******   ***
***************************
* ** ** ** ** ** ** ** ** *
***************************
*********         *********
* ** ** *         * ** ** *
*********         *********
***   ***         ***   ***
* *   * *         * *   * *
***   ***         ***   ***
*********         *********
* ** ** *         * ** ** *
*********         *********
***************************
* ** ** ** ** ** ** ** ** *
***************************
***   ******   ******   ***
* *   * ** *   * ** *   * *
***   ******   ******   ***
***************************
* ** ** ** ** ** ** ** ** *
***************************


#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

void star(int x, int y, int num) {
    
    if((x/num)%3 == 1 && (y/num)%3 == 1)
        cout << " ";
    else {
        if(num/3 ==0)
            cout << "*";
        else
            star(x,y,num/3);
            
    }
    

}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k;
    cin >> k;
    
    
    for(int i=0; i<k; i++) {
        for(int j=0; j<k; j++) {
            star(i, j, k);
        }
        cout << "\n";
    }
    
   
    
 
}

