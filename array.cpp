#include <iostream>

int main(){

    int myArr[10] ;

    for (int i =0; i< sizeof(myArr)/sizeof(myArr[0]);i++){
        myArr[i] = i;
    }

    std::cout << std::endl << "using normal loop" << std::endl;
    for (int i = 0; i< sizeof(myArr)/ sizeof(myArr[0]);i++){
        std::cout << myArr[i];
    }

    std::cout << std::endl << "using for each loop" << std::endl;
    for (auto i : myArr){
        std::cout << i; 
    }
    return 0;
}