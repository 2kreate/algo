#include <iostream>
#include <string>

int main(void) {
    std::string str, best_word;
    int n, best_score, current_score;
    while(std::cin >> n && n != 0) {
        best_score = -1;
        best_word = "";
        current_score = 0;
        for (int i = 1; i <= n; i++){
            std::cin >> str;
            for(int i = 1; i <= str.length(); i++){
                if(str[i]==str[i-1] &&
                  (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' ||
                   str[i]=='u' || str[i]=='y')){
                    current_score++;
                std::cerr << "Current: " << current_score << std::endl;
                }
            }
            if(current_score > best_score){
                best_score = current_score;
                best_word = str;
            }
            current_score = 0;
        }
        std::cout << best_word << std::endl; 
    }
    return 0;
}