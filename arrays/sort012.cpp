// https://www.codingninjas.com/codestudio/problems/sort-0-1-2_631055?topList=striver-sde-sheet-problems&leftPanelTab=0


void sort012(int *arr, int n)
{
   //   Write your code here
    int l,m,h;
    l=0;
    h=n-1;
    m = 0;
    while(m<=h){
       
        if(arr[m]==0){
            int temp = arr[m];
            	arr[m]= arr[l];
            	arr[l]= temp;  
            	m++;l++;
        }else if(arr[m]==1){
           		 m++;
        }else if(arr[m]==2){
             int temp = arr[m];
           		 arr[m]= arr[h];
          		 arr[h]= temp; 
           		 h--;
        }
        
          
    }
}
