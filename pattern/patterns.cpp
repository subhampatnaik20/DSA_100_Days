//#include <iostream>
//using namespace std;
//
//int main(){
//	for(int i=1; i<=3; i++){
//		for(int j=1; j<=3; j++){
//			cout<< j << " ";
//		}
//		cout<< endl;
//	}
//}


//#include <iostream>
//using namespace std;
//
//int main(){
//	int n;
//	cin>>n;
//	for(int i=1; i<=4; i++){
//		for(int j=1; j<=n; j++){
//			int b=n-j+1;
//			cout<< b << " ";
//		}
//		cout<< endl;
//	}
//}


//#include <iostream>
//using namespace std;
//
//int main(){
//	int n;
//	cin>>n;
//	int count=1;
//	int i = 1;
//	
//	while(i<n){
//		int j = 1;
//		
//		while(j<n){
//			cout<< count<<" ";
//			count++;
//			j++;		
//		}
//		cout<<endl;
//		i++;
//	}
//}
	


//#include <iostream>
//using namespace std;
//
//int main(){
//	int n;
//	cin>>n;
//	
//	int i=1;
//	while(i<=n){
//		
//		int j=1;
//		while(j<=n){
//			if(i>=j){
//				cout<<"* ";
//			}
//			j++;
//		}
//		cout<<endl;
//		i++;
//	}
//}

//#include <iostream>
//using namespace std;
//
//int main(){
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			if(i>=j){
//				cout<<i<<" ";
//			}
//		}
//		cout<<endl;
//	}
//}

//#include <iostream>
//using namespace std;
//
//int main(){
//	int n;
//	cin>>n;
//	
//	int count=1;
//	
//	for(int i=1; i<=n; i++){
//		for(int j=1; j<=n; j++){
//			if(i>=j){
//				cout<<count<<" ";
//				count++;
//			}
//		}
//		cout<<endl;
//	}
//}

//#include <iostream>
//using namespace std;
//
//int main(){
//	int n;
//	cin>>n;
//	int i = 1 ;
//	
//	while(i<=n){
//		int j=1;
////		int value = i;
//		while(j<=i){
////			cout<<value<<" ";
////			value++;
//			cout<<i+j-1<<" ";
//			j++;
//		}
//		cout<<endl;
//		i++;
//	}
//}



#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int i = 1 ;
	
	while(i<=n){
		int j=1;
//		int value = i;
		while(j<=i){
//			cout<<value<<" ";
//			value++;
			cout<<i-j+1<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}
}
