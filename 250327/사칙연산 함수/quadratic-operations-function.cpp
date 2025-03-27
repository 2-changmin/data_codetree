#include <iostream>

int a;
int c;
char o;

int plus(int a,char o, int c){
    int result1 = a+c;
    return result1;
}

int minus(int a,char o, int c){
    int result2 = a-c;
    return result2;
}

int mult(int a,char o, int c){
    int result3 = a*c;
    return result3;
}

int slash(int a,char o, int c){
    int result4 = a/c;
    return result4;
}

int main() {
    std::cin >> a >> o >> c;

    int result;

    if(o == '+'){
        result = plus(a,o,c); 
        std::cout << a << " " << o << " " << c << " = " << result;
    }
    else if (o == '-') {
        result = minus(a,o,c); 
        std::cout << a << " " << o << " " << c << " = " << result;
    }
    else if (o == '*') {
        result = mult(a,o,c); 
        std::cout << a << " " << o << " " << c << " = " << result;
    }
    else if (o == '/') {
        result = slash(a,o,c); 
        std::cout << a << " " << o << " " << c << " = " << result;
    }
    else{
        std::cout << "False";
    }
    return 0;
}