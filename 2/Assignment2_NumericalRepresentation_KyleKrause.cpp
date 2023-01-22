#include <iostream>

std::string nums[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main(){
    int num1;
    std::cin>>num1;
    int num2;
    std::cin>>num2;

    int i;

    for(i = num1; i < 10; i++){
        std::cout << nums[i] << std::endl;

        if(i == num2){
            return 0;
        }
    }

    
    for((10 >= num1) ? i = 10 : i = num1; i <= num2; i++){
        i % 2 == 0 ? std::cout << "even\n" : std::cout<<"odd\n";
    }

    return 0;
}