//Find the day when date is given

#include<bits/stdc++.h>
using namespace std;

int yearcode(int year){
    year=year-(year%100);
    if(year%400==0){
        return 6;
    }
    if((year-100)%400==0){
        return 4;
    }
    if((year-200)%400==0){
        return 2;
    }
    if((year-300)%400==0){
        return 0;
    }
}

string Find_day(string s)
{
    int monthcode[12]={0,3,3,6,1,4,6,2,5,0,3,5};
    string days[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    int dd=((int)s[0]-48)*10+(int)s[1]-48;
    int mm=((int)s[3]-48)*10+(int)s[4]-48;
    int yyyy=((int)s[6]-48)*1000+((int)s[7]-48)*100+((int)s[8]-48)*10+(int)s[9]-48;
    int sum=dd+monthcode[mm-1]+(yyyy%100)+((yyyy%100)/4)+yearcode(yyyy);
    return days[sum%7];
}

int main()
{
    string date,day;
    cout<<"Enter the date (dd/mm/yyyy):\n";
    cin>>date;
    day=Find_day(date);
    cout<<day;
    return 0;
}