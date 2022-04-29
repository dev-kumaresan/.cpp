// Developed By Kumaresan.L

#include<iostream.h>
#include<conio.h>
#include<math.h>
int limit,i,x[500],y[500],f[500],fm[500],sumn,sumf,fx[500];
float fmminxbsq[500],mminxb[500],mminxbsq[500],mid[500],cv;
float sd,div,xbar,sumx,sumfx,sumfm,sumxminxbsq,sumfxminxbsq,sumfmminxbsq;
float xminxbsq[500],xminxb[500],fxminxbsq[500];
class SD  //developed by KumaresanL
{
    public:
    void individual()  //developed by KumaresanL
    {
       cout<<"\nEnter no of observations : ";
       cin>>limit;
       cout<<"\nEnter X values : ";
       for(i=0;i<limit;i++)
       {
         cin>>x[i];
       }
       for(i=0;i<limit;i++)
       {
          sumx+=x[i];
       }
       xbar=sumx/limit;
       for(i=0;i<limit;i++)
       {
          xminxb[i]=x[i]-xbar;
       }
       for(i=0;i<limit;i++)
       {
          xminxbsq[i] = xminxb[i]*xminxb[i];
       }
       for(i=0;i<limit;i++)
       {
          sumxminxbsq+=xminxbsq[i];
       }
       div=sumxminxbsq/limit;
       sd=sqrt(div);
       clrscr();
       cout<<"\n\nSoln : ";
       cout<<"\n\nX       X-Xbar      (X-Xbar)^2 ";

       for(i=0;i<limit;i++)
       {
         cout<<"\n\n"<<x[i]<<'\t'<<x[i]<<"-"<<xbar<<"="<<xminxb[i]<<'\t'<<'\t'<<xminxbsq[i];
       }
        cout<<"\n\nsummation X : "<<sumx;
       cout<<"\nxbar=sumx/n :- \nxbar = "<<sumx<<"/"<<limit;
       cout<<"\nxbar = "<<xbar;
       cout<<"\n\nsummation (X-Xbar)^2 : "<<sumxminxbsq;
       cout<<"\n\nFormula :- S.D = sqrt(summation(x-xbar))^2)/n) ";
       cout<<"\nS.D = sqrt("<<sumxminxbsq<<"/"<<limit<<")";
       cout<<"\n\nS.D = "<<sd;
       getch();
    }  //developed by KumaresanL
    void discrete()  //developed by KumaresanL
    {
                        cout<<"\nEnter the no of observation : ";
			cin>>limit;
			cout<<"\nEnter X values  ";
			cout<<"\n";
			for(i=0;i<limit;i++)
			{
				cin>>x[i];
			}

			cout<<"\nEnter the f values  ";
			cout<<"\n";
			for(i=0;i<limit;i++)
			{
				cin>>f[i];
			}
			for(i=0;i<limit;i++)
			{
				sumf=sumf+f[i];
			}
			for(i=0;i<limit;i++)
			{
				fx[i]=x[i]*f[i];
			}
			for(i=0;i<limit;i++)
			{
				sumfx=sumfx+fx[i];
			}
			xbar=sumfx/sumf;
                        for(i=0;i<limit;i++)
                        {
                         xminxb[i]=x[i]-xbar;
                        }
                        for(i=0;i<limit;i++)
                        {
                         xminxbsq[i] = xminxb[i]*xminxb[i];
                        }
                        for(i=0;i<limit;i++)
                        {
                          fxminxbsq[i]=f[i]*xminxbsq[i];
                        }
                        for(i=0;i<limit;i++)
                        {
                          sumfxminxbsq+=fxminxbsq[i];
                        }
                        div = sumfxminxbsq / sumf;
                        sd=sqrt(div);
                        clrscr();
			cout<<"\n\nSoln:- ";
                        cout<<"\n\nX       f       fx       X-Xbar        (X-Xbar)^2         f(X-Xbar)^2";
			for(i=0;i<limit;i++)
			{
				cout<<"\n\n"<<x[i]<<'\t'<<f[i]<<'\t'<<fx[i]<<'\t'<<xminxb[i]<<'\t'<<xminxbsq[i]<<'\t'<<fxminxbsq[i];
			}

                        cout<<"\n\nsummation f : "<<sumf;
			cout<<"\nsummation fx : "<<sumfx;
                        cout<<"\nsummation f(X-Xbar)^2 : "<<sumfxminxbsq;
			xbar=sumfx/sumf;
			cout<<"\nXbar = "<<sumfx<<" / "<<sumf<<" = "<<xbar;
                        cout<<"\nNow,";
                        cout<<"\n\nS.D = sqrt(summation f(X-Xbar)^2)/n ";
                        cout<<"\nS.D = sqrt("<<sumfxminxbsq<<"/"<<sumf<<")";
                        cout<<"\n\nS.D = "<<sd;
                        cv=(sd/xbar)*100;
                        cout<<"\n\nCalculate C.V :- ";
                        cout<<"\n"<<'\t'<<"C.V = (S.D/xbar)*100";
                        cout<<"\n"<<'\t'<<"C.V = ("<<sd<<"/"<<xbar<<")*100";
                        cout<<"\n"<<'\t'<<"C.V = "<<cv;

                     getch();
    }  //developed by KumaresanL
    void continuous()  //developed by KumaresanL
    {
                        cout<<"\nEnter the no of observation  : ";
			cin>>limit;
			cout<<"\nEnter X values  ";
			cout<<"\n";
			for(i=0;i<limit;i++)
			{
				cout<<"\nFrom : ";
				cin>>x[i];
			       	cout<<"To   : ";
				cin>>y[i];
       		        }
		    cout<<"\nEnter the f values  ";
		    cout<<"\n";
			for(i=0;i<limit;i++)
			{
				cin>>f[i];
			}
			for(i=0;i<limit;i++)
			{
				sumf+=f[i];
			}
                        for(i=0;i<limit;i++)
                        {
                             mid[i]=(x[i]+y[i])/2;
                        }
                        for(i=0;i<limit;i++)
                        {
                           fm[i]=f[i]*mid[i];
                        }
                        for(i=0;i<limit;i++)
                        {
                           sumfm+=fm[i];
                        }
                        xbar=sumfm/sumf;
                        for(i=0;i<limit;i++)
                        {
                             mminxb[i]=mid[i]-xbar;
                        }
                        for(i=0;i<limit;i++)
                        {
                             mminxbsq[i]=mminxb[i]*mminxb[i];
                        }
                        for(i=0;i<limit;i++)
                        {
                             fmminxbsq[i]=f[i]*mminxbsq[i];
                        }
                        for(i=0;i<limit;i++)
                        {
                             sumfmminxbsq+=fmminxbsq[i];
                        }
                        div=sumfmminxbsq/sumf;
                        sd=sqrt(div);
                        clrscr();
			cout<<"\n\nSoln:- ";
                        cout<<"\n\nX       f       m       fm        (m-xbar)         (m-xbar)^2        f(m-xbar)^2";
			for(i=0;i<limit;i++)
			{
				cout<<"\n\n"<<x[i]<<"-"<<y[i]<<'\t'<<f[i]<<'\t'<<mid[i]<<'\t'<<fm[i]<<'\t'<<mminxb[i]<<'\t'<<mminxbsq[i]<<'\t'<<fmminxbsq[i];
			}
                        cout<<"\n\nsummation f : "<<sumf;
			cout<<"\nsummation fm : "<<sumfm;
                        cout<<"\nsummation f(m-Xbar)^2 : "<<sumfmminxbsq;
			cout<<"\nXbar = "<<sumfm<<" / "<<sumf<<" = "<<xbar;
                        cout<<"\nNow,";
                        cout<<"\n\nS.D = sqrt(summation fm(X-Xbar)^2)/N ";
                        cout<<"\nS.D = sqrt("<<sumfmminxbsq<<"/"<<sumf<<")";
                        cout<<"\n\nS.D = "<<sd;
                        cv=(sd/xbar)*100;
                        cout<<"\n\nCalculate C.V :- ";
                        cout<<"\n"<<'\t'<<"C.V = (S.D/xbar)*100";
                        cout<<"\n"<<'\t'<<"C.V = ("<<sd<<"/"<<xbar<<")*100";
                        cout<<"\n"<<'\t'<<"C.V = "<<cv;



      getch();
    }  //developed by KumaresanL
};  //developed by KumaresanL
void main()  //developed by KumaresanL
{
   clrscr();
   SD ob;
   int option;
   	cout<<"STANDARD DEVIATION (S.D)- "<<"\n\n"<<"1.Individual"<<"\n"<<"2.Discrete"<<"\n"<<"3.Continuous";
	cout<<"\n\nEnter what data to perform : ";
	cin>>option;
	switch(option)
	{
		case 1 : ob.individual(); break;
		case 2 : ob.discrete(); break;
		case 3 : ob.continuous(); break;
		default : cout<<"Option Invalid !";
	}

}  //developed by KumaresanL
