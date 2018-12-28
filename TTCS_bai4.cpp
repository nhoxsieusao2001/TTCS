#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
#include<vector>
#include<string.h>
using namespace std;
//fstream fi("Bai4.txt");
fstream fi;//Nhap file
fstream fo;//xuat file
void TaoFile(int A[6][6],int s)
{
	for (int i=0;i<s;i++)
		for(int j=0;j<s;j++){
			cout<<"A["<<i<<"]["<<j<<"] : ";
			cin>>A[i][j];
		}
}
void XuatFile(int A[6][6],int s)
{
	fo<<s<<endl;
	for(int i=0;i<s;i++){
		for(int j=0;j<s;j++)	
			fo<<A[i][j]<<" ";
		fo<<endl;
		}
		
}
void DocFile(int A[6][6],int n)
{
//	fi open("Bai4.txt",ios in);
	for(int i=0;i<n;i++){
	
		for(int j=0;j<n;j++)
		fi>>A[i][j];
	fi.close();}
}
void XuatMang(int A[6][6],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)	
		cout<<A[i][j]<<" ";
		cout<<endl;}
		fi.close();
}

int main()
{
	int n,s;
	int A[6][6];
	fo.open("Bai4.txt",ios::out);
	cout<<"Nhap so dinh :";
	cin>>s;	
	TaoFile(A,s);
	XuatFile(A,s);
	fi.open("Bai4.txt",ios::in);
	fi>>n;
	DocFile(A,n);
	XuatMang(A,n);
}

