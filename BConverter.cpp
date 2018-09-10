#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int binary[16];
  cout<<"Enter an integer"<<endl;
  int n;
  cin>>n;
  int p=0,i=0;
  while(pow(2,p)<n){
    p++;
    cout <<p<<endl;
  }
  p=p-1;
  int number=p;
  while(n>0){
    if(n>=pow(2,p)){
      n=n-pow(2,p);
      p=p-1;
      binary[i]=1;
      cout<<binary[i]<<endl;
    }else{
      p=p-1;
      binary[i]=0;
      cout<<binary[i]<<endl;
    }
    i++;
    //cout <<i<<endl;
  }
  //conversion
  for (int j=0;j<=number;j++){
    cout<<binary[j];
  }
  cout<<"\n"<<endl;
  return 0;
}
