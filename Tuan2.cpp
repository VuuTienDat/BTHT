

#include <bits/stdc++.h>
using namespace std;
bool Prime(int n){
 if(n < 2){return false;}
 if(n == 2){return true;}
 for(int i =2; i <= n/2; i++){if(n % i ==0){return false;}
}
return true;}
int main(){
 int n;
 cin >>n;
 if(Prime(n)){cout << "yes";}
 else cout << "no";


}
N
#include <bits/stdc++.h>
using namespace std;
int main(){
   int n ; cin >>n;
   for( int i = 0; i < n; i++){
    cout << string(i,' ')<< string(n-i,'*')<<endl;


   }

}


#include <bits/stdc++.h>
using namespace std;
int main(){
   int n ; cin >>n;
   for( int i = 0; i < n; i++){
    cout << string(n-i,' ')<< string(2*i+1,'*')<<endl;


   }

}
#include <bits/stdc++.h>
using namespace std;
int main(){
   int n ; cin >>n;
   for( int i = 0; i < n; i++){
    cout << string(i,' ')<< string(2*(n-i)-1,'*')<<endl;


   }

}





#include <bits/stdc++.h>
using namespace std;
string NumberToEnglish(int n){
 string result ="";
 if( n==0 ){return "zero";}
 if( n < 0){
    result += "negative ";
    n = -n;
 }
if(n > 1000000){
    result += NumberToEnglish(n / 1000000) + "million ";
    n = n % 1000000;
}
if( n > 1000){
    result += NumberToEnglish( n / 1000) + "thousand ";
    n = n % 1000;
}
if ( n > 100){
    result += NumberToEnglish(n / 100) + "hundred ";
    n = n % 100;

}
if(n >= 20){
    string tens[]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninty"};
    result += tens[n/10]+' ';
    n = n/ 10;

}
if(n > 10){
    string ev[]={"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","ninteen"};
    result += ev[n % 10] +' ';

}
if( n <= 10){
    string ones[]={"","one","two","three","four","five","six","seven","eight","nine","ten"};
    result += ones[n] +' ';

}
return result;
}
 int main(){
int n ; cin >>n;
cout << NumberToEnglish(n);










 return 0;
 }
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n; cin >>n;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j =1+i ; j <= n+i ; j++)
        {
            int k =j % n;
            if(k==0){k=n;}
            cout << k <<' ';

        }
        cout << endl;
    }

}



#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    vector <int >a;
    while(n > 0)
    {
     a.push_back(n);
        cin >> n ;
    }
    a.push_back(n);
    for(int i = 0; i < (int)a.size() - 1 ; i++)
    {
        if(a[i] != a[i+1] ){cout << a[i]<<' ';}
    }
    cout << a[(int)a.size()-1];

}


#include <bits/stdc++.h>
using namespace std;
int main(){
  int n ; cin >>n;

  long long Min = LLONG_MAX, min = LLONG_MAX;
  while(n --){
    long long a,b;
    cin >> a >> b;
    if(a < Min){Min = a;}
    if(b < min){min = b;}

  }
 long long tich =Min * min;
 cout << tich;

}



#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    double C= ((double)n-32)*5/9,
     Kelvin = C+273.15;
    cout << n << ' ' << fixed<< setprecision(2) << C <<' ' << Kelvin;

}



#include <bits/stdc++.h>
using namespace std;
int main()
{
    double Min,Max,step;
    cin >> Min >>Max >>step;
    for(double i = Min; i<= Max; i+=step)
    {
        double doC=(i-32)*5/9,Kelvin = doC +273.15;
        cout << fixed << setprecision(2)<< i << ' '<<doC << ' ' << Kelvin <<endl;
    }

}

#include <bits/stdc++.h>
using namespace std;
bool soChinhPhuong(int n){
 int c= sqrt(n);
if(n==c*c){return true;}
return false;
}
int main()
{
    int a;
    cin >>a;
    if(a < 0){cout << "vui long nhap so nguyen duong"; return 0;}
    if(soChinhPhuong(a)){cout << a <<" la so chinh phuong";}
    else {cout <<a<< " khong la so chinh phuong";}
}




#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if( n < 2){return false;}
    if(n == 2){return true;}
    for(int i = 2; i <= n/2; i++){if(n%i==0) return false;}
    return true;

}
bool soHoanHao(int n)
   { int tong=0;
  for(int i =2; i <=n/2; i++ )
   {
       if(n % i==0){tong +=i;}
}
if(tong+1 == n){return true;}
 return false;
}

bool soChinhPhuong(int n){
 int c= sqrt(n);
if(n==c*c){return true;}
return false;
}
int main()
{
    int a;
      cin >>a;
for(int i=2;i<=a;i++){
if(isPrime(i)){cout << i <<' ';}
}
cout << endl;
for(int i=2;i<=a;i++){
if(soHoanHao(i)){cout << i <<' ';}
}
cout << endl;
for(int i=2;i<=a;i++){
if(soChinhPhuong(i)){cout << i <<' ';}
}
cout << endl;
}




#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >>n;
    double Max = -DBL_MAX, Min= DBL_MAX;

    while (n--)
    {
        double a; cin >> a;

        if(a > Max){Max = a;}
        if(a < Min){Min = a;}
    }
    cout << Max << endl << Min;

}



#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >>n;
    double Max = -DBL_MAX, Min= DBL_MAX;

    while (n--)
    {
        double a; cin >> a;

        if(a > Max){Max = a;}
        if(a < Min){Min = a;}
    }
    cout << Max << endl << Min;

}



#include <bits/stdc++.h>
using namespace std;
int main (){
 int n;
 cout << "Nhap vao mot so trong khoang 0..9: ";
cin >> n;
while( n > 0 && n < 9)
{
    string one[]={"khong","mot","hai","ba","bon","nam","sau","bay","tam","chin"};
   cout << "Vua nhap chu so " << one[n]<< endl;
    cout << "Nhap vao mot so trong khoang 0..9: ";
    cin >>n;
}
cout << "Vua nhap chu so" << n;






 return 0;
}


#include <bits/stdc++.h>
using namespace std;
int main(){
 int n =5;
 double tb = 0;
 while ( n --){
 double a; cin >>a;
 tb += a/5;

 }
 cout << tb;


}


#include <bits/stdc++.h>
using namespace std;
double tinhDtb(double n,int i)
{   cout << "Nhap lai diem mon " <<i <<" (trong khoang tu 0 ..10) :  ";
    cin >> n;

     if(n > 10){
    return tinhDtb(n,i);
    }
    return n;
}

int main(){
    int i = 1;
    double diemTB = 0;


   do{
    double n;
    cout <<"Diem mon hoc " << i <<": "  ;
    cin >>n;

    if(n > 10){diemTB += tinhDtb(n,i);}
     if(n < 0){i--;break;}
    if(n >= 0 && n <= 10){


            diemTB += n;}



   }while(i++);
 cout << "Diem trung binh cua " << i << " mon hoc: " << diemTB/(i) << endl;
}


#include <bits/stdc++.h>
using namespace std;
int h;
double tinhDtb(double n,double heSo, int i)
{   cout << "Nhap lai diem mon " <<i <<" (trong khoang tu 0 ..10) :  ";

    cin >> n;
    cout << "Nhap  lai he so " << i << " (1 1,5 2 2,5 hoac 3) : ";
    cin >> heSo;
     if(n > 10||heSo > 3){
    return tinhDtb(n,heSo,i);
    }
    h = heSo;
    return n*heSo;
}

int main(){
    int i = 1;
    double diemTB = 0,tongHeSo = 0;
    int k;
  cout << "Tong so mon hoc can tinh DTB: ";
  cin >> k;

   do{
    double n,heSo;

    cout <<"Diem mon hoc " << i <<": "  ;
    cin >>n;
    cout << "He so mon hoc " << i <<": ";
    cin >> heSo;

    if(n > 10||heSo > 3){diemTB += tinhDtb(n,heSo,i);
    tongHeSo += h;

    }

    if(n >= 0 && n <= 10&& heSo >=1 && heSo <=3){

            tongHeSo += heSo;
            diemTB += (n*heSo);}



   }while(i++ && i <= k);
 cout << "Diem trung binh cua " << (i-1) << " mon hoc: " << diemTB/(tongHeSo) << endl;

}

#include <bits/stdc++.h>
using namespace std;
 int main(){
 double x; cin >>x;
 double k = x;
 int y ;  cin >> y;
 y = y - 1;
 while( y--){x = x * k ;}

 if (x = pow(k,y)){cout << "yes" ;}
else {cout << "no";}

 }

#include <bits/stdc++.h>
using namespace std;
int main()
  { int a,b,c;
  cin >> a >> b >> c;
  if( a + b > c && a + c > b && b + c > a){
     int tong = a+ b+c;
     cout << tong << endl;

  if(pow(a,2)+pow(b,2)==pow(c,2)||pow(a,2)+pow(c,2)==pow(b,2)||pow(b,2)+pow(c,2)==pow(a,2)){cout <<"vuong";return 0;}
  if(a==b&&b==c){cout << "deu";return 0;}
  if(a!=b && b!=c && c!=a){cout << "thuong";}
  else {cout << "can";}



                                        }
 else {cout <<"Invalid"; }





}

#include <bits/stdc++.h>
using namespace std;
 int ucln(int a, int b)
 {
     if(b==0){return a;}
     return ucln(b, a%b);

 }
int main(){
    int a ,b; cin >>a>>b;
    if(a==0||b==0){cout << 0; return 0;}
    int c= a*b/ucln(a,b);
    cout <<abs(c);


}

#include <bits/stdc++.h>
using namespace std;
 int ucln(int a, int b)
 {
     if(b==0){return a;}
     return ucln(b, a%b);

 }
int main(){
    int a ,b; cin >>a>>b;
    if(a==0||b==0){cout << "invalid"; return 0;}
     cout << abs(ucln(a,b));


}









#include <bits/stdc++.h>
using namespace std;
 int ucln(int a, int b)
 {
     if(b==0){return a;}
     return ucln(b, a%b);

 }
 void PhanSoToiGian(int a, int b){

   int c= ucln(a,b);
  a= a/c;
  b=b/c;
  cout <<"Phan so toi gian la : " << a <<'/'<< b<<endl;
 }
int main(){
    int a, b; cin >> a >> b;
    if(b == 0 ){cout <<"invalid"; return 0;}
    PhanSoToiGian(a,b);

}



#include <bits/stdc++.h>
using namespace std;
 struct Ptbac1{
  double a,b,c,a1,b1,c1;
  Ptbac1 (double  _a, double _b, double _c, double _a1, double _b1, double _c1)
  {
    a=_a;
    b=_b;
    c=_c;
    a1=_a1;
    b1=_b1;
    c1=_c1;
  }
  void nghiemPT(){
  if((a*b1-a1*b) != 0){
    double  x1 =-(b*c1 - b1*c)/(a*b1 - a1*b);
    double y1 = (a*c1-a1*c)/(a*b1 - a1*b);
    cout << "He phuong trinh co nghiem duy nhat la:" << endl;
    cout << x1 << ' ' << y1;
  }
  else{
   if( a != 0 && b != 0 && c!=0 && a1 != 0 && b1 != 0 && c1 !=0)
   {
       if(a1/a == b1/b && b1/b == c1/c){cout << "he vo so nghiem";}
       else{ cout << "he vo nghiem";}
   }

   else if((a1 ==0 && b1 ==0 && c1 ==0)||(a == 0 && b ==0 && c == 0))
   {
       cout << "he vo so nghiem";
   }
   else {cout << "he vo nghiem";}

  }



  }



 };

 int main (){
  double a,b,c,a1,b1,c1;
  cin >> a >> b >>c >> a1 >> b1 >> c1;
  Ptbac1 solve(a,b,c,a1,b1,c1);
  solve.nghiemPT();

 }



#include <bits/stdc++.h>
using namespace std;
 struct Ptbac2{
 double a,b,c;
 Ptbac2(int _a ,int _b, int _c): a(_a),b(_b),c(_c) {}
 void Solve(){
 if(a !=0 ){
  double delta = pow(b,2)-4 * a * c;
  if(delta > 0){
    cout << "phuong trinh co 2 nghiem phan biet la "<< endl;
    cout << (-b-sqrt(delta))/(2*a)<<' '<< (-b+sqrt(delta))/(2*a);


  }
  else if( delta ==0){

    cout << "phuong trinh co nghiem kep la :" << endl;
    cout << -b /(2 * a);
  }
 else {
    cout << "phuong trinh co 2 nghiem phuc la"<< endl
     << -b/(2 *a) <<" + "<< -sqrt(-delta)/(2 *a) <<'i'<<" va "
     << -b/(2 *a) <<" + "<< +sqrt(-delta)/(2 *a) <<'i';

 }}

 if(a ==0 ){
    if(b ==0 ){
        if(c  != 0){cout << "phuong trinh vo nghiem";}
        else {cout << "phuong trinh vo so nghiem";}
    }
    else { cout << "phuong trinh co nghiem duy nhat  " << endl;
      cout <<  (b)/c;
    }


 }
 }



 };

 int main (){
  double a,b,c;
  cin >> a >> b >>c ;
  Ptbac2 solve(a,b,c);
  solve.Solve();

 }




 #include <bits/stdc++.h>
using namespace std;
 int main (){
 int a; cin >>a;
 int tong = 0;
 while (a > 0){
    int h = a % 10;
    tong +=h;

    a=a/10;
 }

  cout << tong;
 }
