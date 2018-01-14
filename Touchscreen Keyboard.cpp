// Problema:   Touchscreen Keyboard
// Problem ID: touchscreenkeyboard
// Autor:      FernandoJerezano
// Fecha:      14-Ene-2018
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int coor[26][2] = 
{{0,1},{4,2},{2,2},{2,1},{2,0},{3,1},
{4,1},{5,1},{7,0},{6,1},{7,1},{8,1},
{6,2},{5,2},{8,0},{9,0},{0,0},{3,0},
{1,1},{4,0},{6,0},{3,2},{1,0},{1,2},
{5,0},{0,2}
};

int abso(int a){
	return a>0 ? a : a*-1;
}

int dist(char a, char b){
	int xd = coor[a-'a'][0]-coor[b-'a'][0];
	int yd = coor[a-'a'][1]-coor[b-'a'][1];
	xd = abso(xd);
	yd = abso(yd);
	return xd+yd;
}

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	//freopen("entrada.txt","r",stdin);
	//freopen("salida.txt","w",stdout);
	vector< pair<int,string> > vec;
	
	int t,l;
	int c;
	string s;
	string p;
	cin>>t;
	
	while(t--){
		vec.clear();
		cin>>s>>l;
		while(l--){
			c = 0;
			cin>>p;
			for(int i=0;i<s.size();i++){
				c+=dist(s[i],p[i]);
			}
			vec.push_back(make_pair(c,p));
		}
		sort(vec.begin(),vec.end());
		for(int i=0;i<vec.size();i++){
			cout<<vec[i].second<<" "<<vec[i].first<<endl;
		}
		
	}
	
	return 0;
}
