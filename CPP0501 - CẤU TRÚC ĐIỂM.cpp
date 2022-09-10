

#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

struct Point{
	double x,y;
};
void input(Point &p){
	cin >> p.x >> p.y;
}
double distance(Point a,Point b){
	return sqrt(pow(a.x-b.x,2)+pow(b.y-a.y,2));

}
int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}
