#include <bits/stdc++.h> // Secant Method using C++
using namespace std;
double a,b,c,tol;
double fa,fb,fc;
 string s;

double func(double x){    
    return  (x*x)-(2*x)-3;
}
double f(double x){
    return b- fb* ( (b- a) / ( fb -fa ) );
}

int main()
{  
    cout<<"Would you please enter the value of a, b And Tollerence\n";
    cin>>a>>b>>tol;
    //cout<<"would you please enter the equation\n";
    //cin>>s;
    
    string root="";
    int i=1;
    cout<<"i \ta \tb \t c \tf(a)\tf(b)\tf(c)\n";
    while(i<5 ||tol<(int)1e-2){

        if(i==1){
            fa=func(a);
            fb=func(b);
            c=f(c);
            fc=func(c);
            
            
            if(abs(fc) < tol){
                printf("------------ERROR-------------------\n");
                return 0;
            }
            cout<<i++<<"\t"<<a<<"\t"<<b<<"\t"<<c<<"\t"<<fa<<"\t"<<fb<<"\t"<<fc<<"\t"<<root<<endl<<endl;
            continue;
        }
	//Swap the values
        a=b;
        b=c;
        fa=fb;
        fb=fc;
        c=f(c);
        fc=func(c);
        
        if(abs(fc)<tol){
            printf("------------ERROR-------------------\n");
            return 0;
        }

        cout<<i++<<"\t"<<a<<"\t"<<b<<"\t"<<c<<"\t"<<fa<<"\t"<<fb<<"\t"<<fc<<"\t"<<root<<endl<<endl;

    }
return 0;
}




