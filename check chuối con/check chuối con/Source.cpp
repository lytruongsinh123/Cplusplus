#include<iostream>
using namespace std;
int main() {
	string a, b; cin >> b >> a;

	bool K[100] = {false}; // MANG ĐÁNH DẤU ĐÃ KIỂM TRA VÀ TÌM THẤY

	

	if (b.length() > a.length()) 
	{
		cout << "no";
	}
	else 
	{
		bool check;
		for (int i = 0; i < b.length(); i++) 
		{
			for (int j = 0; j < a.length(); j++) 
			{
				if (K[j] == true) 
				{
					continue;
				}
				else {
					if (b[i] == a[j]) 
					{
						check = true;
						K[j] = true; // ĐÁNH DẤU ĐÃ TÌM THẤY
						break; // DỪNG KHI ĐÃ TÌM THẤY
					}
					else 
					{
						check = false; 
					}
				}
			}
			// SAU KHI DUYET HẾT MẢNG J NẾU CHECK VẪN BẰNG FALSE THÌ KO TÌM THẤY TA DÙNG VÒNG LẶP I LUÔN
			if (check == false) 
			{
				break;
			}
		}
		if (check == true) 
		{
			cout << "yes";
		}
		else {
			cout << "no";
		}
	}
	
}