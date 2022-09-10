
#include<iostream>
#include<iomanip>

using namespace std;

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
		if(a[i].sinh[1]=='/') a[i].sinh = '0' + a[i].sinh;
		if(a[i].sinh[4]=='/') a[i].sinh.insert(3,"0");
	}
}
void in(SinhVien a[],int N){
	for(int i =0 ; i<N;i++){
		string s = to_string(i+1);
		s= string(3-s.size(),'0')+s;
		cout << "B20DCCN" << s << " " << a[i].ten << " " <<a[i].lop <<" "<< a[i].sinh << " "<< fixed << setprecision(2) << a[i].gpa << endl;
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
