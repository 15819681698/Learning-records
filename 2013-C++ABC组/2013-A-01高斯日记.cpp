#include<iostream>
using namespace std;

int leap(int x)        //判断是否为闰年 
{
    if(x%400==0||(x%4==0 && x%100!=0))
        return 1;
    return 0;
}

int main()
{
    int a[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int y=1777,m=4,n=30;       //初始值 
    for(int i = 1;i<8113;i++)
    {

        if(n == a[m])     //n作为每月天数的计数器 
        {
            if(m==12 && n==31)
            {
                y++;
                m=1;
                n=1;
                if(leap(y))    //当年份自增之后，判断是否为闰年，如果是2月为29天 
                {
                    a[2]=29;    
                }
                else
                {
                    a[2]=28;
                }
            }
            else
            {
                m++;       //到了一个月的最后一天，月份增加，日期赋值为每月第一天 
                n=1;
            }
        }
        else
        {
            n++;    //天数自增 
        }
    }
    cout<<y<<"-"<<m<<"-"<<n<<endl;
    return 0;
} 
