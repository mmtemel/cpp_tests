#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

class TestDataEmptyArray
{
    public:
        vector<int> get_array(){
            vector<int> v(0);
            return v;
        }
};

class TestDataUniqueValues
{
    public:
        vector<int> get_array(){
            srand(time(NULL));
            int vsize = (rand() % 100) + 2;
            // cout<<"vsize: "<<vsize<<endl;
            vector<int> v(vsize);
            for (size_t i = 0; i < vsize; i++)
            {
                v[i]=rand();
                // cout<<v[i]<<" ";
            }
            // cout<<endl;
            return v;
        }
        int get_expected_result(vector<int> v){
            return min_element(v.begin(), v.end()) - v.begin();
        }
};

class TestDataExactlyTwoDifferentMinimums
{
    public:
        vector<int> get_array(){
            srand(time(NULL));
            int vsize = (rand() % 100) + 2;
            // cout<<"vsize: "<<vsize<<endl;
            vector<int> v(vsize);
            for (size_t i = 0; i < vsize; i++)
            {
                v[i]=rand();
                // cout<<v[i]<<" ";
            }
            // cout<<endl;
            int minval = min_element(v.begin(), v.end()) - v.begin();
            // cout<<"minval: "<<minval<<endl;
            int ind = minval;
            while(ind == minval)
                ind = rand()%v.size();
            // cout<<"ind: "<<ind<<endl;
            v[ind] = v[minval];
            // for (size_t i = 0; i < vsize; i++)
                // cout<<v[i]<<" ";
            // cout<<endl;
            return v;
        }
        int get_expected_result(vector<int> v){
            return min_element(v.begin(), v.end()) - v.begin();
        }
};

int main()
{
    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);

        vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        int n = stoi(first_multiple_input[0]);

        int k = stoi(first_multiple_input[1]);

        string a_temp_temp;
        getline(cin, a_temp_temp);

        vector<string> a_temp = split(rtrim(a_temp_temp));

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            int a_item = stoi(a_temp[i]);

            a[i] = a_item;
        }
    }

    //
        TestDataExactlyTwoDifferentMinimums tv;
        vector<int> v = tv.get_array();
        int min_ind = tv.get_expected_result(v);
        // cout<<"min element at: "<<min_ind<<endl;

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}


/* class TestDataEmptyArray:
    def get_array(self):
        return []
    

class TestDataUniqueValues:
    def get_array(self):
        return [1, 2, 3]
    
    def get_expected_result(self):
        return minimum_index(self.get_array())
    
class TestDataExactlyTwoDifferentMinimums:
    def get_array(self):
        return [3, 4, 5, 2, 2]
    
    def get_expected_result(self):
        return minimum_index(self.get_array())
    

TestDataEmptyArray = TestDataEmptyArray()
TestDataUniqueValues = TestDataUniqueValues()
TestDataExactlyTwoDifferentMinimums = TestDataExactlyTwoDifferentMinimums() */