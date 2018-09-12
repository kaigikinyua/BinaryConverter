#include<iostream>
#include<math.h>
using namespace std;
void Whole(float num){
  int binary[16];  float n=num; int p=0,i=0;int decimal[16];
  while(pow(2,p)<n){
    p++;
    //cout<<p<<endl;
  }
  int number=p;
  while(n>0){
    if(n>=pow(2,p)){
      n=n-pow(2,p);
      p=p-1;
      binary[i]=1;
      //cout<<binary[i]<<endl;
    }else{
      p=p-1;
      binary[i]=0;
      //cout<<binary[i]<<endl;
    }
      i++;
  }
  while (0<n and n<1){
    int p=-1;int i=0;
    while(pow(2,p)<n){
      p++;
      //cout<<p<<endl;
    }  p=p-1;
    while(n>0){
      if(n>pow(2,p)){
        n=n-pow(2,p);
        p=p-1;
        decimal[i]=1;
      }else{
        p=p-1;
        binary[i]=0;
      }
      i++;
      if(n<=0){
        break;
      }
    }
}
  cout<<"Whole number"<<endl;
  for (int j=0;j<=number;j++){
    cout<<binary[j];
  }
  cout<<"\nFraction\n"<<endl;
  for (int j=0;j<=number;j++){
    cout<<decimal[j];
  }
  cout<<"\n"<<endl;
}
int main()
{
  cout<<"Enter the number"<<endl;
  float n;cin>>n;
  Whole(n);
  return 0;
}
