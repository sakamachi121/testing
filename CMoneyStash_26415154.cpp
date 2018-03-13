#include<iostream>
using namespace std;
#include<string.h>
class CMoneyStash
{
	int m_100rb,m_50rb,m_20rb,m_10rb,m_5rb,m_2rb,m_1rb,m_5rt,m_1rt;
	char m_nama[100];
	int s0,s1,s2,s3,s4,s5,s6,s7,s8;
public:
	CMoneyStash()
	{
		m_100rb=0;
		m_50rb=0;
		m_20rb=0;
		m_10rb=0;
		m_5rb=0;
		m_2rb=0;
		m_1rb=0;
		m_5rt=0;
		m_1rt=0;
		strcpy(m_nama,"bayar");
	}
	void SetAwal(int a,int b,int c, int d, int e, int f,int g,int h , int i,char j[100])
	{
		m_100rb=a;
		m_50rb=b;
		m_20rb=c;
		m_10rb=d;
		m_5rb=e;
		m_2rb=f;
		m_1rb=g;
		m_5rt=h;
		m_1rt=i;
		strcpy(m_nama,j);
	}
	CMoneyStash Bayar(int duit)
	{	int a=duit;
		int b=duit;
		s0=m_100rb;
		s1=m_50rb;
		s2=m_20rb;
		s3=m_10rb;
		s4=m_5rb;
		s5=m_2rb;
		s6=m_1rb;
		s7=m_5rt;
		s8=m_1rt;
		CMoneyStash A;
		if (duit>=100000)
		{	
			a=a/100000;
			if(a<=m_100rb)
			{	
				m_100rb=m_100rb-a;
			duit=duit-(a*100000);
			A.m_100rb=a;
			}
			a=duit;
		}
		if (duit>=50000)
		{
			a=a/50000;
			if(a<=m_50rb)
			{
			m_50rb=m_50rb-a;
			duit=duit-(a*50000);
			A.m_50rb=a;
			
			}
			a=duit;

		}
		if (duit>=20000)
		{
			a=a/20000;
			if(a<=m_20rb)
			{
			m_20rb=m_20rb-a;
			duit=duit-(a*20000);
			A.m_20rb=a;}
			a=duit;
		}
		if (duit>=10000)
		{
			a=a/10000;
			if(a<=m_10rb)
			{
			m_10rb=m_10rb-a;
			duit=duit-(a*10000);
			A.m_10rb=a;}
			a=duit;
		}
		if (duit>=5000)
		{
			a=a/5000;
			if(a<=m_5rb)
			{
			m_5rb=m_10rb-a;
			duit=duit-(a*5000);
			A.m_5rb=a;}
			a=duit;
		}
		if (duit>=2000)
		{
			a=a/2000;
			if(a<=m_2rb)
			{
			m_2rb=m_10rb-a;
			duit=duit-(a*2000);
			A.m_2rb=a;}
			a=duit;
		}
		if (duit>=1000)
		{
			a=a/1000;
			if(a<=m_1rb)
			{
			m_1rb=m_1rb-a;
			duit=duit-(a*100);
			A.m_1rb=a;}
			a=duit;
		}
		if (duit>=500)
		{
			a=a/500;
			if(a<=m_5rt)
			{
			m_5rt=m_5rt-a;
			duit=duit-(a*500);
			A.m_5rt=a;}
			a=duit;
		}
		if (duit>=100)
		{
			a=a/100;
			if(a<=m_1rt)
			{
			m_10rb=m_10rb-a;
			duit=duit-(a*100);
			A.m_1rt=a;}
			a=duit;
		}
		
		if(duit!=0)
		{	m_100rb=s0;	
			m_50rb=s1;
			m_20rb=s2;
			m_10rb=s3;
			m_5rb=s4;
			m_2rb=s5;
			m_1rb=s6;
			m_5rt=s7;
			m_1rt=s8;
			duit=b;
			if(duit>=100000)
			{	b=b/100000;
				if(b<m_100rb)
				{	A.m_100rb=b+1;
					m_100rb-=b+1;
					duit=duit-((b+1)*100000);
					b=duit;
				
				}
				if(duit>=0)
				{	b=b/50000;
					if(b<m_50rb)
					{	A.m_50rb=b+1;
						m_50rb-=b+1;
						duit=duit-((b+1)*50000);
						b=duit;
				
					}
					if(duit>=0)
					{	b=b/10000;
						if(b<m_10rb)
						{	A.m_10rb=b+1;
							m_10rb-=b+1;
							duit=duit-((b+1)*10000);
							b=duit;
				
						}
						if(duit>=0)
						{	b=b/5000;
							if(b<m_5rb)
							{	A.m_5rb=b+1;
								m_5rb-=b+1;
								duit=duit-((b+1)*5000);
								b=duit;
				
							}
							if(duit>=0)
							{	b=b/2000;
								if(b<m_2rb)
								{	A.m_2rb=b+1;
									m_2rb-=b+1;
									duit=duit-((b+1)*2000);
									b=duit;
				
								}
								if(duit>=0)
								{	b=b/1000;
									if(b<m_1rb)
									{	A.m_1rb=b+1;
										m_1rb-=b+1;
										duit=duit-((b+1)*1000);
										b=duit;
				
									}
									if(duit>=0)
									{	b=b/500;
										if(b<m_5rt)
										{	A.m_5rt=b+1;
											m_5rt-=b+1;
											duit=duit-((b+1)*500);
											b=duit;
				
										}
										if(duit>=0)
										{	b=b/100;
											if(b<m_1rt)
											{	A.m_1rt=b+1;
												m_1rt-=b+1;
												duit=duit-((b+1)*100);
												b=duit;
				
											}
										}
									}
								}
							}
						}
					}
				}
				
				
			}
		}
		
		
		

		return A;
	}
	void Show()
	{	int total=(m_100rb*100000)+(m_50rb*50000)+(m_20rb*20000)+(m_10rb*10000)+(m_5rb*5000)+(m_2rb*2000)+(m_1rb*1000)+(m_5rt*5000)+(m_1rt*100);
		cout<<m_nama<<"("<<total<<")"<<endl;
		cout<<m_100rb<<"* 100000"<<endl;
		cout<<m_50rb<<"* 50000"<<endl;
		cout<<m_20rb<<"* 20000"<<endl;
		cout<<m_10rb<<"* 10000"<<endl;
		cout<<m_5rb<<"* 5000"<<endl;
		cout<<m_2rb<<"* 2000"<<endl;
		cout<<m_1rb<<"* 1000"<<endl;
		cout<<m_5rt<<"*5000"<<endl;
		cout<<m_1rt<<"*1000"<<endl;
	}
};


void main()
{
	CMoneyStash kasir,dompet;
	kasir.SetAwal (0,3,10,20,20,20,10,20,50,"Kasir");
	dompet.SetAwal (2,3,3,0,5,0,3,4,0,"Dompet");

	CMoneyStash bayar = dompet.Bayar(104900);
	
	bayar.Show();
	dompet.Show();
	//CMoneyStash kembalian = kasir.Terima(bayar, 104900);
	//kembalian.Show();
	//dompet.Terima(kembalian);
	dompet.Show();
	
	//kasir.Terima(bayar);
	kasir.Show();
	//kasir.Terima(1, 1, 1, 1, 1, 1, 1, 1, 1);
	kasir.Show();
	//kasir.Terima(0, 0, 2, 1);
	kasir.Show();

	
}
