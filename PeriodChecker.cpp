#include <iostream>

using namespace std;

main(){
    int N , M;
    cin >> N >> M;
    int time[N][M];

    for(int i = 0 ; i < M ; i ++){
        for(int j = 0; j < N ; j++)
            cin >> time[j][i];
    }
    int same = 1 , period = 0;
    for(int i = 0 ; i < N ; i ++){
        for(int j = 1 ; j < M ; j ++){
            if( j == 1){
                period = time[i][j]-time[i][j-1];
            }
            if(period != time[i][j]-time[i][j-1]){
                if(period < time[i][j]-time[i][j-1])
                    period = time[i][j]-time[i][j-1];
                same =0;
            }
        }
        cout << same << " " << period << endl;
        same = 1;
    }
}
