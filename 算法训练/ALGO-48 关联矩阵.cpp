#include<iostream>
using namespace std;
int graph[105][1005],m,n;
int main()
{   cin >> n >> m;
    for(int i=1;i<=n;i++)
       for(int j=1;j<=m;j++) 
    { graph[i][j]=0;}      
    for(int i=1;i<=m;i++)
	{
        int a,b;
        cin >> a >> b;
        graph[a][i] = 1;
        graph[b][i] = -1;
    }
    for(int i=1;i<=n;i++)
	{
        for(int j=1;j<=m;j++)
		{
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
