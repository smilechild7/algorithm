#include <iostream>
#include <queue>
#include <functional>

ios::sync_with_stdio(false);
using namespace std;

int main() {
    int N, n;
    cin >> N;
    
    priority_queue<int, vector<int>, greater<int> > pq;

    for(int i=0; i<N; i++) {
        cin.tie(0) >> n;
        if (n==0) {
            if(pq.empty()) {
                cout << 0 << '\n';
            } else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        } else {
            pq.push(n);
        }
    }
}