#include<iostream>

using namespace std;

int funcion(int a,int b,int c,int d)
{
    int great;
    cin>>a>>b>>c>>d;
    
  
   
	if(a>b&&a>c&&a>d)
	{
      great=a;
	}
	if(b>a&&b>c&&b>d)
	{
		great=b;
	}
	if(c>a&&c>b&&c>d)
	{
		great=c ;
	}
	if(d>a&&d>b&&d>c )
	{
        great=d;
    }
    
    return great ;
}

int main()
{
	int a,b,c,d;
    
    int call=funcion(a,b,c,d);

cout<<call<<endl;
	
	return 0;
}
