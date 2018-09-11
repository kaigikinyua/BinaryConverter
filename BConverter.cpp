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
    if (0<n and n<1){
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
  }else{
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
}
  for (int j=0;j<=number;j++){
    cout<<binary[j];
  }
  cout<<"\n"<<endl;
  for (int j=0;j<=number;j++){
    cout<<decimal[j];
  }
  cout<<"\n"<<endl;
}
int main()
{
  int ans;
  cout<<"Enter a choice \n1.Integer\n2.Decimal"<<endl;
  cin>>ans;cout<<"\n"<<endl;
  if (ans==1){
    cout<<"Enter the number"<<endl;
    float n;cin>>n;
    Whole(n);
  }else if(ans==2){
    //call the decimal function
  }else {
    cout<<"Unknown Choice"<<endl;
  }
  return 0;
}
