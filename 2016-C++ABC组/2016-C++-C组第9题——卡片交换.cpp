#include<bits/stdc++.h>
using namespace std;
char*start;
int powA,powB;
pair<int,int>powO;
struct cmp{
	bool operator()(char*a,char*b){
		return strcmp(a,b)<0;	
	}
};
set<char*,cmp>allstate; 
struct stateAndlevel{
	char* start;
	int level;
	pair<int,int>pow;
	stateAndlevel(char* _start,int _level,pair<int,int>_pow): start(_start),level(_level),pow(_pow){}
}; 
bool check(char *start){
	return (start[powA]=='B'&&start[powB]=='A');
}
void swap(char*s,int i,int j){
	char t=s[i];
	s[i]=s[j];
	s[j]=t;
}
void bfs()
{
	queue<stateAndlevel>q;
	q.push(stateAndlevel(start,0,powO));
	allstate.insert(start);
	
	while(!q.empty()){
		stateAndlevel &front=q.front();
		char *start=front.start;
		int le=front.level;
		pair<int,int>x = front.pow;
		int i=x.first;
		int j=x.second;
		
		if(check(start)){
			cout<<le;
			break;
		}
		if(i-1>=0){
			char *new_start=(char *)malloc(6*sizeof(char));
			strcpy(new_start,start);
			swap(new_start,i*3+j,(i-1)*3+j);
			if(allstate.find(new_start)==allstate.end()){
				allstate.insert(new_start);
				q.push(stateAndlevel(new_start,le+1,make_pair(i-1,j)));
			}
		}
		if(i+1<=1){
			char *new_start=(char *)malloc(6*sizeof(char));
			strcpy(new_start,start);
			swap(new_start,i*3+j,(i+1)*3+j);
			if(allstate.find(new_start)==allstate.end()){
				allstate.insert(new_start);
				q.push(stateAndlevel(new_start,le+1,make_pair(i+1,j)));
			}
		}
		if(j-1>=0){
			char *new_start=(char *)malloc(6*sizeof(char));
			strcpy(new_start,start);
			swap(new_start,i*3+j,i*3+j-1);
			if(allstate.find(new_start)==allstate.end()){
				allstate.insert(new_start);
				q.push(stateAndlevel(new_start,le+1,make_pair(i,j-1)));
			}
		}
		if(j+1<=2){
			char *new_start=(char *)malloc(6*sizeof(char));
			strcpy(new_start,start);
			swap(new_start,i*3+j,i*3+j+1);
			if(allstate.find(new_start)==allstate.end()){
				allstate.insert(new_start);
				q.push(stateAndlevel(new_start,le+1,make_pair(i,j+1)));
			}
		}
		q.pop();
	}
 } 
int main()
{
	start = (char*)malloc(6*sizeof(char));
	int index=0;
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			start[index]=getchar();
			if(start[index]=='A') powA=i*3+j;
			if(start[index]=='B') powB=i*3+j;
			if(start[index]==' ') powO=make_pair(i,j);
			index++;
		}
		getchar();
	}
	bfs();
}
