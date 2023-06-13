#include <iostream>
#include <vector>
#include <map>

using namespace std;

class SnapshotArray {
public:
    vector<map<int, int>> v;
    int ss = 0;
    SnapshotArray(int length) {
        v.resize(length);
        for(int i = 0; i < length; i++)
            v[i][ss] = 0;
    }
    
    void set(int index, int val) {
        v[index][ss] = val;
    }
    
    int snap() {
        ss++;
        return (ss-1);
    }
    
    int get(int index, int snap_id) {
        map<int, int>::iterator it = v[index].find(snap_id);
        if(it == v[index].end())
        {
            it = --v[index].lower_bound(snap_id);
            return it->second;
        }
        return v[index][snap_id];
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */