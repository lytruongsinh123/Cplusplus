#include<iostream>
#include<map>
#include<vector>
using namespace std;
class solution {
public :
    vector<map<int, int>> mp;
    map<int, int> v;
 
    void inputIntervals(int& n) {
        for (int i = 1; i <= n; i++) {
            map<int, int> m;
            int key, value;
            cout << " input key  " << i << " :"; cin >> key;
            cout << " input value  " << i << " :"; cin >> value;
            m[key] = value;
            mp.push_back(m);
        }
    }

    int insertIntervals1(int &newfirst) {
        int a = 0;
        for (vector<map<int, int> > ::iterator it = mp.begin(); it != mp.end(); it++) {
            for (map<int, int> ::iterator x = it->begin(); x != it->end(); x++) {

                if (x->first <= newfirst && newfirst <= x->second) {
                    a = x->first;
                    return a;
                }

                if (newfirst < x->first) {
                    a = newfirst;
                    return a;
                }
                if (newfirst > x->second) v.insert({ x->first, x->second });
            }
        }
    }
    int insertIntervals2(int &newsecond) {
        int b = 0;
        for (vector<map<int, int> > ::reverse_iterator it = mp.rbegin(); it != mp.rend(); it++) {
            for (map<int, int> ::reverse_iterator x = it->rbegin(); x != it->rend(); x++) {
                
                if (x->first <= newsecond && newsecond <= x->second) {
                    b = x->second;
                    return b;
                }
                
                if (newsecond < x->first) {
                    v.insert({ x->first, x->second });
                 }
                if (newsecond > x->second) {
                    b = newsecond;
                    return b;
                }
            }
        }
    }

    void output(int &newfirst, int &newsecond) {
        v.insert({ insertIntervals1(newfirst) ,insertIntervals2(newsecond) });
        for (pair<int, int> x : v) {
            cout << x.first << "  " << x.second << endl;
        }
    }
    
    
};
int main() {
    solution K;
    int n;
    cout << "nhap so phan tu : "; cin >> n;
    int newfirst, newsecond;
    cout << "new first : "; cin >> newfirst;
    cout << "new second : "; cin >> newsecond;
    K.inputIntervals(n);
    K.output(newfirst, newsecond);
    
    
  
    
    
}