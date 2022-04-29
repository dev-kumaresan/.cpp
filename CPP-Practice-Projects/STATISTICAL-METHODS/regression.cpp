// Developed By Kumaresan.L

#include<iostream.h>
#include<conio.h>
int i,limit,sumX,sumY,sumXsq,sumYsq,sumXY,x,y;
float yminybar,bxy,byx,Xbar,Ybar,X[500],Y[500],XY[500],Xsq[500],Ysq[500];
class reg //developed by KumaresanL
{
public:
void compute() //developed by KumaresanL
{


    cout<<"\nEnter the limit of X : ";
    cin>>limit;
    cout<<"\nEnter X values  ";
    cout<<"\n";
    for(i=0;i<limit;i++)
    {
	cin>>X[i];
    }
    cout<<"\nEnter the Y values  ";
    cout<<"\n";
    for(i=0;i<limit;i++)
    {
  	cin>>Y[i];
    }
    for(i=0;i<limit;i++)
    {
        Xsq[i] = X[i]*X[i];
    }
    for(i=0;i<limit;i++)
    {
        Ysq[i] = Y[i]*Y[i];
    }
    for(i=0;i<limit;i++)
    {
        XY[i] = X[i]*Y[i];
    }
    for(i=0;i<limit;i++)
    {
        sumX+=X[i];
    }
    for(i=0;i<limit;i++)
    {
        sumY+=Y[i];
    }
    for(i=0;i<limit;i++)
    {
        sumXsq+=Xsq[i];
    }
    for(i=0;i<limit;i++)
    {
        sumYsq+=Ysq[i];
    }
    for(i=0;i<limit;i++)
    {
        sumXY+=XY[i];
    }
    Xbar=sumX/limit;
    Ybar=sumY/limit;
    bxy = ((limit*sumXY)-(sumX*sumY)) / ((limit*sumYsq)-(sumY*sumY));
    cout<<"\nbxy = "<<bxy;
    byx = ((limit*sumXY)-(sumY*sumX)) / ((limit*sumXsq)-(sumX*sumX));
    cout<<"\nbyx = "<<byx;
    cout<<"\n\nEnter x ";
    cin>>x;
    cout<<"\nEnter y ";
    cin>>y;

    cout<<"\n\nY on X";
    y = byx*(x-Xbar);
    cout<<" ="<<y;
    cout<<"\n\nX on Y";
    x = bxy*(y-Ybar);
    cout<<"  ="<<x;
} //developed by KumaresanL
}; //developed by KumaresanL
void main() //developed by KumaresanL
{
  clrscr();
  reg ob;
  ob.compute();
} //developed by KumaresanL
