#include <iostream>

using namespace std;

main(){
    int L,M,D,Q,S;
    cin >> L >> M >> D;
    cin >> Q >> S;
    int event[Q] , run[D];
    int special_land[S] , event_land[Q];
    for(int i = 0 ; i < S ; i++)
        cin >> special_land[i];
    for(int i = 0 ; i < Q ; i++)
        cin >> event_land[i] >> event[i];
    for(int i = 0 ; i < D ; i++)
        cin >> run[i];

    int position = 0;
    for(int i = 0 ; i <= D ; i++){
        for(int j = 0 ; j < S ; j++){
            if(position == special_land[j]){
                M = M*2;
            }
        }
        for(int j = 0 ; j < Q ; j++){
            if(position == event_land[j]){
                M += event[j];
            }
        }
        if(i == D)
            break;
        position += run[i];
        if(position >= L)
            break;
        M--;
    }
    cout << M;
}
