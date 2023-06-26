#include <iostream>
using namespace std;

int main() {
    int t,i;
    int count=0;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        for(i=2;i<=100;i++)
        {
            if(a%i!=0 && b%i!=0 && c%i!=0)
            {
                count++;
                break;
            }
        }
        cout<<i<<endl;


        
    }
	return 0;
}
