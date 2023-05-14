#include <iostream>

using namespace std;

int count(int num){
for (int i = 0; i <=num; i++)
{
    cout<<i<<" ";
}
cout<<endl;
}

int main(){
    int a;

    cin>>a;

    count(a);
    return 0;
}