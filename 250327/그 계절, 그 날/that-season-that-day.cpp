#include <iostream>

int Y, M, D;

bool yoon(int Y){
    if(Y%4 == 0){
        if(Y%100 != 0){
            return true;
        }
        else if(Y%100==0 && Y%400 == 0){
            return true;
        }
    }
    return false;
}

int exist_day(bool a,int M,int D){
    if(a == true){
        int str1[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
        if(M > 12){
            std::cout << "-1";
            return 0;
        }
        if(str1[M-1] >= D){
            if(M >= 3 && M <= 5){
                std::cout << "Spring";
            }
            else if(M >= 6 && M <= 8){
                std::cout << "Summer";
            }
            else if(M >= 9 && M <= 11){
                std::cout << "Fall";
            }
            else if(M == 12 || M == 1 || M == 2){
                std::cout << "Winter";
            }
        }
        else{
            std::cout << "-1";
        }
    }
    else{
        int str2[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
        if(M > 12){
            std::cout << "-1";
            return 0;
        }
        if(str2[M-1] >= D){
            if(M >= 3 && M <= 5){
                std::cout << "Spring";
            }
            else if(M >= 6 && M <= 8){
                std::cout << "Summer";
            }
            else if(M >= 9 && M <= 11){
                std::cout << "Fall";
            }
            else if(M == 12 || M == 1 || M == 2){
                std::cout << "Winter";
            }
        }
        else{
            std::cout << "-1";
        }
    }
    return 0;
}

int main() {
    std::cin >> Y >> M >> D;

    bool a = yoon(Y);
    exist_day(a,M,D);

    return 0;
}