#include<iostream>
#include<sstream>
#include<vector>
#include<iomanip>
using namespace std;

void ch(string &s){
	s[0] = toupper(s[0]);
	for(long long i=1;i<s.length();i++) s[i] =tolower(s[i]);
	cout << s;
}
void ch1(string &s){
	for(long long i=0;i<s.length();i++) s[i]=toupper(s[i]);
	cout <<s;
}
class SinhVien{
	private :
		string ten,ma,lop,sinh;
		double gpa;
	public :
		SinhVien(){
			ma=sinh=lop=ten="";
			gpa =0 ;
		}
		friend ostream& operator << (ostream&,SinhVien);
		friend istream& operator >> (istream&,SinhVien&);
};
ostream& operator << (ostream& out,SinhVien a){
	a.ma="B20DCCN001";
	if(a.sinh[1]=='/') a.sinh = '0' + a.sinh;
	if(a.sinh[4]=='/') a.sinh.insert(3,"0");
	out << a.ma << " ";
	stringstream ss(a.ten);
	string tmp;
	vector<string> v;
	while(ss >> tmp){
		v.push_back(tmp);
	}
	for(long long i =0;i<v.size();i++) {
		ch(v[i]);
		cout << " ";

	}
	out << a.lop <<  " " << a.sinh << " " << fixed << setprecision(2) << a.gpa << endl;
	return out;
}
istream& operator >> (istream& in,SinhVien &a){
	getline(in,a.ten);
	in >> a.lop >> a.sinh >> a.gpa;
	return in ;
}


int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}


