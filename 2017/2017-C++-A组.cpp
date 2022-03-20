//2017-C++-A组第1题 ——迷宫 
/* 
#include<iostream>
#include<cstring>
using namespace std;
string data[10];
int vis[10][10];
int ans=0; 
bool solve(int i,int j){
	if(i<0||i>9||j<0||j>9) return true;
	if(vis[i][j]==1) return false;
	switch(data[i][j]){
		case 'U':
			return solve(i-1,j); 
		case 'D':
			return solve(i+1,j);
		case 'L':
			return solve(i,j-1);
		case 'R':
			return solve(i,j+1);
		default:
			return false;
	}
}
int main()
{
	data[0]="";
	data[1]="";
	data[2]="";
	data[3]="";
	data[4]="";
	data[5]="";
	data[6]="";
	data[7]="";
	data[8]="";
	data[9]="";
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			memset(vis,0,sizeof(vis));
			bool res=solve(i,j);
			if(res) ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
*/

//2017-C++-A组第2题 ——跳蚱蜢
/*
//宽度优先搜索  
#include<bits/stdc++.h>
using namespace std;
char start[10]="012345678";
char target[10]="087654321";
struct stateAndlevel{
	char* state;
	int level;
	int pow0;
	stateAndlevel(char*_start,int _level,int _pow): state(_start),level(_level),pow0(_pow){}
};
queue<stateAndlevel>q;
struct cmp{
	bool operator()(char*a,char*b){
		return strcmp(a,b)<0;
	}
};
set<char*,cmp>allstate;
void swap(char *s,int a,int b){
	char t=s[a];
	s[a]=s[b];
	s[b]=t;
}
void addnew(char *start,int pow0,int newpow,int le){
	char *new_state=(char*)malloc(9*sizeof(char));
		strcpy(new_state,start);
		swap(new_state,pow0,newpow);
		if(allstate.find(new_state)==allstate.end()){
			q.push(stateAndlevel(new_state,le+1,newpow));
			allstate.insert(new_state);	
		}
}
int main()
{

	q.push(stateAndlevel(start,0,0));
	allstate.insert(start);
	
	while(!q.empty()){
		stateAndlevel sal=q.front();
		char *start = sal.state;
		int le=sal.level;
		int pow0=sal.pow0;
		allstate.insert(start);
		if(strcmp(start,target)==0){
			cout<<le;
			break;
		}
		int newpow=(pow0-1+9)%9;
		addnew(start,pow0,newpow,le);
		 newpow=(pow0-2+9)%9;
		addnew(start,pow0,newpow,le);
		 newpow=(pow0+1+9)%9;
		addnew(start,pow0,newpow,le);
		 newpow=(pow0+2+9)%9;
		addnew(start,pow0,newpow,le);
		q.pop();
	}
	return 0; 
 } 
 */
 
