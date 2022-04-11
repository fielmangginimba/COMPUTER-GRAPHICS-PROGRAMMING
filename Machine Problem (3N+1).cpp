#include <iostream>

using namespace std;

int main()
{
    int n, k=1;
    cout<<"Input any positive integers:";
    cin>>n;
    
    while(n!=1){
        if(n%2==0)
            n=n/2;
            
        else n=n*3+1;
        
    cout<<"\n Current given value is:"<<n;
    k++;
    }
 return 0;
    
}
