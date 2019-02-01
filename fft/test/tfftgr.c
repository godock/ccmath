/*  tfftgr.c    CCMATH mathematics library source code.
 *
 *  Copyright (C)  2000   Daniel A. Atkinson    All rights reserved.
 *  This code may be redistributed under the terms of the GNU library
 *  public license (LGPL). ( See the lgpl.license file for details.)
 * ------------------------------------------------------------------------
 */
/*
    Test:  fftgr
    Uses:  pfac
*/
#include "ccmath.h"
#include <math.h>
#define MPT 100
void main(void)
{ struct complex *ft,*f,*p;
  double *x,ang,tpi=6.283185307179586;
  int kk[32],n=MPT,i,j; void *calloc();
  printf(" Test of General Radix FFT\n");
  printf("     F(k)=sin(2pi*5*k/n)\n");
  x=(double *)calloc(n,sizeof(*x));
  ft=(struct complex *)calloc(n,sizeof(*ft));
  for(ang=5.*tpi/n,i=0; i<n ;++i) x[i]=sin(ang*i);
  n=pfac(n,kk,'o');
  printf("      n= %d\n",n);
  fftgr(x,ft,n,kk,'d');
  for(f=ft,p=f+n/2,i=0,j=n/2; i<n/2 ;++f,++p){
    printf("%3d %9.6f %9.6f  ",i++,f->re,f->im);
    printf("  %3d %9.6f %9.6f\n",j++,p->re,p->im);
   }
}
/* Test output

 Test of General Radix FFT
     F(k)=sin(2pi*5*k/n)
      n= 100
  0 -0.000000  0.000000     50  0.000000  0.000000
  1  0.000000 -0.000000     51  0.000000  0.000000
  2  0.000000  0.000000     52  0.000000 -0.000000
  3  0.000000  0.000000     53  0.000000 -0.000000
  4  0.000000  0.000000     54  0.000000 -0.000000
  5 -0.000000 -0.500000     55  0.000000  0.000000
  6  0.000000 -0.000000     56  0.000000  0.000000
  7  0.000000 -0.000000     57  0.000000 -0.000000
  8  0.000000 -0.000000     58  0.000000  0.000000
  9 -0.000000 -0.000000     59  0.000000  0.000000
 10  0.000000 -0.000000     60  0.000000 -0.000000
 11  0.000000 -0.000000     61  0.000000 -0.000000
 12  0.000000 -0.000000     62  0.000000  0.000000
 13 -0.000000  0.000000     63  0.000000  0.000000
 14  0.000000 -0.000000     64  0.000000 -0.000000
 15 -0.000000 -0.000000     65  0.000000 -0.000000
 16  0.000000 -0.000000     66  0.000000 -0.000000
 17 -0.000000 -0.000000     67  0.000000  0.000000
 18  0.000000 -0.000000     68  0.000000 -0.000000
 19 -0.000000  0.000000     69  0.000000  0.000000
 20  0.000000 -0.000000     70  0.000000  0.000000
 21  0.000000 -0.000000     71 -0.000000  0.000000
 22  0.000000 -0.000000     72 -0.000000  0.000000
 23  0.000000  0.000000     73 -0.000000 -0.000000
 24  0.000000 -0.000000     74  0.000000  0.000000
 25 -0.000000  0.000000     75 -0.000000  0.000000
 26  0.000000 -0.000000     76  0.000000  0.000000
 27 -0.000000  0.000000     77  0.000000 -0.000000
 28 -0.000000 -0.000000     78  0.000000  0.000000
 29 -0.000000 -0.000000     79  0.000000  0.000000
 30  0.000000 -0.000000     80  0.000000  0.000000
 31  0.000000  0.000000     81 -0.000000  0.000000
 32  0.000000  0.000000     82  0.000000  0.000000
 33  0.000000 -0.000000     83 -0.000000  0.000000
 34  0.000000  0.000000     84  0.000000  0.000000
 35  0.000000  0.000000     85 -0.000000 -0.000000
 36  0.000000  0.000000     86  0.000000  0.000000
 37  0.000000 -0.000000     87 -0.000000  0.000000
 38  0.000000 -0.000000     88  0.000000  0.000000
 39  0.000000  0.000000     89 -0.000000  0.000000
 40  0.000000  0.000000     90  0.000000  0.000000
 41  0.000000 -0.000000     91 -0.000000  0.000000
 42  0.000000 -0.000000     92  0.000000  0.000000
 43  0.000000  0.000000     93  0.000000  0.000000
 44  0.000000 -0.000000     94  0.000000  0.000000
 45  0.000000  0.000000     95 -0.000000  0.500000
 46  0.000000  0.000000     96  0.000000 -0.000000
 47  0.000000  0.000000     97  0.000000 -0.000000
 48  0.000000  0.000000     98  0.000000 -0.000000
 49  0.000000 -0.000000     99  0.000000 -0.000000
*/