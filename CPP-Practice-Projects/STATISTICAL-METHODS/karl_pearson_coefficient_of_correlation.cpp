// developed By Kumaresan.L

#include<iostream.h>
#include<conio.h>
#include<math.h>

int i,limit;
float xy[500],xsq[500],ysq[500],x[500],y[500],X[500],Y[500];
float sumX,sumY,sumxy,sumxsq,sumysq,div,r,sumxsqrt,sumysqrt,proxysqrt;
float xbar,ybar;

class kpc_corr   //developed by kumaresanL
{
  public:
  void compute()
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
				sumX+=X[i];
			}
                        for(i=0;i<limit;i++)
                        {
                                sumY+=Y[i];
                        }
                        xbar=sumX/limit;
                        ybar=sumY/limit;
                        for(i=0;i<limit;i++)
                        {
                                x[i]=X[i]-xbar;
                        }
                        for(i=0;i<limit;i++)
                        {
                                y[i]=Y[i]-ybar;
                        }
                        for(i=0;i<limit;i++)
                        {
                                xsq[i]=x[i]*x[i];
                        }
                        for(i=0;i<limit;i++)
                        {
                                sumxsq+=xsq[i];
                        }
                        for(i=0;i<limit;i++)
                        {
                                ysq[i]=y[i]*y[i];
                        }
                        for(i=0;i<limit;i++)
                        {
                                sumysq+=ysq[i];
                        }
                        for(i=0;i<limit;i++)
                        {
                                xy[i]=x[i]*y[i];
                        }
                        for(i=0;i<limit;i++)
                        {
                                sumxy+=xy[i];
                        }
                        sumxsqrt=sqrt(sumxsq);
                        sumysqrt=sqrt(sumysq);
                        proxysqrt=sumxsqrt*sumysqrt;
                        r=sumxy/proxysqrt;

                         clrscr();
                         cout<<"\n\nSoln : ";
                         cout<<"\n\nX       Y      x=X-Xbar      y=Y-Ybar      x^2      y^2      xy";

                         for(i=0;i<limit;i++)
                         {
                         cout<<"\n\n"<<X[i]<<'\t'<<Y[i]<<'\t'<<x[i]<<'\t'<<y[i]<<'\t'<<xsq[i]<<'\t'<<ysq[i]<<'\t'<<xy[i];
                         }
                         cout<<"\n\nsummation X : "<<sumX;
                         cout<<"\nsummation Y : "<<sumY;
                         cout<<"\nsummation x^2 : "<<sumxsq;
                         cout<<"\nsummation y^2 : "<<sumysq;
                         cout<<"\nsummation xy  : "<<sumxy;
                         cout<<"\nxbar = sumx/N = "<<sumX<<"/"<<limit<<"="<<xbar;
                         cout<<"\nybar = sumy/N = "<<sumY<<"/"<<limit<<"="<<ybar;
                         cout<<"\nr=sumxy / (sqrt(sumx^2).(sqrt(sumy^2) \n= "<<sumxy<<"/"<<"(sqrt("<<sumxsq<<").sqrt("<<sumysq<<"))";
                         cout<<"\nr = "<<r;

       getch();

  }
}; //developed by kumaresanL
void main()
{
  clrscr();
  cout<<"KARL PEARSON COEFFICIENT OF CORRELATION- ";
  kpc_corr ob;
  ob.compute();
} //developed by kumaresanl
