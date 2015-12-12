#include <stdio.h>
#include <math.h>



int main(){

    int max = 0;
    int count = 0;
    double p, b, ans;

    for(p = 5; p <1000; p+=1){
        for(b = 1; b < p ; b+=1){
            double c = ((p * p * -1 ) / (2 * (b - p))) - b;
            if((int) c == c && c < p - b ){
                int a = p - (c + b);
                if(c + b + a == p){
                count += 1;
                }
            }
        }
        if(count > max){
            max = count;
            ans = p;
        }
        count = 0;
    }
    printf("%f\n", ans);
}
