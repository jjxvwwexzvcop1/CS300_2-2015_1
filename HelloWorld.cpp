#include <iostream>
#include <cmath>
using namespace std;
int check(int c,int n , int x[]){
    int y = c-1 , temp = 0;
    for(int i = 0; i < c ; i++){
        if(n%2 == 1){
            temp += x[y];
        }
        y--;
        n = n/2;
    }
    return temp%2;
}
main(){
    int N;
    cin >> N;
    int value[N];
    for(int i = 0 ; i < N ; i++)
        cin >> value[i];
    int result = 0;
    for(int i = 0 ; i < (int)pow(2,N) ; i++){
        if(check(N,i,value))
            result++;
    }
    cout << result;
}
