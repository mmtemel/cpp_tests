#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int dr = 0;//day returned
    int dd = 0;//due day
    int drd, drm, dry;//day returned -> day, month, year
    int ddd, ddm, ddy;//due day -> day, month, year
    cin >> drd >> drm >> dry;
    cin >> ddd >> ddm >> ddy;
    dr = (drd * 15) + (drm * 500) + (dry * 10000);
    dd = (ddd * 15) + (ddm * 500) + (ddy * 10000);
    if(dr<=dd)
        cout<<0<<endl;
    else if (ddy < dry)
        cout<<10000<<endl;
    else if (ddm < drm)
        cout<<(drm - ddm) * 500<<endl;
    else if (ddd < drd)
        cout<<(drd - ddd) * 15<<endl;
    return 0;
}
