#include <bits/stdc++.h>
using namespace std;
float x;
float fx(float b){
    return (b*b*b)+6*(b*b)+3*b;
}
float fd(float b){
    return 3*pow(b,2)+(12*b)+3;
}
void print(int idx,float a,float b,float c){
    cout<<idx<<"\t"<<a<<"\t"<<b<<"\t"<<b<<"\t"<<c<<"\n";
}

int main(){
    
    cout<<"Enter the value of x\n";
    cin>>x;
    int i=0;
    float f,fdsh;
    f=fx(x);
    cout<<"i\tXi\tf(Xi)\tf'(Xi)\n";
    while(i<=5){ //abs(f)>=--
         if(i==0){
            f= fx(x);
            fdsh=fd(f);
            cout<<"f--->"<<f<<endl;
            print(i,x,f,fdsh);
            ++i;
            continue;
        }
         x=x-(f/fdsh);
         f=fx(x);
         fdsh=fd(f);

        print(i,x,f,fdsh);
        ++i;

    }
    return 0;
}

