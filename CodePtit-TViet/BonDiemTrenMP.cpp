#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct ToaDo {
    int x,y,z;
};

ToaDo point[4];
ToaDo vec[3];
ToaDo vec_AB;

void input() {
    for(int i=0;i<4;i++) cin >> point[i].x >> point[i].y >> point[i].z;
}

void solve()
{
    vec[0].x = (point[1].x - point[0].x);
    vec[0].y = (point[1].y - point[0].y);
    vec[0].z = (point[1].z - point[0].z);
    vec[1].x = (point[2].x - point[0].x);
    vec[1].y = (point[2].y - point[0].y);
    vec[1].z = (point[2].z - point[0].z);
    vec[2].x = (point[3].x - point[0].x);
    vec[2].y = (point[3].y - point[0].y);
    vec[2].z = (point[3].z - point[0].z);
    vec_AB.x = vec[0].y * vec[1].z - vec[0].z * vec[1].y;
    vec_AB.y = vec[0].z * vec[1].x - vec[0].x * vec[1].z;
    vec_AB.z = vec[0].x * vec[1].y - vec[0].y * vec[1].x;
    int ans = 0;
    ans = vec_AB.x * vec[2].x + vec_AB.y * vec[2].y + vec_AB.z * vec[2].z;
    if (!ans) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        input();
        solve();
    }
    return 0;
}