
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
struct SinhVien{
	string ten,lop,sinh;
	double gpa;
};
void nhap(SinhVien a[],int N){
	for(int i =0;i<N;i++){
		cin.ignore();
		getline(cin,a[i].ten);
		getline(cin,a[i].lop);
		getline(cin,a[i].sinh);
		cin >> a[i].gpa;

	}
}
void in(SinhVien a[],int N){
	for(int i =0 ; i<N;i++){
		string s = to_string(i+1);
		s= string(3-s.size(),'0')+s;
		if(a[i].sinh[1]=='/') a[i].sinh = '0' + a[i].sinh;
		if(a[i].sinh[4]=='/') a[i].sinh.insert(3,"0");
		cout << "B20DCCN" << s << " ";
		stringstream ss(a[i].ten);
			string tmp;
			vector<string> v;
			while(ss >> tmp){
				v.push_back(tmp);
			}
			for(long long i =0;i<v.size();i++) {
				ch(v[i]);
				cout << " ";

			}
		cout <<a[i].lop <<" "<< a[i].sinh << " "<< fixed << setprecision(2) << a[i].gpa << endl;
	}

}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
