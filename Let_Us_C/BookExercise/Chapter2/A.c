/*
[A] What would be the output of the following programs: 
*/
#include <stdio.h>

(a) void main( ) 
{ 
int   a = 300, b, c ; 
if ( a >= 400 ) 
b = 300 ; 
c = 200 ; 
printf ( "\n%d %d", b, c ) ; 
} 
/*
Output:
<some random value> 200
*/
---------------------------
(b) void main( ) 
{ 
int   a = 500, b, c ; 
if ( a >= 400 ) 
b = 300 ; 
c = 200 ; 
printf ( "\n%d %d", b, c ) ; 
} 
//Output
300 <some random value>
--------------
(c) 
void main( ) 
{ 
  int   x = 10, y = 20 ; 
if ( x == y ) ; 
printf ( "\n%d %d", x, y ) ; 
} 
//10 20
---------------------------
(d) void main( ) 
{ 
int   x = 3, y = 5 ; 
if ( x == 3 ) 
printf ( "\n%d", x ) ; 
 else ; 
printf ( "\n%d", y ) ; 
} 
//3
------------------------
(e) void main( ) 
{ 
int   x = 3 ; 
float   y = 3.0 ; 
if ( x == y ) 
printf ( "\nx and y are equal" ) ; 
 else 
  printf ( "\nx and y are not equal" ) ;
} 
//x and y are not equal
-----------------------------------------------
(f) 
void main( ) 
{ 
int   x = 3, y, z ; 
y = x = 10 ; //y=10, x=10
z = x < 10 ; //z = 0
printf ( "\nx = %d y = %d z = %d", x, y, z ) ; 
}
//10 10 0
-------------------------
(g) void main( ) 
{ 
int  k = 35 ; 
printf ( "\n%d %d %d", k == 35, k = 50, k > 40 ) ; 
} 
//1 50 1
-------------------------
(h) void main( ) 
{ 
int i = 65 ; 
char j = ‘A’ ; 
if ( i == j ) 
 else 
} 
//
------------------------------
(i) 
void main( ) 
{ 
printf ( “C is WOW” ) ; 
printf( "C is a headache" ) ; 
int   a = 5, b, c ; 
b = a = 15 ; 
c = a < 15 ; 
printf ( "\na = %d b = %d c = %d", a, b, c ) ; 
} 
-------------------------
(j) 
void main( ) 
{ 
  int  x = 15 ; 
printf ( "\n%d %d %d", x != 15, x = 20, x < 30 ) ;
} 
--------------------------
