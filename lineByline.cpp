#include<bits/stdc++.h>
using namespace std;

#define nn                    '\n' 
#define pb                    push_back 
#define SS                    stringstream 
#define ull                   unsigned long long 
#define mod                   1000000007 
#define INF                   2147483647 
#define SIZE                  2000001  
#define sf1(a)                scanf("%d", &a) 
#define sf2(a,b)              scanf("%d %d",&a, &b) 
#define sf3(a,b,c)            scanf("%d %d %d", &a, &b, &c) 
#define sf4(a,b,c, d)         scanf("%d %d %d %d", &a, &b, &c, &d)
 #define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)
#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)
#define lli long long int
#define pb push_back
#define f first
#define sec second
#define vi vector<ll>
#define gi greater<ll>
#define maxheap priority_queue<ll>
#define minheap priority_queue<ll, vector<ll>, greater<ll>>
#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define mp make_pair
#define pii pair<ll, ll>
#define spi set<pii>
#define si set<int>
#define mpci map<char, ll>
#define mpii map<ll, ll>
#define f(i,a,n) for(ll i=a;i<n;i++)
#define fi(i,n,a) for(ll i=n-1;i>=0;i--)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define M 1000000007
#define inf 1e18
#define MOD 998244353
#define nl endl

/*------------------------------------SOME BASIC FUNCTION--------------------------------------------------*/


// ll sumofdigit(ll n){ll s = 0;while (n > 0){ll r = n % 10;s += r;n = n / 10;}return s;}
// ll gcd(ll a, ll b){if (b % a == 0){return a;}else{return gcd(b % a, a);}}
// ll POW(ll x, ll y){ll ans=1;for(ll i=0;i<y;i++){ans=ans*x;}return ans;}
// ll ndigit(ll n){ll s=0;while(n>0){s++;n=n/10;}return s;}
// ll arraysum(ll a[], ll n){ll s = 0;f(i, 0, n){s = s + a[i];}return s;}
// ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
// void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
// ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
// ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
/*---------------------------------------------------------------------------------------------------------------*/


/*-----------------------------------ACTUAL CODE STARTS HERE-----------------------------------------------------*/

 struct Node {
    int data;
    struct Node *left, *right;
};
Node* newNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
 
void LineByLine(Node * root) {
  if (root == NULL) return;
  queue < Node * > q1;
  q1.push(root);


  while (q1.empty() == false) {
    Node * node = q1.front();
    cout << node -> data << " ";
    q1.pop();
    if (node -> left != NULL)
      q1.push(node -> left);
    if (node -> right != NULL)
      q1.push(node -> right);
  }
}
 
 
 
int main() {
Node* root = newNode(12);
    root->left = newNode(23);
    root->right = newNode(34);
    root->left->left = newNode(43);
    root->left->right = newNode(53);
    
    LineByLine(root);
return 0;
}
