//Developed By Kumaresan.L

#include<iostream.h>
#include<conio.h>


int x[500],y[500],i,f[500],fx[500];
float limit,sumx,sumf,sumfx,xbar,sumfm;

class mean        //Developed By KumaresanL
{
	public:

		void individual()
		{
			cout<<"\nEnter the limit of X : ";
			cin>>limit;
			cout<<"\nEnter X values  ";
			cout<<"\n";
			for(i=0;i<limit;i++)
			{
				cin>>x[i];

			}
			for(i=0;i<limit;i++)
			{
				sumx=sumx+x[i];
			}
			xbar=sumx/limit;
			cout<<"\nMean = ";
			for(i=0;i<=limit;i++)
			{
				if(i!=limit)
				{
				cout<<x[i]<<"+";
			    }
			    else if(i==limit)
			    {
			   	cout<<x[i];
				}

			}
			cout<<" / "<<limit<<" = "<<xbar;
			cout<<"\n\n";
                        getch();

		} //developed by kumaresanL
		void discrete()   //developed by kumaresanL
		{
			cout<<"\nEnter the limit of X : ";
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
			xbar=sumfx/limit;
			cout<<"\n\nSoln:- ";
			cout<<"\n\nX       f       fx";
			for(i=0;i<limit;i++)
			{
				cout<<"\n"<<x[i]<<'\t'<<f[i]<<'\t'<<fx[i];
			}
			for(i=0;i<limit;i++)
			{
				fx[i]=x[i]*f[i];
			}
			cout<<"\n";
			cout<<"\nsummation f : "<<sumf;
			cout<<"\nsummation fx : "<<sumfx;
			xbar=sumfx/sumf;
			cout<<"\nMean = "<<sumfx<<" / "<<sumf<<" = "<<xbar;
			cout<<"\n\n";
                        getch();

     	} //developed by kumaresanL
		void continuous() //developed by kumaresanL
		{
			cout<<"\nEnter the limit of X : ";
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
				sumf=sumf+f[i];
			}

			cout<<"\n\nSoln:- ";
			cout<<"\n\nX       f       m       fm";

			for(i=0;i<limit;i++)
			{
				cout<<"\n"<<x[i]<<"-"<<y[i]<<'\t'<<f[i]<<'\t'<<(x[i]+y[i])/2<<'\t'<<f[i]*(x[i]+y[i])/2;
			}
			for(i=0;i<limit;i++)
			{
				sumfm=sumfm+(f[i]*(x[i]+y[i])/2);
			}
			xbar=sumfm/sumf;
			cout<<"\nMean = "<<xbar;
			cout<<"\n\n";
                        getch();
		} //developed by kumaresanL

};
void main() //developed by kumaresanL
{
        clrscr();
	mean ob;

	int option;
	cout<<"MEAN- "<<"\n\n"<<"1.Individual"<<"\n"<<"2.Discrete"<<"\n"<<"3.Continuous";
	cout<<"\n\nEnter what data to perform : ";
	cin>>option;
	switch(option)
	{
		case 1 : ob.individual(); break;
		case 2 : ob.discrete(); break;
		case 3 : ob.continuous(); break;
		default : cout<<"Option Invalid !";
	}

} //developed By kumaresanL
