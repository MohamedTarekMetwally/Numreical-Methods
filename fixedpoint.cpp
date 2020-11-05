#include <bits/stdc++.h>

using namespace std;

float e=2.71828;
float funcG(float n){
    return sin(n);
}
float funcF(float n){
    return sin(n)-n;
}
int main()
{   
    float x,mx;
    cout<<"enter the value of Xo please and Max number of iterations\n";
    cin>>x>>mx;
    int i=1;
    float gx,fx;
    printf("I\tX(i)\tG(x)\tF(x)\tStop Cond\tStop Cond2\n");
    while(true){
        
        gx=funcG(x);
        fx=funcF(x);
        //cout<<gx<<" ---\n";
        if(i==mx){
            cout<<i<<"\t"<<x<<"\t"<<gx<<"\t"<<fx<<"\tNO\tYES\n";
            break;
        }
        if(gx<.07){
            cout<<i<<"\t"<<x<<"\t"<<gx<<"\t"<<fx<<"\tYES\tNO\n";
            break;
        }
        cout<<i<<"\t"<<x<<"\t"<<gx<<"\t"<<fx<<"\tNO\tNO\n";
        i++;
        x=gx;

    }
   
   return 0;
}