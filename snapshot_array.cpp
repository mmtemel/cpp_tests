#include <iostream>
#include <vector>
#include <map>

using namespace std;

class SnapshotArray {
public:
    vector<int> v;
    int ss = 0;
    map<int, vector<int>> m;
    SnapshotArray(int length) {
        v.resize(length, 0);
    }
    
    void set(int index, int val) {
        v[index] = val;
    }
    
    int snap() {
        ss++;
        m[ss-1] = v;
        return (ss-1);
    }
    
    int get(int index, int snap_id) {
        return m[snap_id][index];
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */