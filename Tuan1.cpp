

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
