#include <stdio.h>
int main()
{
	int arr[100];
	int mang[50];
	int i,j,n,num,location;
	int choose,temp,max,max2,min,min2;
	int check=-1;
	
	while(choose!=15) {
	printf("\nMENU\n");
	printf("1.Nhap so luong va gia tri cho cac phan tu\n");
	printf("2.In mang\n");
	printf("3.Dem so phan tu hoan hao\n");
	printf("4.Dem so luong so nguyen to\n");
	printf("5.Tim gia tri lon thu hai\n");
	printf("6.Tim gia tri nho thu hai\n");
	printf("7.Them phan tu tai vi tri\n");
	printf("8.Xoa phan tu tai vi tri\n");
	printf("9.Sap xep mang tang dan\n");
	printf("10.Sap xep mang giam dan\n");
	printf("11.Tim kiem phan tu\n");
	printf("12.Xoa phan tu trung lap va in phan tu doc nhat\n");
	printf("13.Sap xep va hien thi so chan dung truoc le dung sau\n");
	printf("14.Dao nguoc mang\n");
	printf("15.Thoat\n");
	printf("Moi ban nhap lua chon cua ban:");
    scanf("%d",&choose);
    switch(choose) {
    	case 1://Nhap so luong va gia tri cho cac phan tu
    		printf("Moi ban nhap so luong phan tu cua mang:");
    		scanf("%d",&n);
    		for(i=0;i<n;i++) {
    			printf("Moi ban nhap gia tri cho arr[%d]:",i);
    			scanf("%d",&arr[i]);
			}
		break;
		case 2://In mang
			for(i=0;i<n;i++) {
				printf("arr[%d]=%d\n",i,arr[i]);	
			}
		break;
		case 3://Dem so phan tu hoan hao
		case 4://Dem so luong so nguyen to
			for(i=0;i<n;i++) {
				if(arr[i]%2!=0&&arr[i]%3!=0&&arr[i]%4!=0&&arr[i]%5!=0&&arr[i]%6!=0&&arr[i]%7!=0&&arr[i]%8!=0&&arr[i]%9!=0 ||arr[i]==2||arr[i]==3||arr[i]==5||arr[i]==7) {
					printf("%d ",arr[i]);
				}
			} 
		break;
		case 5://Tim gia tri lon thu hai
		max=arr[0];
		for(i=1;i<n;i++) {
			if(max<arr[i]) {
				max=arr[i];
			}
		}
		if(max==arr[0]) {
			for(i=1;i<n;i++) {
			    if(max2<arr[i]) {
			    	max2=arr[i];
		    	}
		    }
		} else {
			max2=arr[0];
		    for(i=1;i<n;i++) {
		    	 if(max2<arr[i]) {
					if(arr[i]==max) {
		    		continue;
				    } else{
					    max2=arr[i];
					}	
		    	}
		    }      
		}
		printf("Gia tri lon thu hai la:%d",max2);
		break;
		case 6://Tim gia tri nho thu hai
			min=arr[0];
		for(i=1;i<n;i++) {
			if(min>arr[i]) {
				min=arr[i];
			}
		}
		if(min==arr[0]) {
			for(i=1;i<n;i++) {
			    if(min2>arr[i]) {
			    	min2=arr[i];
		    	}
		    }
		} else {
			min2=arr[0];
		    for(i=1;i<n;i++) {
		    	 if(min2>arr[i]) {
					if(arr[i]==min) {
		    		continue;
				    } else{
					    min2=arr[i];
					}	
		    	}
		    }      
		}
		printf("Gia tri nho thu hai la:%d",min2);
		break;
		case 7://Them phan tu tai vi tri
			printf("Moi ban nhap phan tu ban muon them:");
			scanf("%d",&num);
			printf("Moi ban nhap vi tri ban muon them:");
			scanf("%d",&location);
			n++;
			for(i=n-1;i>location-1;i--) {
				arr[i]=arr[i-1];
			}
			arr[location-1]=num;
			for(i=0;i<n;i++) {
				printf("%d ",arr[i]);	
			}
	   	break;
		case 8://Xoa phan tu tai vi tri
			printf("Moi ban nhap vi tri ban muon xoa:");
			scanf("%d",&location);
			n--;
			for(i=location-1;i<n;i++) {
				arr[i]=arr[i+1];
			}
			for(i=0;i<n;i++) {
				printf("%d ",arr[i]);	
			}
		break;	
		case 9://Sap xep mang tang dan
		for(i=0;i<n-1;i++) {
			for(j=0;j<n-i-1;j++) {
				if(arr[j]>arr[j+1]) {
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		} 
		for(i=0;i<n;i++) {
			printf("%d ",arr[i]);	
		}
		break;
		case 10://Sap xep mang giam dan
		for(i=0;i<n-1;i++) {
			for(j=0;j<n-i-1;j++) {
				if(arr[j]<arr[j+1]) {
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		} 
		for(i=0;i<n;i++) {
			printf("%d ",arr[i]);	
		}
		break;                                                                    
		case 11://Tim kiem phan tu
		printf("Moi ban nhap phan tu ban muon tim kiem:");
		scanf("%d",&num);
		for(i=0;i<n;i++) {
	    	if(num==arr[i]) {
	    		check++;
	    		printf("Phan tu %d cua ban o vi tri:arr[%d]\n",num,i);
			}
	    }
		if(check==-1) {
			printf("Khong co phan tu ban can tim kiem");
		}
		break;
		case 12://Xoa phan tu trung lap va in phan tu doc nhat
		
		
			
		case 13://Sap xep va hien thi so chan dung truoc le dung sau
		    for(i=0;i<n-1;i++) {
		    	for(j=0;j<n-i-1;j++) {
		    		if(arr[j]>arr[j+1]) {
		    			temp =arr[j];
		    			arr[j]=arr[j+1];
		    			arr[j+1]=temp;	
					}
				}
			}	
			j=0;
			for(i=0;i<n;i++){
				if(arr[i]%2==0) {	
				   mang[j]=arr[i];
				   j++;
				}
				if(arr[i]%2!=0) { 
					mang[j]=arr[i];
				   j++;
			    }	
			}	 
			for(i=0;i<n;i++){
				arr[i]=mang[i];
			}
			 for(i=0;i<n;i++){
			 	printf("%d\t", arr[i]);
			 }	
		break;
		case 14://Dao nguoc mang
			for(i=0;i<n/2;i++) {
				temp=arr[i];
				arr[i]=arr[n-i-1];
				arr[n-i-1]=temp;
				
			}
			for(i=0;i<n;i++) {
				printf("%d ",arr[i]);
			}
		break;
		case 15://Thoat	
		break;			
	}
    
	} 
	return 0;
 }
