#include <iostream>
#include <algorithm>

using namespace std;

class Buildings
{
    public:
        int b1=0;
        int b2=0;
        int b3=0;
        int b4=0;
        int b5=0;

        void Move(int b6){
            b1 = b2;
            b2 = b3;
            b3 = b4;
            b4 = b5;
            b5 = b6;
        }

        int numOfGreen(){
            int l,r;
            if(b3 > max(b1,b2)){
                l = b3-max(b1,b2);
            } else {
                l = 0;
            } 

            if(b3 > max(b4,b5)){
                r = b3-max(b4,b5);
            } else {
                r = 0;
            }
            return min(l,r);
        }
};

int main() {
    int T=10;
    for(int j=0; j<T; j++){
        int length, l;
        int res = 0;
        cin >> length;
        Buildings b;
        for(int i=0; i<length; i++) {
            cin >> l;
            b.Move(l);
            res += b.numOfGreen();
        }
        cout << '#'<< j+1 << ' '<< res << endl;
    }
}