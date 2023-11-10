#include<iostream>

int main(){
    std::cout << "Hello world!";

    int num = 10;

    for(int i = 0;i<num;i++){
        if(i %2 == 0){
            std::cout <<i <<  " This is even number!" << "\n";
        }
    }
}