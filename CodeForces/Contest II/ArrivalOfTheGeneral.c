#include<stdio.h>
int main(){
  int n,max,min;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    
  }
  max =a[0];          //max from start to get the maximum elements near to start, once max is stored then even if duplicates found, max will not change
  min=a[n-1];         //min from last to get the minimum elements near to end
  
  int pmin = n-1, pmax = 0;      //to store positions for max and min
  
  //for getting max number and its position
  for(int i=1; i<n; i++){
    if(a[i]>max){
      max=a[i];
      pmax = i;
    }
    
  }
  
  //for getting min number and its position
  for(int i=n-2; i>=0; i--){
    if(a[i]<min){
      min=a[i];
      pmin = i;
    }
  }
  
  int sct = pmax;
  int ect = (n-1)-pmin;
  
  if(pmin < pmax){              // remember we have to put the largest element in front and smallest element in back, so if pmin < pmax, one step counts for both(exchnage position)
      printf("%d",sct+ect-1);   // therefore -1 to count one step
  }
  else{
      printf("%d", sct+ect);
  }
}