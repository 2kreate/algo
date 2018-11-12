#include <cstdlib>
#include <ctime>
#include <iostream>
#include <cmath>
#include <chrono>

void get_five(int arr[5], int p_rand){
    for(int i=0; i < 5; i++){
        arr[i] = p_rand % 10;
        p_rand /= 10;
    }
}

int return_one_digit(int arr[5]){
    int random = 0;
    int i=0;
    int p_rand;
    std::chrono::milliseconds ms;
    while(i<4 && random < 9){
        p_rand = rand();
        if (p_rand < 10000){
            p_rand = rand();
        }
        get_five(arr, p_rand);
        for(int j = 0; j < 5; j++){
            if(sin(arr[j]) < -.7){
                ms = std::chrono::duration_cast< std::chrono::milliseconds >(std::chrono::system_clock::now().time_since_epoch());
                if(abs(sin(ms.count())) < .99){
                    random += pow(2,i);
                    i++;
                    break;
                }
            }
            else if (sin(arr[j]) > .9)
            {
                ms = std::chrono::duration_cast< std::chrono::milliseconds >(std::chrono::system_clock::now().time_since_epoch());
                if(abs(sin(ms.count())) < .99){
                    i++;
                    break;
                }
            }   
        }
        //std::cout<<random<<" "<<i<<std::endl;
    }
    if(random > -1 && random < 10){
        return random;
    }else return -1;
}

int main (){

    int rand_digits[5];
    int single_digit_random;

    srand(time(NULL));
    int p_rand = rand();
    
    int total_digits = 0;

    while(total_digits < 10000000){
        single_digit_random = return_one_digit(rand_digits);
        if(single_digit_random > -1){
            std::cout << single_digit_random << std::endl;
        }
        total_digits++;
    }
    return 0;
}