#include <iostream>
#include <cmath>
using namespace std;
//Write sumSqrt() here.
float sumSqrt(int N){
    if(N > 0){
        float sum = 0;
        int i = 1;
        while(i <= N){
            sum += 1/sqrt(i);
            i++;
        }
        return sum;
    }else{
        return 0;
    }
}

int main()
{
    double a = sumSqrt(20);
    double b = sumSqrt(10);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(0);
    double g = sumSqrt(-1);
    double h = sumSqrt(-5);
    double i = sumSqrt(3);
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n";
    cout << h << endl << i;
}
