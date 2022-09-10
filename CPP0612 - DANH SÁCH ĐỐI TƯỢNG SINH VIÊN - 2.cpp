#include<iostream>
#include<iomanip>
#include<sstream>
using namespace std;
void ch(string &s){
	s[0]=toupper(s[0]);
	for(long long i =1 ;i < s.length();i++) s[i]=tolower(s[i]);
	cout << s;
}
long long cnt=0;
class SinhVien{
	private:
		string ten,lop,sinh;
		double gpa;
	public:
		SinhVien(){
			ten=lop=sinh="";
			gpa=0;
		}
		friend istream& operator >> (istream&, SinhVien&);
		friend ostream& operator << (ostream&,SinhVien );
};
istream& operator >> (istream& in, SinhVien &a){
	in.ignore();
	getline(in,a.ten);
	getline(in,a.lop);
	getline(in,a.sinh);
	in >> a.gpa;
	if(a.sinh[1]=='/') a.sinh= '0' + a.sinh;
	if(a.sinh[4]=='/') a.sinh.insert(3,"0");
	return in ;
}
ostream& operator << (ostream& out,SinhVien a ){
	cnt++;
	out << "B20DCCN" << string(3-to_string(cnt).size(),'0') + to_string(cnt) << " ";
	string tmp;
	stringstream ss(a.ten);
	while(ss >> tmp){
		ch(tmp);
		out << " ";
	}
	out <<a.lop << " " << a.sinh << " " << fixed << setprecision(2) << a.gpa << endl;
	return out;
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
