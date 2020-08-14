#include<bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);

#define loop(i,start,end) for(auto i=(start<end)?start:start-1;(start<end)?i<end:i>=end;(start<end)?i++:i--)
#define line cout<<"\n";

typedef vector<vector<char>> vvc;

void get(vvc& vec){
	loop(i,0,8)
		loop(j,0,8)
			vec[i].push_back('X');
}

void put(vvc vec){
	loop(i,0,8){
		loop(j,0,8)
			cout<<vec[i][j];
		line;
	}
}

void modify(vvc& vec,int obs){
	for(int i=0;i<8,obs>0;i++)
		loop(j,0,8){
			if(!obs)
				break;
			vec[i][j]='.';
			obs--;
		}
	vec[0][0]='O';
}

void solution(){
	int n;
	cin>>n;
	vvc chessboard(8);
	get(chessboard);
	modify(chessboard,n);
	put(chessboard);
}

int testCases=0;
int main(){
	fastIO;
	for(cin>>testCases;testCases--;solution());
}