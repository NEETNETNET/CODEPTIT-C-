#include<iostream>
#include<sstream>
using namespace std;
class GiangVien {
	private:
		string name;
	public:
		string ma,mon,tong;
		GiangVien() {
		name = mon =tong= "";
		ma = "GV";
		}
		friend istream& operator>>(istream& in, GiangVien&);
		friend ostream& operator<<(ostream& out, GiangVien);
};
int cnt = 0;
istream& operator>>(istream& in, GiangVien&X) {
	cnt++;
	X.ma += string(2 - to_string(cnt).length(), '0') + to_string(cnt);
	getline(in, X.name);
	getline(in, X.mon);
	string s = "";
	stringstream ss(X.mon);
	string token;
	while (ss >> token) {
		s += toupper(token[0]);
	}
	X.mon = s;
	for(long long i =0;i<X.name.length();i++) X.tong+=toupper(X.name[i]);
	return in;
}
ostream& operator<<(ostream& out, GiangVien X) {
	out << X.ma << " " << X.name << " " << X.mon << endl;
	return out;
}

int main() {
	GiangVien ds[100];
	int n; cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)cin >> ds[i];
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " + s +":" << endl;
		for(long long i=0;i<s.length();i++) s[i]=toupper(s[i]);
		for (int i = 0; i < n; i++){
			int a=0,b=0;
			stringstream ss(s);
			string tmp;
			while(ss>>tmp){
				a++;
				if(ds[i].tong.find(tmp)!=-1) b++;

			}
			if(a==b) cout << ds[i];
		}
	}

	return 0;
}
