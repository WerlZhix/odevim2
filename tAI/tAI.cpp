#include<stdio.h>



int main () {
	int secenek;
	
	printf("\t\t   Merhaba ben senin akilli robotun tAI kisaca bana 'tyai' diyebilirsin...\n\tSana bazi konularda (su anlik :P) yardimci olucam.\n  Su anda yapimcimin bana isledigi konulari goruyorsun.birini secmeye ne dersin?\n");
	printf("\n1:universitede yapilmasi gerekenler\n2:kyk yurdunda ihtiyacim olacak listesi\n3:hangi bolume hangi bilgisayar?\n4:Genc kartim ile aklima takilanlar\n5:Bu uygulama nasil yazildi?\n6:Sen kimsin?\n7:Uygulama gelistirmek zor mu?\n\n");
	scanf("%d",&secenek);
	
	switch(secenek){
	
		case 1:
			int gidis;
			int secenek;
			printf("\t\t\tOncelikle ogrenci isleri hangi binada ogrenmek gerek.\n\t\t  daha sonra ogrenci islerini bulup ogrenci kartini alman gerek.\n\t\t\ sinif grubu kuruldu ise (ogretmenlerin dahil oldugu) bu grubtan gelen\n\t\tbildiri mesajlarina dikkat etmen gerek\n\t\tvoleybol futbol veya baska bir spor dali ile ilgili\n\t\tacilan kurslari buradan takip edebilirsin.");
		printf("Bana sormak istedigin ya da ogrenmek istedigin bir sey var mi?");
		printf("\nVar ise 7 ye basarmisin 7 yi severim :)");
			scanf("%d",&gidis);
			if(gidis=7){
					printf("\n2:kyk yurdunda ihtiyacim olacak listesi\n3:hangi bolume hangi bilgisayar?\n4:Genc kartim ile aklima takilanlar\n5:Bu uygulama nasil yazildi?\n6:Sen kimsin?\n7:Uygulama gelistirmek zor mu?\n\n");
		scanf("%d",&secenek);
		
		switch(secenek){
			
			case 1:
				printf("sanirim zekami test ediyorsun :D usengec oldugumu belirtmek isterim...\nBu islemin aynisi hemen yukarida dikkatli oku lutfen...\n");
				printf("\n\tHata kodu:'PASTA' acilen bir adet pasta yemelisin... ve bu uygulamayi tekrar acman gerek :P");
	             	break ;
	             	
	             	
	         case 2:
	         	int secenek1;
	         	int gidis;
	         		     	printf("\n\t\tliste biraz kalabalik not defterini getirmeyi unutma..\n\tCamasirlarin icin 'camasir filesine ihtiyacin var'\n\tSabun sabunnunu katacagin kutu,sampuan,2 adet canta biri buyuk biri kucuk\n\tDis fircasi ve kutusu\n\t3 adet terlik,pecete\n\tkahve seviyorsundur sanirim kupan'i da unutma");
                        
							printf("\nBana sormak istedigin ya da ogrenmek istedigin bir sey var mi?");
		printf("\nVar ise 7 ye basarmisin 7 yi severim :)");
			scanf("%d",&gidis);
			if(gidis=7){
						printf("\n3:hangi bolume hangi bilgisayar?\n4:Genc kartim ile aklima takilanlar\n5:Bu uygulama nasil yazildi?\n6:Sen kimsin?\n7:Uygulama gelistirmek zor mu?\n\n");
		scanf("%d",&secenek1);
		
		switch(secenek1){
			
			
			case 3:
				int gidis;
					 	int m;
			 	int secenek;
			 					printf("hangi alan bolumunde okuyorsun TYT:1 / AYT:2 ?");
		scanf("%d",&m);
		
		if(m==1){
			
			printf("\n\ttyt bolumu icin genellikle ince ve pili daha cok gidecek laptoplar tercih edilir.\n\tBu laptoplarin islemcilerinde H ibaresi bulunur\n\n\t\tORNEK:intel i7 6700h\n\n\tBu bilgisayarin islemcisinin termal ve hiz degerlerini kapasayan bir ibardeir.");
			
			
		}else{
			
			printf("\n\n\t\tBu bolumde genellikle tercih edilen bilgisayaralar harici ekran kartu tasiyan bilgisayaralardir.\n\t\tislemcilerinin hiz degerleri yuksek olur\n\n\t\tornek:intel i7 12700H\n\n\t\tasd");
	
		}	printf("Bana sormak istedigin ya da ogrenmek istedigin bir sey var mi?");
		printf("\nVar ise 7 ye basarmisin 7 yi severim :)");
			scanf("%d",&gidis);
			if(gidis=7){
			printf("\n4:Genc kartim ile aklima takilanlar\n5:Bu uygulama nasil yazildi?\n6:Sen kimsin?\n7:Uygulama gelistirmek zor mu?\n\n");
		scanf("%d",&secenek);
		
		switch(secenek){
			
			case 4:	
			int gidis;
			int secenek;
			int b;
			printf("genc kartini adlin mi 1.evet/2.hayir ?");
			scanf("%d",&b);
			
			if(b==1){
				printf("\n\t\tgenc kartin eger degistirimediysen yurt adresine gelicektir.\n\t\tyurt idaresine gidip gelip gelmedigini sorabilirsin.");
			}else{
				printf("\n\n\t\tburs ya da yurt basvurunda otomatik bir sekilde sana tedarik ediliyor\n\t\t(ucretsiz bir sekilde) erisebileceksin...");
			}
			printf("Bana sormak istedigin ya da ogrenmek istedigin bir sey var mi?");
		printf("\nVar ise 7 ye basarmisin 7 yi severim :)");
			scanf("%d",&gidis);
			if(gidis=7){
				printf("\n5:Bu uygulama nasil yazildi?\n6:Sen kimsin?\n7:Uygulama gelistirmek zor mu?\n\n");
				scanf("%d",&secenek);
				
				switch(secenek){
					case 5:
						printf("\n\n\t\t---Bu program case dongusu icersinide yazildi...:P\n\n\t\tDevami cok yakinda...");
							printf("Bana sormak istedigin ya da ogrenmek istedigin bir sey var mi?");
		printf("\nVar ise 7 ye basarmisin 7 yi severim :)");
			scanf("%d",&gidis);
			if(gidis=7){
				printf("\n6:Sen kimsin?\n7:Uygulama gelistirmek zor mu?\n\n");
				scanf("%d",&secenek);
				
				switch(secenek){
					
					case 6:
						printf("yardimcin");
						  
						
						break ;
				}
				
				
			}
						
					
					
				}
				
				
			}
			
			
		 
				
				
				break ;
		}
				
				
			}
			
			
			
			
				break ;
		}
			}
						
						
						
						
						 break ;
                         
			 case 3:
			 	int m;
			 	int secenek;
			 					printf("hangi alan bolumunde okuyorsun TYT:1 / AYT:2 ?");
		scanf("%d",&m);
		
		if(m==1){
			
			printf("\n\ttyt bolumu icin genellikle ince ve pili daha cok gidecek laptoplar tercih edilir.\n\tBu laptoplarin islemcilerinde H ibaresi bulunur\n\n\t\tORNEK:intel i7 6700h\n\n\tBu bilgisayarin islemcisinin termal ve hiz degerlerini kapasayan bir ibardeir.");
			
			
		}else{
			
			printf("\n\n\t\tBu bolumde genellikle tercih edilen bilgisayaralar harici ekran kartu tasiyan bilgisayaralardir.\n\t\tislemcilerinin hiz degerleri yuksek olur\n\n\t\tornek:intel i7 12700H\n\n\t\tasd");
	
		}
			printf("Bana sormak istedigin ya da ogrenmek istedigin bir sey var mi?");
		printf("\nVar ise 7 ye basarmisin 7 yi severim :)");
			scanf("%d",&gidis);
			if(gidis=7){
							printf("\n2:kyk yurdunda ihtiyacim olacak listesi\n4:Genc kartim ile aklima takilanlar\n5:Bu uygulama nasil yazildi?\n6:Sen kimsin?\n7:Uygulama gelistirmek zor mu?\n\n");
		scanf("%d",&secenek);
		
		switch(secenek){
			case 2:
				printf("\n\t\tliste biraz kalabalik not defterini getirmeyi unutma..\n\tCamasirlarin icin 'camasir filesine ihtiyacin var'\n\tSabun sabunnunu katacagin kutu,sampuan,2 adet canta biri buyuk biri kucuk\n\tDis fircasi ve kutusu\n\t3 adet terlik,pecete\n\tkahve seviyorsundur sanirim kupan'i da unutma");
                        
						
						
						
						
						 break ;
             case 4:
             		
			int b;
			printf("genc kartini adlin mi 1.evet/2.hayir ?");
			scanf("%d",&b);
			
			if(b==1){
				printf("\n\t\tgenc kartin eger degistirimediysen yurt adresine gelicektir.\n\t\tyurt idaresine gidip gelip gelmedigini sorabilirsin.");
			}else{
				printf("\n\n\t\tburs ya da yurt basvurunda otomatik bir sekilde sana tedarik ediliyor\n\t\t(ucretsiz bir sekilde) erisebileceksin...");
			}
			
		 break ;
			             
			
			
			
		}
				
			}
		
		

		break ;
			 	
			 
			     	
		}
	
			}
	
	
	
	
		break ;
		
		case 2:
			int gidis1; 
			
	     	printf("\n\t\tliste biraz kalabalik not defterini getirmeyi unutma..\n\tCamasirlarin icin 'camasir filesine ihtiyacin var'\n\tSabun sabunnunu katacagin kutu,sampuan,2 adet canta biri buyuk biri kucuk\n\tDis fircasi ve kutusu\n\t3 adet terlik,pecete\n\tkahve seviyorsundur sanirim kupan'i da unutma");
	     printf("Bana sormak istedigin ya da ogrenmek istedigin bir sey var mi?");
		printf("\nVar ise 7 ye basarmisin 7 yi severim :)");
			scanf("%d",&gidis1);
			if(gidis=7){
				printf("\n1:universitede yapilmasi gerekenler\n3:hangi bolume hangi bilgisayar?\n4:Genc kartim ile aklima takilanlar\n5:Bu uygulama nasil yazildi?\n6:Sen kimsin?\n7:Uygulama gelistirmek zor mu?\n\n");
		scanf("%d",&secenek);
		
		switch(secenek){
			case 1:
			printf("\t\t\tOncelikle ogrenci isleri hangi binada ogrenmek gerek.\n\t\t  daha sonra ogrenci islerini bulup ogrenci kartini alman gerek.\n\t\t\ sinif grubu kuruldu ise (ogretmenlerin dahil oldugu) bu grubtan gelen\n\t\tbildiri mesajlarina dikkat etmen gerek\n\t\tvoleybol futbol veya baska bir spor dali ile ilgili\n\t\tacilan kurslari buradan takip edebilirsin.");
			
			break;
			
			case 3:
				int t;
					printf("hangi alan bolumunde okuyorsun TYT:1 / AYT:2 ?");
		scanf("%d",&t);
		
		if(t==1){
			
			printf("\n\ttyt bolumu icin genellikle ince ve pili daha cok gidecek laptoplar tercih edilir.\n\tBu laptoplarin islemcilerinde H ibaresi bulunur\n\n\t\tORNEK:intel i7 6700h\n\n\tBu bilgisayarin islemcisinin termal ve hiz degerlerini kapasayan bir ibardeir.");
			
			
		}else{
			
			printf("\n\n\t\tBu bolumde genellikle tercih edilen bilgisayaralar harici ekran kartu tasiyan bilgisayaralardir.\n\t\tislemcilerinin hiz degerleri yuksek olur\n\n\t\tornek:intel i7 12700H\n\n\t\tasd");
	
		}
		

		break ;
				
				
			
			
		}
			}
		 
		 break ;
		 
		 case 3:
	
		int a;
			printf("hangi alan bolumunde okuyorsun TYT:1 / AYT:2 ?");
		scanf("%d",&a);
		
		if(a==1){
			
			printf("\n\ttyt bolumu icin genellikle ince ve pili daha cok gidecek laptoplar tercih edilir.\n\tBu laptoplarin islemcilerinde H ibaresi bulunur\n\n\t\tORNEK:intel i7 6700h\n\n\tBu bilgisayarin islemcisinin termal ve hiz degerlerini kapasayan bir ibardeir.");
			
			
		}else{
			
			printf("\n\n\t\tBu bolumde genellikle tercih edilen bilgisayaralar harici ekran kartu tasiyan bilgisayaralardir.\n\t\tislemcilerinin hiz degerleri yuksek olur\n\n\t\tornek:intel i7 12700H\n\n\t\tasd");
	
		}
		

		break ;
		
		case 4:
			
			int b;
			printf("genc kartini adlin mi 1.evet/2.hayir ?");
			scanf("%d",&b);
			
			if(b==1){
				printf("\n\t\tgenc kartin eger degistirimediysen yurt adresine gelicektir.\n\t\tyurt idaresine gidip gelip gelmedigini sorabilirsin.");
			}else{
				printf("\n\n\t\tburs ya da yurt basvurunda otomatik bir sekilde sana tedarik ediliyor\n\t\t(ucretsiz bir sekilde) erisebileceksin...");
			}
		 break ;
		 
		 case 5:
		 	printf("\n\n\t\t---Bu program case dongusu icersinide yazildi...:P\n\n\t\tDevami cok yakinda...");
		 	break;
	     
		 case 6:
		 	printf("\n\n\n\t\t\t---Senin yardimcin...");
		 	break ;
		 	case 7:
		 		printf("\n\n\t\tuygulama gelistirmek zor...\n\n\t\tAma calisiyorsan nerede hangi kodu girecegini biliyorsan basina acabilecegin en buyuk problem\n\t---calismaman olur---\n\n\t\tsakin ol ve nerden baslayacagina karar ver...\n\n\t\tc++ ve html css onerimdir\n\n\t\t(unutma matematik kodlamanin her yerinde...)");
		 	
		         	break ;
			
		
}
	
	
	
	return 0;
}
