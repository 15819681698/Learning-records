#include<iostream>
using namespace std;
int f[10] = { 0,1,2,-1,-1,5,9,-1,8,6 };
int sum ;
bool  check(  int  t  , int fl ){
	  int tmp = t;
	  int flag = 0;
	  while(  tmp ){
	  	 int index = tmp % 10;
	   	 if( flag == 0 ){
	   	     if( index == 0 )
			     return false;
		     else flag = 1;
		    }
		 if( f[index] == -1 ){ 
	  	          sum = 0;
			      return false; 
	  	    }
	  	 else {   
		         sum =  sum * 10  + f[index] ;
              }
           tmp/=10;
	   }
	   if( ( fl == 1   && sum - t > 200  &&  sum  - t  < 300 ) || ( fl== 2   &&   sum - t   >=800 &&  sum - t < 900 ) ){
  	       return true;
	    }
	   else {
	   	   sum = 0;
	   	   return false; 
	   }    
}
int main(void){ 
    int t ;
	for( int i = 1000;i <= 9999; i++ ){ 
	     sum = 0; 
		 if( check( i , 1 )  == true  ){ 
		     t   = sum;
		     sum = 0  ;
		     for( int j=1000;j<=9999;j++){ 
	 	   	      if( check( j, 2 ) == true  &&  (   i - t + sum - j ) == 558  ){
			 	      printf("%d , %d\n",t,j);
			        }  
		       }
 	    } 
 	}
 	return 0;
} 
