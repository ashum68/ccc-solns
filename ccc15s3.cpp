#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int G, P, cnt, plane;
map <int, bool> spots;
int main(void) {
    
    cin >> G;
    cin >> P;

    for(int i=1;i<=G;i++) {
        spots[i] = true;
    }
    for(int i=0;i<P;i++) {
        cin >> plane;
        auto it = spots.lower_bound(plane);
        if (it -> first == plane) {
            spots.erase(it -> first);
            cnt++;
        } else {
            if (it == spots.begin()) {
                break;
            }
            it--;
            spots.erase(it -> first);
            cnt++;
        }
    }
    cout << cnt;
}