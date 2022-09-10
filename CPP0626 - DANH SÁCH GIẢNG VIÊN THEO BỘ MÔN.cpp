#include<iostream>
#include<sstream>
using namespace std;
class GiangVien {
	private:
		string name;
	public:
		string ma, ten,mon;
		GiangVien() {
		ten =name = mon = "";
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
	int x = X.name.find_last_of(" ");
	X.ten = X.name.substr(x, 100);
	getline(in, X.mon);
	string s = "";
	stringstream ss(X.mon);
	string token;
	while (ss >> token) {
		s += toupper(token[0]);
	}
	X.mon = s;
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
		string s,k="";
		getline(cin,s);
		stringstream ss(s);
		string tmp;
		while(ss>>tmp){
			k+=toupper(tmp[0]);
		}cout << "DANH SACH GIANG VIEN BO MON " + k +":" << endl;
		for (int i = 0; i < n; i++){
			if(ds[i].mon==k) cout << ds[i];
		}
	}

	return 0;
}
