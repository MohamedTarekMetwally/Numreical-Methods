#include <bits/stdc++.h> /// Bisection Method code Using C++ // 2 5 0.001
using namespace std;
 double a,b,c,tol;
 string s;

double func(double x){    
    return  (x*x)-(2*x)-3;
}

int main()
{  
    cout<<"Would you please enter the value of a, b And Tollerence\n";
    cin>>a>>b>>tol;
    //cout<<"would you please enter the equation\n";
    //cin>>s;
    
    double fa,fb,fc;
    string root="";
    int i=1; 
    cout<<"i \ta \tb \t c \tf(a)\tf(b)\tf(c)\tRoot\n";
    while(i<5 || abs(fc)<tol){
        if(i==1){
            c=(a+b)/2;
            fa=func(a);
            fb=func(b);
            fc=func(c);
            
            if((fc>0 && fb<0) || (fc<0 && fb>0))root="c&b";
            else if((fc>0 && fa<0) || (fc<0 && fa>0))root="c&a";
            else{
                printf("------------ERROR-------------------\n");
                return 0;
            }
            cout<<i++<<"\t"<<a<<"\t"<<b<<"\t"<<c<<"\t"<<fa<<"\t"<<fb<<"\t"<<fc<<"\t"<<root<<endl;
            //printf("%ld %ld %ld %ld %ld %ld %ld %s",i++,a,b,c,fa,fb,fc,root);
            continue;
        }

        if(root=="c&b"){
            a=c;
            c=(a+b)/2;
            fa=fc;
            fb=func(b);
            fc=func(c);
            if( (fc>0 && fb<0) || (fc<0 &&  fb>0) ) root="c&b";
            else if( (fc>0 && fa<0) || (fc<0 && fa>0) )root="c&a";
            else{
                printf("------------ERROR-------------------\n");
                return 0;
            }
            
        }
        else if(root=="c&a"){
            b=c;
            fb=fc;
            c=(a+b)/2;
            fc=func(c);
            if((fc>0 && fb<0) || (fc<0 &&  fb>0))root="c&b";
            else if( (fc>0 && fa<0) || (fc<0 && fa>0) )root="c&a";
            else{
                printf("------------ERROR-------------------\n");
                return 0;
            }
        }

        cout<<i++<<"\t"<<a<<"\t"<<b<<"\t"<<c<<"\t"<<fa<<"\t"<<fb<<"\t"<<fc<<"\t"<<root<<endl;

    }
return 0;
}




