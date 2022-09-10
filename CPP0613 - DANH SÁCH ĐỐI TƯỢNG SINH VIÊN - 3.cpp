#include<iostream>
#include<iomanip>
#include<sstream>
#include<algorithm>
using namespace std;
void ch(string &s){
	s[0]=toupper(s[0]);
	for(long long i =1 ;i < s.length();i++) s[i]=tolower(s[i]);
	cout << s;
}
long long cnt=0;
class SinhVien{
	private:
		string ten,lop,sinh,ma;
		double gpa;
	public:
		SinhVien(){
			ten=lop=sinh=ma="";
			gpa=0;
		}
		friend istream& operator >> (istream&, SinhVien&);
		friend ostream& operator << (ostream&,SinhVien );
		double getGpa(){
			return this->gpa;
		}
};
istream& operator >> (istream& in, SinhVien &a){
	cnt++;
	scanf("\n");
	getline(in,a.ten);
	getline(in,a.lop);
	getline(in,a.sinh);
	in >> a.gpa;
	if(a.sinh[1]=='/') a.sinh= '0' + a.sinh;
	if(a.sinh[4]=='/') a.sinh.insert(3,"0");
	a.ma= "B20DCCN" + string(3-to_string(cnt).size(),'0') + to_string(cnt);
	return in ;
}
ostream& operator << (ostream& out,SinhVien a ){
	out << a.ma << " ";
	string tmp;
	stringstream ss(a.ten);
	while(ss >> tmp){
		ch(tmp);
		out << " ";
	}
	out <<a.lop << " " << a.sinh << " " << fixed << setprecision(2) << a.gpa << endl;
	return out;
}
bool cmp(SinhVien a,SinhVien b){
	return a.getGpa() > b.getGpa();
}
void sapxep(SinhVien a[],int N){
	sort(a,a+N,cmp);
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
