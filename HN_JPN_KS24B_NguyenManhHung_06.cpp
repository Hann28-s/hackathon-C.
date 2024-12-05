#include<stdio.h>
  int main(){
  	int choice;
  	int arr[100]; 
	 
  	do{
  	  printf("\nMENU\n");
  	  printf("1.Nhap so phan tu va gia tri cho mang\n");
  	  printf("2.Gia tri cac phan tu trong mang\n"); 
  	  printf("3.So luong cac so hoan hao co trong mang\n");
	  printf("4.Gia tri nho thu 2 trong mang\n");
	  printf("5.Them mot phan tu vao trong mang\n");
	  printf("6.Xoa phan tu trong mang\n");
	  printf("7.Sap xep mang tang dan\n");
	  printf("8.Kiem tra co ton tai phan tu trong mang khong\n");
	  printf("9.Sap xep lai mang so le dung truoc, so chan dung sau\n");
	  printf("10.Kiem tra mang co tang dan khong\n");
	  printf("11.Thoat chuong trinh\n"); 
	  printf("Lua chon cua ban la: ");
	  scanf("%d", &choice);
	  
	switch(choice) {
	  case 1 ://Nhap so phan tu va gia tri 
	            int currentLength; 
                printf("Nhap so phan tu ban dau: ");
                scanf("%d", &currentLength);
                if (currentLength > 100 || currentLength < 0) {
                    printf("So phan tu khong hop le\n");
                    currentLength = 0;
                } else {
                    for (int i = 0; i < currentLength; i++) {
                        printf("Nhap phan tu %d: ", i + 1);
                        scanf("%d", &arr[i]);
                    }
                }
                break;
                
      case 2 ://Hien thi 
                if (currentLength == 0) {
                    printf("Mang rong\n");
                } else {
                    printf("Mang hien tai: ");
                    for (int i = 0; i < currentLength; i++) {
                        printf("arr[%d]=%d ",i , arr[i]);
                    }
                    printf("\n");
                }
                break;
                
      case 3 :
	     break;
	     
	  case 4 : 
	     break; 

      case 5 ://Them 1 phan tu  
                int position, value; 
                printf("Nhap vi tri muon them (0 den %d): ", currentLength);
                scanf("%d", &position);
                if (position < 0 || position > currentLength) {
                    printf("Vi tri khong hop le\n");
                }else{
					printf("Nhap gia tri muon them: ");
                    scanf("%d", &value);
                    for (int i=0; i < currentLength; i++){
                    	if(value = arr[i]) {
                    		printf("Phan tu da ton tai trong mang\n"); 
					}else{		 
                 for (int i = currentLength; i > position; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[position] = value;
                    currentLength++; 	
					 }
                }
            }
                break;
      case 6 :// Xoa phan tu 
                printf("Nhap vi tri muon xoa (0 den %d): ", currentLength - 1);
                scanf("%d", &position);
                if (position < 0 || position >= currentLength) {
                    printf("Vi tri khong hop le\n");
                } else {
                    for (int i = position; i < currentLength - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    currentLength--;
                }
                break;
      case 7 :// Tang dan 
			if(currentLength>0){
				printf("Mang sau khi duoc sap xep: \n");
				for(int i=0;i<currentLength-1;i++){
					for (int j=i+1;j<currentLength;j++){
						if(arr[i]>arr[j]){
							int temp=arr[i];
							arr[i]=arr[j];
							arr[j]=temp;
						}
					}
				}
				for(int i=0;i<currentLength;i++){
					printf("%d",arr[i]);
					printf("\n");
				}
			} else {
				printf("Moi ban nhap lai do dai cua mang: ");
			}
	     break;
	     
	  case 8 :
			if(currentLength>0){
				int search;
				printf("Moi dai ka nhap phan tu can tim kiem: ");
				scanf("%d",&search);
				for(int i=0;i<currentLength;i++){
					if(search==arr[i]){
						printf("Phan tu %d co trong mang",search);
						printf(" phan tu %d thi o vi tri %d trong mang",search,i);
						break;
					} else {
						printf("Phan tu ban tim kiem khong co trong mang\n");
						break;
					}	
				}
				
			}else{
				printf("Moi dai ka nhap lai do dai cua phan tu\n");
			}
			break;
	     
	  case 9 :
	  	if(currentLength>0){
				printf("Mang sau khi duoc sap xep: \n");
				for(int i=0;i<currentLength-1;i++){
					for (int j=i+1;j<currentLength;j++){
						if(arr[i]%2!=0 && arr[j]%2==0){
							int temp=arr[i];
							arr[i]=arr[j];
							arr[j]=temp;
						}
					}
				}
				for(int i=0;i<currentLength;i++){
					printf("%d",arr[i]);
					printf("\n");
				}
			} else {
				printf("Moi ban nhap lai do dai cua mang: ");
			}
			break;
	    
	     
	  case 10 :
	  	for(int i=0; i < currentLength; i++){
	  		for(int j=i+1; j < currentLength; j++){
	  		if(arr[i]>arr[j]){
	  			printf("Mang chua phai mang tang dan\n"); 
	  			break; 
			  }else{
			  	printf("Mang da la mang tang dan\n"); 
			  }
			  } 
		  } 
	     break; 
	  case 11 :
	       printf("Thoat chuong trinh\n");
		   break; 
    
      default:
	      printf("Vui long lua chon lai\n");
     }
       } while(choice!=11);
    return 0;
}

  
