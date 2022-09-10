#include<iostream>
#include<algorithm>
#include<sstream>

using namespace std;
class GiangVien {
	private:
		string name;
	public:
		string ma, ten,subject;
		GiangVien() {
		ten =name = subject = "";
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
	getline(in, X.subject);
	string s = "";
	stringstream ss(X.subject);
	string token;
	while (ss >> token) {
		s += toupper(token[0]);
	}
	X.subject = s;
	return in;
}
ostream& operator<<(ostream& out, GiangVien X) {
	out << X.ma << " " << X.name << " " << X.subject << endl;
	return out;
}

bool cmp(GiangVien A, GiangVien B) {
	if (A.ten < B.ten)return true;
	if (A.ten == B.ten && A.ma < B.ma)return true;
	return false;
}
void sapxep(GiangVien ds[], int n) {
	sort(ds, ds + n,cmp);
}
int main() {
	GiangVien ds[100];
	int n; cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)cin >> ds[i];
	sapxep(ds, n);
	for (int i = 0; i < n; i++)cout << ds[i];
	return 0;
}