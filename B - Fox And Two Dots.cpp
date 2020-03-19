#include<bits/stdc++.h>
#include<iostream>
using namespace std;

char a[55][55]; //real array
bool v[55][55]; //visited array which in every test case it is set to false
int n,m;

void dfs(int x,int y,int w,int z)
{
        //cout << a[x][y] << " " <<  a[w][z] << " ";
        //cout << x << ", " <<  y << "   ";
        //cout << w << ", " <<  z << endl;
	if(a[x][y] != a[w][z]) //if not the same color ! a5rog ya 3m
    {
        return;
    }

	if(v[x][y])
	{
		cout << "Yes"; //if visited so cycle is found
		exit(0);
	}

	v[x][y] = true; //setting the current node as visited

	if(x-1>=0&&x-1!=w) // check valid and not the parent
        dfs(x-1,y,x,y); //fo2

	if(y-1!=z&&y-1>=0) // check valid and not the parent
        dfs(x,y-1,x,y); //ymen

	if(y+1<=m&&y+1!=z) // check valid and not the parent
        dfs(x,y+1,x,y); //4mal

	if(x+1!=w&&x+1<=n) // check valid and not the parent
        dfs(x+1,y,x,y); // t7t
}

int main()
{
    //freopen("input.in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

	cin >> n >> m;
	for(int i=0;i<n;++i)
	{
	    for(int j=0;j<m;++j)
            cin >> a[i][j];
	}

	for(int i=0;i<n;++i)
	{
	    for(int j=0;j<m;++j)
	    {
		    memset(v,false,sizeof(v));//reset false to all visited
		    dfs(i,j,i,j);//traverse from each node
	    }
	}
	cout << "No"; // finally :"

}
