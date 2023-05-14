#include <iostream>

using namespace std;

int power(int num1, int num2){
    int ans = 1;
    for (int i = 0; i < num2; i++)
    {
        ans = ans * num1;
    }
    return ans;
}

int main(){
    
    //pow(a,b)

    int a,b;

    cin>> a >>b;

    int ans = 1;

    int answer = power(a,b);
    cout<<" answer is "<<answer<<endl;

    //cout<<" answer is "<<ans<<endl; 
    
    return 0;
}