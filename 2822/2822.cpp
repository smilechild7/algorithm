#include <iostream>

using namespace std;

int main() {
    int prob[8];
    int sum = 0;
    for(int i=0; i<8; i++){
        cin >> prob[i];
        sum += prob[i];
    }

    int min = 150;
    int key;

    for(int j=0; j<3; j++){
        for(int i=0; i<8; i++){
            if(prob[i]<min){
                min = prob[i];
                key = i;
            }
        }
        sum -= prob[key];
        prob[key] +=151;
        min = 150;
    }
    cout << sum << endl;
    for(int i=0; i<8; i++){
        if(prob[i]<=150){
            cout << i+1 << " ";
        }
    }
}
        