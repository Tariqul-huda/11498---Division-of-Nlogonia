#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
    int t,n,m;
//    freopen("test.txt","r",stdin);
    while(scanf("%d %d %d",&t,&n,&m) && t)
    {
        while(t)
        {
            int x,y;
            cin>>x>>y;
            if(x==n || y==m)
            {
                cout<<"divisa"<<endl;
            }
            else if(x<n && y>m)
            {
                cout<<"NO"<<endl;
            }
            else if(x>n && y>m)
            {
                cout<<"NE"<<endl;
            }
            else if(x>n && y<m)
            {
                cout<<"SE"<<endl;
            }
            else
            {
                cout<<"SO"<<endl;
            }
            t--;
        }

    }
    return 0;
}
