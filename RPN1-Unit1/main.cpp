#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int a = 10,b = 8 ,c = 8,d = -4;

    printf("a=10,b=5,c=7,d=9");
    printf("\n!(a+b) >= (a-b) <= c/b && ((c%%a<a)==(a*d>a)) || (c!=a)");
    printf("\n!%d >= (a-b) <= c/b && ((c%%a<a)==(a*d>a)) || (c!=a)",a+b);
    printf("\n!%d >= %d <= c/b && ((c%%a<a)==(a*d>a)) || (c!=a)",a+b,a-b);
    printf("\n!%d >= %d <= c/b && ((%d<a)==(a*d>a)) || (c!=a)",a+b,a-b,c%a);
    printf("\n!%d >= %d <= c/b && (%d==(a*d>a)) || (c!=a)",a+b,a-b,c%a<a);
    printf("\n!%d >= %d <= c/b && (%d==(%d>a)) || (c!=a)",a+b,a-b,c%a<a,a*d);
    printf("\n!%d >= %d <= c/b && (%d==%d) || (c!=a)",a+b,a-b,c%a<a,a*d>a);
    printf("\n!%d >= %d <= c/b && %d || (c!=a)",a+b,a-b,c%a<a == a*d>a);
    printf("\n%d >= %d <= c/b && %d || (c!=a)",!(a+b),a-b,c%a<a == a*d>a);
    printf("\n%d >= %d <= %d && %d || %d",!(a+b),a-b,c/b,c%a<a == a*d>a,c!=a);
    printf("\n%d <= %d && %d || %d",!(a+b) >= a-b,c/b,c%a<a == a*d>a,c!=a);
    printf("\n%d && %d || %d",!(a+b) >= a-b <= c/b,c%a<a == a*d>a,c!=a);
    printf("\n%d || %d",!(a+b) >= a-b <= c/b && (c%a<a == a*d>a),c!=a);



    printf("a=10,b=5,c=7,d=9");
    printf("\na+b<a*c && a-c>=a/b || !(a*d>a || a<=b%%c || (a==b) && (a!=b))");
    printf("\na+b<a*c && a-c>=a/b || !(a*d>a || a<=b%%c || %d && (a!=b))",a==b);
    printf("\na+b<a*c && a-c>=a/b || !(a*d>a || a<=b%%c || %d && %d)",a==b,a!=b);
    printf("\na+b<a*c && a-c>=a/b || !(%d>a || a<=b%%c || %d && %d)",a*d,a==b,a!=b);
    printf("\na+b<a*c && a-c>=a/b || !(%d>a || a<=%d || %d && %d)",a*d,b%c,a==b,a!=b);
    printf("\na+b<a*c && a-c>=a/b || !(%d || a<=%d || %d && %d)",a*d>a,b%c,a==b,a!=b);
    printf("\na+b<a*c && a-c>=a/b || !(%d || %d || %d && %d)",a*d>a,a<=b%c,a==b,a!=b);
    printf("\na+b<a*c && a-c>=a/b || !(%d || %d || %d)",a*d>a,a<=b%c,a==b && a!=b);
    printf("\na+b<a*c && a-c>=a/b || !(%d || %d)",a*d>a || a<=b%c,a==b && a!=b);
    printf("\na+b<a*c && a-c>=a/b || !(%d)",a*d>a || a<=b%c || a==b && a!=b);
    printf("\na+b<a*c && a-c>=a/b || %d",!(a*d>a || a<=b%c || a==b && a!=b));
    printf("\na+b<%d && a-c>=a/b || %d",a*c,!(a*d>a || a<=b%c || a==b && a!=b));
    printf("\na+b<%d && a-c>=a/b || %d",a*c,!(a*d>a || a<=b%c || a==b && a!=b));
    printf("\na+b<%d && a-c>=%d || %d",a*c,a/b,!(a*d>a || a<=b%c || a==b && a!=b));
    printf("\n%d<%d && a-c>=%d || %d",a+b,a*c,a/b,!(a*d>a || a<=b%c || a==b && a!=b));
    printf("\n%d<%d && %d>=%d || %d",a+b,a*c,a-c,a/b,!(a*d>a || a<=b%c || a==b && a!=b));
    printf("\n%d && %d>=%d || %d",a+b<a*c,a-c,a/b,!(a*d>a || a<=b%c || a==b && a!=b));
    printf("\n%d && %d || %d",a+b<a*c,a-c>=a/b,!(a*d>a || a<=b%c || a==b && a!=b));
    printf("\n%d || %d",a+b<a*c && a-c>=a/b,!(a*d>a || a<=b%c || a==b && a!=b));




    printf("a=10,b=5,c=7,d=9");
    printf("\nb-c==d+a || !(a!=b/c && a<c%%a) || b<=a && c>a*b || d>=a");
    printf("\nb-c==d+a || !(a!=%d && a<c%%a) || b<=a && c>a*b || d>=a",b/c);
    printf("\nb-c==d+a || !(a!=%d && a<%d) || b<=a && c>a*b || d>=a",b/c,c%a);
    printf("\nb-c==d+a || !(%d && a<%d) || b<=a && c>a*b || d>=a",a!=b/c,c%a);
    printf("\nb-c==d+a || !(%d && %d) || b<=a && c>a*b || d>=a",a!=b/c,a<c%a);
    printf("\nb-c==d+a || !(%d) || b<=a && c>a*b || d>=a",a!=b/c && a<c%a);
    printf("\nb-c==d+a || %d || b<=a && c>a*b || d>=a",!(a!=b/c && a<c%a));
    printf("\n%d==d+a || %d || b<=a && c>a*b || d>=a",b-c,!(a!=b/c && a<c%a));
    printf("\n%d==%d || %d || b<=a && c>a*b || d>=a",b-c,d+a,!(a!=b/c && a<c%a));
    printf("\n%d==%d || %d || b<=a && c>%d || d>=a",b-c,d+a,!(a!=b/c && a<c%a),a*b);
    printf("\n%d || %d || b<=a && c>%d || d>=a",b-c==d+a,!(a!=b/c && a<c%a),a*b);
    printf("\n%d || %d || %d && c>%d || d>=a",b-c==d+a,!(a!=b/c && a<c%a),b<=a,a*b);
    printf("\n%d || %d || %d && %d || d>=a",b-c==d+a,!(a!=b/c && a<c%a),b<=a,c>a*b);
    printf("\n%d || %d || %d && %d || %d",b-c==d+a,!(a!=b/c && a<c%a),b<=a,c>a*b,d>=a);
    printf("\n%d || %d || %d || %d",b-c==d+a,!(a!=b/c && a<c%a),b<=a && c>a*b,d>=a);
    printf("\n%d || %d || %d",b-c==d+a || !(a!=b/c && a<c%a),b<=a && c>a*b,d>=a);
    printf("\n%d || %d",b-c==d+a || !(a!=b/c && a<c%a) || b<=a && c>a*b,d>=a);



    printf("a=10,b=5,c=7,d=9");
    printf("\n(c-a<=a*b && (a>b/a || b%%d<a)) && !(d>=a || (d!=c || (a==c+a)))");
    printf("\n(c-a<=a*b && (a>%d || b%%d<a)) && !(d>=a || (d!=c || (a==c+a)))",b/a);
    printf("\n(c-a<=a*b && (a>%d || %d<a)) && !(d>=a || (d!=c || (a==c+a)))",b/a,b%d);
    printf("\n(c-a<=a*b && (%d || %d<a)) && !(d>=a || (d!=c || (a==c+a)))",a>b/a,b%d);
    printf("\n(c-a<=a*b && (%d || %d)) && !(d>=a || (d!=c || (a==c+a)))",a>b/a,b%d<a);
    printf("\n(c-a<=a*b && %d) && !(d>=a || (d!=c || (a==c+a)))",a>b/a || b%d<a);
    printf("\n(c-a<=%d && %d) && !(d>=a || (d!=c || (a==c+a)))",a*b,a>b/a || b%d<a);
    printf("\n(%d<=%d && %d) && !(d>=a || (d!=c || (a==c+a)))",c-a,a*b,a>b/a || b%d<a);
    printf("\n(%d && %d) && !(d>=a || (d!=c || (a==c+a)))",c-a<=a*b,a>b/a || b%d<a);
    printf("\n%d && !(d>=a || (d!=c || (a==c+a)))",c-a<=a*b && a>b/a || b%d<a);
    printf("\n%d && !(d>=a || (d!=c || (a==%d)))",c-a<=a*b && a>b/a || b%d<a,c+a);
    printf("\n%d && !(d>=a || (d!=c || %d))",c-a<=a*b && a>b/a || b%d<a,a==c+a);
    printf("\n%d && !(d>=a || (%d || %d))",c-a<=a*b && a>b/a || b%d<a,d!=c,a==c+a);
    printf("\n%d && !(d>=a || %d)",c-a<=a*b && a>b/a || b%d<a,d!=c || a==c+a);
    printf("\n%d && !(%d || %d)",c-a<=a*b && a>b/a || b%d<a,d>=a, d!=c || a==c+a);
    printf("\n%d && !%d",c-a<=a*b && a>b/a || b%d<a,(d>=a || (d!=c || a==c+a)));
    printf("\n%d && %d",c-a<=a*b && a>b/a || b%d<a,!(d>=a || (d!=c || a==c+a)));



    printf("a=10,b=5,c=7,d=9");
    printf("\n(c-a<=a*b && (a>b/a || b%%d<a)) && !(d>=a || (d!=c || (a==c+a)))");
    printf("\n(c-a<=a*b && (a>%d || b%%d<a)) && !(d>=a || (d!=c || (a==c+a)))",b/a);
    printf("\n(c-a<=a*b && (a>%d || %d<a)) && !(d>=a || (d!=c || (a==c+a)))",b/a,b%d);
    printf("\n(c-a<=a*b && (%d || %d<a)) && !(d>=a || (d!=c || (a==c+a)))",a>b/a,b%d);
    printf("\n(c-a<=a*b && (%d || %d)) && !(d>=a || (d!=c || (a==c+a)))",a>b/a,b%d<a);
    printf("\n(c-a<=a*b && %d) && !(d>=a || (d!=c || (a==c+a)))",a>b/a || b%d<a);
    printf("\n(c-a<=%d && %d) && !(d>=a || (d!=c || (a==c+a)))",a*b,a>b/a || b%d<a);
    printf("\n(%d<=%d && %d) && !(d>=a || (d!=c || (a==c+a)))",c-a,a*b,a>b/a || b%d<a);
    printf("\n(%d && %d) && !(d>=a || (d!=c || (a==c+a)))",c-a<=a*b,a>b/a || b%d<a);
    printf("\n%d && !(d>=a || (d!=c || (a==c+a)))",c-a<=a*b && a>b/a || b%d<a);
    printf("\n%d && !(d>=a || (d!=c || (a==%d)))",c-a<=a*b && a>b/a || b%d<a,c+a);
    printf("\n%d && !(d>=a || (d!=c || %d))",c-a<=a*b && a>b/a || b%d<a,a==c+a);
    printf("\n%d && !(d>=a || (%d || %d))",c-a<=a*b && a>b/a || b%d<a,d!=c,a==c+a);
    printf("\n%d && !(d>=a || %d)",c-a<=a*b && a>b/a || b%d<a,d!=c || a==c+a);
    printf("\n%d && !(%d || %d)",c-a<=a*b && a>b/a || b%d<a,d>=a, d!=c || a==c+a);
    printf("\n%d && !%d",c-a<=a*b && a>b/a || b%d<a,(d>=a || (d!=c || a==c+a)));
    printf("\n%d && %d",c-a<=a*b && a>b/a || b%d<a,!(d>=a || (d!=c || a==c+a)));


    printf("a=10,b=5,c=7,d=9");
    printf("\n1+1>1-a || 3/a>=b*1 && 4%%a<b || 5<=a || !(a==5 || b!=8)");
    printf("\n1+1>1-a || 3/a>=b*1 && 4%%a<b || 5<=a || !(%d || b!=8)",a==5);
    printf("\n1+1>1-a || 3/a>=b*1 && 4%%a<b || 5<=a || !(%d || %d)",a==5,b!=8);
    printf("\n1+1>1-a || 3/a>=b*1 && 4%%a<b || 5<=a || !%d",a==5 || b!=8);
    printf("\n1+1>1-a || 3/a>=b*1 && 4%%a<b || 5<=a || %d",!(a==5 || b!=8));
    printf("\n1+1>1-a || %d>=b*1 && 4%%a<b || 5<=a || %d",3/a,!(a==5 || b!=8));
    printf("\n1+1>1-a || %d>=%d && 4%%a<b || 5<=a || %d",3/a,b*1,!(a==5 || b!=8));
    printf("\n1+1>1-a || %d>=%d && %d<b || 5<=a || %d",3/a,b*1,4%a,!(a==5 || b!=8));
    printf("\n%d>1-a || %d>=%d && %d<b || 5<=a || %d",1+1,3/a,b*1,4%a,!(a==5 || b!=8));
    printf("\n%d>%d || %d>=%d && %d<b || 5<=a || %d",1+1,1-a,3/a,b*1,4%a,!(a==5 || b!=8));
    printf("\n%d || %d>=%d && %d<b || 5<=a || %d",1+1>1-a,3/a,b*1,4%a,!(a==5 || b!=8));
    printf("\n%d || %d && %d<b || 5<=a || %d",1+1>1-a,3/a>=b*1,4%a,!(a==5 || b!=8));
    printf("\n%d || %d && %d || 5<=a || %d",1+1>1-a,3/a>=b*1,4%a<b,!(a==5 || b!=8));
    printf("\n%d || %d && %d || %d || %d",1+1>1-a,3/a>=b*1,4%a<b,5<=a,!(a==5 || b!=8));
    printf("\n%d || %d || %d || %d",1+1>1-a,3/a>=b*1 && 4%a<b,5<=a,!(a==5 || b!=8));
    printf("\n%d || %d || %d",1+1>1-a || 3/a>=b*1 && 4%a<b,5<=a,!(a==5 || b!=8));
    printf("\n%d || %d",1+1>1-a || 3/a>=b*1 && 4%a<b || 5<=a,!(a==5 || b!=8));
    printf("\n%d || %d",1+1>1-a || 3/a>=b*1 && 4%a<b || 5<=a || !(a==5 || b!=8));



    printf("a=10,b=5,c=7,d=9");
    printf("\nc>d+a && (10<a-b || b>=40*d) || !(c<=50/10 && d!=10%%a) && d==-4");
    printf("\nc>d+a && (10<a-b || b>=%d) || !(c<=50/10 && d!=10%%a) && d==-4",40*d);
    printf("\nc>d+a && (10<%d || b>=%d) || !(c<=50/10 && d!=10%%a) && d==-4",a-b,40*d);
    printf("\nc>d+a && (%d || %d) || !(c<=50/10 && d!=10%%a) && d==-4",10<a-b,b>=40*d);
    printf("\nc>d+a && %d || !(c<=50/10 && d!=10%%a) && d==-4",10<a-b || b>=40*d);
    printf("\nc>d+a && %d || !(c<=%d && d!=10%%a) && d==-4",10<a-b || b>=40*d,50/10);
    printf("\nc>d+a && %d || !(c<=%d && d!=%d) && d==-4",10<a-b || b>=40*d,50/10,10%a);
    printf("\nc>d+a && %d || !(%d && d!=%d) && d==-4",10<a-b || b>=40*d,c<=50/10,10%a);
    printf("\nc>d+a && %d || !(%d && %d) && d==-4",10<a-b || b>=40*d,c<=50/10,d!=10%a);
    printf("\nc>d+a && %d || !%d && d==-4",10<a-b || b>=40*d,c<=50/10 && d!=10%a);
    printf("\nc>d+a && %d || %d && d==-4",10<a-b || b>=40*d,!(c<=50/10 && d!=10%a));
    printf("\nc>%d && %d || %d && d==-4",d+a,10<a-b || b>=40*d,!(c<=50/10 && d!=10%a));
    printf("\n%d && %d || %d && d==-4",c>d+a,10<a-b || b>=40*d,!(c<=50/10 && d!=10%a));
    printf("\n%d && %d || %d && %d",c>d+a,10<a-b || b>=40*d,!(c<=50/10 && d!=10%a),d==-4);
    printf("\n%d || %d && %d",c>d+a && (10<a-b || b>=40*d),!(c<=50/10 && d!=10%a),d==-4);
    printf("\n%d || %d",c>d+a && (10<a-b || b>=40*d),!(c<=50/10 && d!=10%a) && d==-4);
    return 0;
}
