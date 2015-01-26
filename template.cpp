#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define sc(x) scanf("%d",&x)
#define f(i,x) for(i=0;i<x;i++)
#define MOD  1000000009
#define ll long long int
using namespace std;
bool comp(int i,int j){
	return i>j;
}
long long gcd ( long long a, long long b )
{
  long long c;
  while ( a != 0 ) {
     c = a; a = b%a;  b = c;
  }
  return b;
}
long long int bigmod ( long long a, int p, long m )  //http://algorithmprogramming.blogspot.in/2012/04/big-mod-algorithm-value-of-p-m.html
{
    if ( p == 0 || a==1 )return 1; // If power is 0 ( a ^ 0 ), return 1

    if ( p & 1 ) // If power is odd, a ^ 7 = a * a ^ 6
    {
        return ( ( a % m ) * ( bigmod ( a, p - 1, m ) ) ) % m; // Multipication    may exceed int range
    }
    else
    {
        long long c = bigmod ( a, p / 2, m ); // Multipication may exceed int range
        return ( c * c ) % m;
    }
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
//use statements in line number 36,37 if you want to make cin and cout to work fast like scanf and printf.
return 0;
}
