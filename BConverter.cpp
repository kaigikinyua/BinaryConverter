#include<iostream>
#include<math.h>
using namespace std;
//takes binary and dispalys the equivalent decimal
void bin2deci(int bin[16]){

}
void Whole(float num){
  int binary[16];  float n=num; int p=0,i=0;int decimal[16];
  while(pow(2,p)<n){
    p++;
    //checking the highest power of 2 that is almost equal to the number
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
  //float part
  if (0<n and n<1){
    int p=-1;int i=0;
    while(pow(2,p)>n){p--;}p=p-1;
    while(n>0){
      if(n>pow(2,p)){
        n=n-pow(2,p);
        p=p+1;
        decimal[i]=1;
      }else{
        p=p+1;
        binary[i]=0;
      }
      i++;
      if(p>=0){
        break;
      }
    }
}//end of while
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
