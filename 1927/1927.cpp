#include <iostream>
#include <queue>
#include <functional>

using namespace std;

int main() {
    int N, n;
    cin.tie(0);
    cin >> N;
    ios::sync_with_stdio(false);

    priority_queue<int, vector<int>, greater<int> > pq;

    for(int i=0; i<N; i++) {
        cin >> n;
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