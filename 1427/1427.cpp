#include <iostream>

using namespace std;

int main() {
    long N;
    cin >> N;
    long n = N;
    int k=0;
    
    while(n>0){
        k += 1;
        n = n/10;
    }

    int numString[k];
    int j=1;
    
    for(int i=0; i<k; i++){
        numString[i] = N%10;
        N = N/10;
    }

    for(int i=0; i<k; i++){
        for(int j=i; j<k; j++){
            if(numString[i] < numString[j]){
                swap(numString[i], numString[j]);
            }
        }
        cout << numString[i];
    }
}

void swap(int* a,int* b){
    int* temp;
    temp = a;
    a = b;
    b = temp;
}