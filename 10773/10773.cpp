#include <iostream>
#include <stack>

using namespace std;

int main(){
    int K, num;
    unsigned int res = 0;
    stack<int> stack;

    cin >> K;

    for(int i=0; i<K; i++) {
        cin >> num;
        if(num==0) {
            stack.pop();
        } else {
            stack.push(num);
        }
    }

    while(!stack.empty()) {
        res += stack.top();
        stack.pop();
    }

    cout << res;
}