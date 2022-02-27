#include <iostream>
#include <functional>

using std::cout;
using std::cin;
using std::function;


int sumar(int a , int b){
    cout << "\nEstoy sumando :D\n";
    return a + b;
}

int restar(int a , int b){
    cout << "\nEstoy restando :D\n";
    return a - b;
}

void s(function<int(int,int)> func, int a, int b){
    cout << func(a,b);
}

int main(){
    // tipoDeRetorno (*nombre)(tipoArgumento,...);
    int (*ptr)(int,int) = sumar;
    function<int(int,int)> func = [](int a, int b) -> int {
        return a + b;
    };
    s(ptr,8,9);
    return 0;
}