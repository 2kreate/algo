#include <iostream>

int main (){
    int n;
    int dist[10] = {0,0,0,0,0,0,0,0,0,0};
    while(std::cin >> n){
        switch(n){
            case 0: dist[0] += 1;
                    break;
            case 1: dist[1] += 1;
                    break;
            case 2: dist[2] += 1;
                    break;
            case 3: dist[3] += 1;
                    break;
            case 4: dist[4] += 1;
                    break;
            case 5: dist[5] += 1;
                    break;
            case 6: dist[6] += 1;
                    break;
            case 7: dist[7] += 1;
                    break;
            case 8: dist[8] += 1;
                    break;
            case 9: dist[9] += 1;
                    break;
        }
    }
    for(int i = 0; i<10; i++){
        std::cout << i << ": " << dist[i] << std::endl;
    }
    return 0;
}