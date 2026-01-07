#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <cmath>

using namespace std; 

int main(){
    /*
    Mi primera solución 
    
    int total_cost = d * 40;
    
    if (d >= 7) {
         total_cost -= 50;
    } else if (d >= 3){
         total_cost -= 20;
    } 
    
    */
    int d = 2;
    int total_cost = d * 40;

    d >= 7 ? total_cost -= 50: d >=3 ? total_cost -= 20: total_cost;

    cout << total_cost << endl;

    return 0;
    
}