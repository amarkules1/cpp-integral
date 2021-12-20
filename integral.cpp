#include <iostream>
using namespace std;

double integrate(double start, double end, int steps, double (*func)(double)){
    double total = 0.0;
    double step = (end - start)/steps;

    for(int i = 0; i < steps; i++){
        total += step * func(start + (i * step));
    }

    return total;
}

double x2(double x){
    return x * x;
}

double twoX(double x){
    return x * 2;
}

int main(){
    cout<<integrate(10,13,1000000,&twoX);
return 0;
}