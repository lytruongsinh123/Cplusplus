#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100
using namespace std;

void NhapMang(float a[][MAX], int &dong, int &cot) {
   do {
           cin >> dong;
          if( dong < 1 || dong > MAX )  {
            printf("\nSo dong khong hop le. Xin kiem tra lai!");
        }
    }
    while(dong < 1 || dong > MAX);
    do {
         cin >> cot;
        if(cot < 1 || cot > MAX) {
            printf("\nSo cot khong hop le. Xin kiem tra lai!");
        }
    }
	while(cot < 1 || cot > MAX);
    for(int i = 0; i < dong; i++)  {
        for(int j = 0; j < cot; j++)  {
          cin >> a[i][j];
        }
    }
}
void XuatMang(float a[][MAX], int dong, int cot)  {
    for(int i = 0; i < dong; i++)  {
    	
        for(int j = 0; j < cot; j++) {
        	
            cout << a[i][j] << "   ";
        }
            printf("\n\n");
	}
}
void swap(float a[][MAX], int i, int j,int cot) {
     int temp[cot];
         for (int k = 0; k < cot ; k++) {
             temp[k] = a[i][k];
             a[i][k] = a[j][k];
             a[j][k] = temp[k];
            }
        }

void gauss( float a[][MAX], int dong ,int cot) {

   
float z ;
   
      for ( int g = 0; g < dong - 1 ;g++ ) { 
  
	         for ( int i = g + 1; i < dong; i++) { 
	
	              if ( (a[i][g] != 0 && a[g][g]) || a[i][g] == 0 && a[g][g] ) {
	 
		              z = a[i][g] / a[g][g] ;
		
		                 for (int h = 0; h < cot ;h++) {
		   	
				             a[i][h] = a[i][h] - z * a[g][h]; if ( abs(a[i][h]) - 1e-5 < 0) { a[i][h] = 0; } else { a[i][h] = a[i][h];}
				 
				       } 
		 	       } else swap(a,g,i,cot);
		        }	 	
		     } XuatMang(a, dong, cot);  	
		  } 
int main()
{   freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    float a[MAX][MAX]; int dong, cot;
    NhapMang(a, dong, cot);
    gauss(a , dong,cot);
    return 0;
}
