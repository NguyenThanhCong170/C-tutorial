#include <iostream>



int main(){
    int Bubbles[] = {10,1,2,5,7,3,6,4,9,8};
    int size = sizeof(Bubbles)/sizeof(Bubbles[0]);
    
    for(int i = 0; i<size; i++){
        for(int j = 0; j < size;j++){
            if(Bubbles[i] > Bubbles[j]){
                int a = Bubbles[j];
                Bubbles[j] = Bubbles[i];
                Bubbles[i] = a;
            }
        }
        
    }
    std::cout<<Bubbles[0];
    return 0;
}


