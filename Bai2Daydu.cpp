#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
struct NgayThang
 {
 	int ngay;
 	int thang;
 	int nam;	
 };
void Nhap( NgayThang &n){
	char c;
	do{
		cout<<"Nhap ngay thang : ";
		cin>>n.ngay>>c>>n.thang>>c>>n.nam;
	}
	while((n.ngay>31 || n.thang>12)||(n.thang==2 && n.ngay>29));
}
int KiemTraNhuan( NgayThang n)
 {
 	
 	if((n.nam%400 == 0)||(n.nam%4==0 && n.nam%100 != 0))
 		return 1;
 	return 0;
 		
 }
 int STT(NgayThang n)
 {
    int N=0, thutu;
  
    switch (n.thang)
    {
    case 12: N=N+30;
    case 11: N=N+31;
    case 10: N=N+30;
    case 9: N=N+31;
    case 8: N=N+31;
    case 7: N=N+30;
    case 6: N=N+31;
    case 5: N=N+30;
    case 4: N=N+31;
    case 3: if(KiemTraNhuan(n))
                N=N+29;
            else
                N=N+28;
    case 2: N=N+31;
    case 1: N=N;
    }
    thutu=N+(n.ngay);
    cout<<endl<<"Ngay thu "<<thutu<<" trong nam"<<endl;
}
void Cong(NgayThang &n)
 {	
 	int x;
 	cout<<"Nhap so can cong :";
 	cin>>x;
 	while(x != 0){
		if((n.ngay<31 &&(n.thang==1 || n.thang==3 || n.thang==5 || n.thang==7 || n.thang==8 || n.thang==10 || n.thang==12)) || (n.ngay < 30 && (n.thang==4 || n.thang==6||n.thang == 9))|| (n.ngay<29 && KiemTraNhuan(n))|| (n.ngay<28 && KiemTraNhuan(n)==false) )
			n.ngay++;
		else{
			if(n.thang < 12){
				n.thang++;
				n.ngay = 1;	
			}
			else{
				n.nam++;
				n.thang = 1;
				n.ngay = 1;
			}
}	x--;
	}	
 }
void Tru(NgayThang &n){
	int x;
	cout<<"Nhap so can tru: ";
	cin >> x;
	while(x != 0)
		{
			if( n.ngay> 1 )
				n.ngay--;
			else
			{
				if(n.thang >1)
				{
					n.thang--;
					if(n.thang == 1 || n.thang == 3 || n.thang == 5 || n.thang == 7 || n.thang == 8 || n.thang ==10 || n.thang == 12)
						n.ngay = 31;
					else
						if(n.thang == 4 || n.thang == 6 || n.thang == 9 || n.thang == 11)
						n.ngay = 30;
						else
							{
							if(KiemTraNhuan(n))
							n.ngay = 29;
							else
							n.ngay = 28;
						}
		
				}
				else{
				n.nam --;
				n.thang = 12;
				n.ngay = 31;
			}
			}
				x--;
		}
}
int main()
{
	NgayThang n;
	string st[10];
	Nhap(n);
	fflush(stdin);
 	if(KiemTraNhuan(n)) cout<<"nam nhuan "<<endl;
	else	
		cout<<"nam khong nhuan "<<endl;
	STT(n);
	Cong(n);
	cout<<"Ngay: "<<n.ngay<<"/"<<n.thang<<"/"<<n.nam<<endl;
	Tru(n);
	cout<<"Ngay: "<<n.ngay<<"/"<<n.thang<<"/"<<n.nam;
	
}

