#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    double score[N];
    double maxScore = 0;
    double res = 0;

    for(int i=0; i<N; i++) {
        cin >> score[i];
        if(score[i] > maxScore){
            maxScore = score[i];
        }
    }
    for(int i=0; i<N; i++) {
        score[i] = (score[i]/maxScore)*100;
        res = res + score[i];
    }
    cout << res/N;
}