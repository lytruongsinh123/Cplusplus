#include <iostream>
#include <algorithm>
using namespace std;
bool dd[1000], tt = 0; 
int dem = 1, dem2, n;
int a[1000][1000]; 
int b[1000], c[1000]; 
int u, v; 

void duongdidainhat(int i)
{
    dd[i] = 1; 
    if (i == v)
    {
        tt = 1;
        if (dem > dem2)
        {
            
            for (int j = 0; j < dem; j++) c[j] = b[j]; dem2 = dem;
        }
    }
    else for (int j = 0; j < n; j++)
    {
        if (a[i][j] != 0 && dd[j] == 0)
        {
            b[dem++] = j; 
            duongdidainhat(j); 
            dem--; dd[j] = 0;
        }
    }
}


void induongdi()
{
    for (int i = 0; i < dem2; i++) cout << c[i] << " ";
}
int main()
{
    cout << "nhap so dinh: "; cin >> n;
    cout << "Nhap ma tran do thi: \n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    cout << "Ma tran do thi: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << "  "; cout << endl;
    }
    cout << "Nhap dinh u "; cin >> u;
    cout << "Nhap dinh v "; cin >> v;
    b[0] = u;
    duongdidainhat(u);
    if (tt) induongdi(); else cout << "Kg ton tai duong di tu u toi v";

}