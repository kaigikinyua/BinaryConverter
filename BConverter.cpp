#include<iostream>
#include<math.h>
using namespace std;
//takes binary and dispalys the equivalent decimal
void bin2deci(int bin,int j){
  int ans=0;int i=j;
  //cout<<j<<endl;
 while(i>0){
   if((bin-pow(10,i))>0){
     cout<<bin<<" binary "<<endl;
     ans+=pow(2,i);
     bin=bin-pow(10,i);
     cout<<"ans "<<i<<" bin "<<bin<<endl;
   }else if((bin-pow(10,i))==1){
     ans+=1;
   }
   i--;
 }
 cout<<ans<<endl;
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
  cout<<"Option 1 change from decimal to binary\nOption 2 change from binary to decimal\n\n"<<endl;
  int choice;cin>>choice;
  if (choice==1){
    float n;cin>>n;
    Whole(n);
  }else if (choice==2){
    cout<<"Enter the binary digits\n"<<endl;
    int bin;cin>>bin;int j=1;int i;
    for(i=0;i<=16;i++){
      if(j<=bin){
        j*=10;
      }else{break;}
    }
    bin2deci(bin,i);
  }else{
    cout<<"Uknown choice"<<endl;
  }
  return 0;
}
