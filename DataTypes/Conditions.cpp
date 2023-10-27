#include<iostream>
using namespace std;

 int main(){
    // std::cout << "Hellow, world!";

    int num = 11;
    cin >> num;

    if(num%2 == 0){
        // std::cout << num << " is even";
    }else if(num%2 == 1){
        // std::cout << num << "is odd";
    }
    int number = 10;
    // std::cin >> number;

    for(int i = 0;i<number;i++){
        if(i == num){
            // std::cout << i << " Equals \n ";
        }else{
            // std::cout << i<< " Not Equals \n ";
        }
    }
    int arr[] = {1,2,3,4,5,6,7,8,9};

    // for(int i : arr ){
    //     cout<< i<< "\n";
    // }

    while(num >0){
        // std::cout << num << " is greater  \n";
        num--;
    }

    do{
        std::cout << num << "is greater";
        num--;
    }while( num>0);
    // std::cout << "Your number is " << number;
    return 0;
}